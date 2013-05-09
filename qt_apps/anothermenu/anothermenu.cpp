#include "anothermenu.h"
#include <QMenu>
#include <QMenuBar>
#include <vector>

AnotherMenu::AnotherMenu(QWidget *parent) : QMainWindow(parent)
{
    // Instantiate the icons.
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");

    // Create the actions.
    QAction *newa = new QAction(newpix, "&New", this);
    QAction *open = new QAction(openpix, "&Open", this);
    QAction *quit = new QAction(quitpix, "&Close", this);
    
    // Add actions to a list
    std::vector<QAction *> alist;
    alist.push_back(newa);
    alist.push_back(open);
    alist.push_back(quit);

    quit->setShortcut(tr("CTRL+Q"));

    // Set up the menu.
    QMenu *file;
    file = menuBar()->addMenu("&File");

    std::vector<QAction *>::iterator bit = alist.begin();

    for (bit; bit != alist.end(); bit++)
    {
        QAction *current = *bit;
        if (current == quit)
            file->addSeparator();
        file->addAction(*bit);
    }

    connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
}


    


