#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initialiseFooter();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialiseFooter(){
    qDebug() << GIT_VERSION;

    QString version(GIT_VERSION);
    QLabel *versionLabel = new QLabel(version);
    statusBar()->addWidget(versionLabel);
}
