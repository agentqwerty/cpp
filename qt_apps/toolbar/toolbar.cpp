#include "toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

Toolbar::Toolbar(QWidget *parent) : QMainWindow(parent)
{
    QPixmap newpix("icons/new.png");
    QPixmap openpix("icons/open.png");
    QPixmap quitpix("icons/quit.png");

    QToolBar *toolbar = addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();
    QAction *quit = toolbar->addAction(QIcon(quitpix), "Quit App");

    connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));

}
