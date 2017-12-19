#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openFile();
    void about();
    void aboutQt();

private:
    void createMenus();
    void createActions();


    QMenu *fileMenu;
    QMenu *helpMenu;

    QAction *openAct;
    QAction *exitAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

};

#endif // MAINWINDOW_H
