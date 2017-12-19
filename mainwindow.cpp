#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    createActions();
    createMenus();

}

MainWindow::~MainWindow(){

}

void MainWindow::createMenus(){
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openAct);
    fileMenu->addAction(exitAct);

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);

}

void MainWindow::createActions(){
    openAct = new QAction(tr("&Open"), this);
    //openAct->setShortcuts(QKeySequence::Open);
    //openAct->setStatusTip(tr("Open a TinyCAD file"));
    connect(openAct, SIGNAL(triggered()), this, SLOT(openFile()));

    exitAct = new QAction(tr("&Exit"), this);
    exitAct->setShortcuts(QKeySequence::Close);
    //exitAct->setStatusTip(tr("Exit TinyViewer"));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

    aboutAct = new QAction(tr("&About"), this);
    //aboutAct->setShortcuts(QKeySequence::Open);
    //aboutAct->setStatusTip(tr("Create a new file"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction(tr("&About Qt"), this);
    //aboutQtAct->setShortcuts(QKeySequence::Open);
    //aboutQtAct->setStatusTip(tr("Create a new file"));
    connect(aboutQtAct, SIGNAL(triggered()), this, SLOT(aboutQt()));

}

void MainWindow::openFile(){

}

void MainWindow::about(){

}

void MainWindow::aboutQt(){

}
