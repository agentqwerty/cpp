#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>
#include <QIcon>
#include <QFrame>
#include <QGridLayout>
#include <QPushButton>

/* Classes */
class Cursors : public QWidget
{
    public:
        Cursors(QWidget *parent = 0);
};

Cursors::Cursors(QWidget *parent) : QWidget(parent)
{
    //Make a button
    QPushButton *quit = new QPushButton("Quit", this);
    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));


    QFrame *frame1 = new QFrame(this);
    frame1->setFrameStyle(QFrame::Box);
    frame1->setCursor(Qt::SizeAllCursor);
    frame1->setToolTip("SizeAll");

    QFrame *frame2 = new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);
    frame2->setCursor(Qt::WaitCursor);
    frame2->setToolTip("Wait");

    QFrame *frame3 = new QFrame(this);
    frame3->setFrameStyle(QFrame::Box);
    frame3->setCursor(Qt::PointingHandCursor);
    frame3->setToolTip("PointingHand");

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(frame1, 0, 0);
    grid->addWidget(frame2, 0, 1);
    grid->addWidget(frame3, 0, 2);
    grid->addWidget(quit, 1, 0);

    setLayout(grid);
}

int main(int argc, char *argv[])
{

    // Window height and width.
    int width = 250;
    int height = 150;
    int x,y;
    int screenWidth, screenHeight;

    QApplication app(argc, argv);
    Cursors window;

    // Get the desktop width and height.
    QDesktopWidget *desktop = QApplication::desktop();
    screenWidth = desktop->width();
    screenHeight = desktop->height();

    // Get the screen center.
    x = (screenWidth - width) / 2;
    y = (screenHeight - height) / 2;

    window.resize(width, height);
    window.move(x, y);

    // Set title and tooltip.
    window.setWindowTitle("Centered!");
    window.setWindowIcon(QIcon("icons/ness_icon.gif"));
    window.show();

    return app.exec();
}
