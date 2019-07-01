#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

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
    QLabel *versionLabel = new QLabel("APP_VERSION");
    statusBar()->addWidget(versionLabel);
}
