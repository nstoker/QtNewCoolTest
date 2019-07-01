#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QDebug>

#include "application_version.h"

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
    setWindowTitle(APP_TITLE);
    QLabel *versionLabel = new QLabel(appVersionString);
    statusBar()->addPermanentWidget(versionLabel);
}
