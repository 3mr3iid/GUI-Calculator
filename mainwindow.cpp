#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::managecalc(QString buttonText )
{
    if(Operator =="")
    {
        FirstNum=buttonText;
        ui->DisplayBox->setText((FirstNum));
    }
    else
    {
        SecondNum=buttonText;
        ui->DisplayBox->setText(ui->DisplayBox->text()+SecondNum);
    }
}
void MainWindow::on_pushButton1_clicked()
{
    managecalc(ui->pushButton1->text());
}

void MainWindow::Reset()
{
    FirstNum="";
    SecondNum="";
    Operator="";
    ui->DisplayBox->setText("");
}
void MainWindow::on_pushButton0_clicked()
{
    managecalc(ui->pushButton0->text());
}


void MainWindow::on_pushButton2_clicked()
{
    managecalc(ui->pushButton2->text());
}


void MainWindow::on_pushButton3_clicked()
{
    managecalc(ui->pushButton3->text());
}


void MainWindow::on_pushButton4_clicked()
{
    managecalc(ui->pushButton4->text());
}


void MainWindow::on_pushButton5_clicked()
{
    managecalc(ui->pushButton5->text());
}


void MainWindow::on_pushButton6_clicked()
{
    managecalc(ui->pushButton6->text());
}


void MainWindow::on_pushButton7_clicked()
{
    managecalc(ui->pushButton7->text());
}


void MainWindow::on_pushButton8_clicked()
{
    managecalc(ui->pushButton8->text());
}


void MainWindow::on_pushButton9_clicked()
{
    managecalc(ui->pushButton9->text());
}


void MainWindow::on_pushButtonplus_clicked()
{
    if(FirstNum!="" && Operator=="")
    {
        Operator=ui->pushButtonplus->text();
        ui->DisplayBox->setText(ui->DisplayBox->text()+Operator);
    }
    else if(FirstNum=="")
    {
        Reset();
        ui->DisplayBox->setText("You don't have a first Num");
    }
    else
    {
        Reset();
        ui->DisplayBox->setText("No multiple operations allowed");
    }
}


void MainWindow::on_pushButtonminus_clicked()
{
    if(FirstNum!="" && Operator=="")
    {
        Operator=ui->pushButtonminus->text();
        ui->DisplayBox->setText(ui->DisplayBox->text()+Operator);
    }
    else if(FirstNum=="")
    {
        Reset();
        ui->DisplayBox->setText("You don't have a first Num");
    }
    else
    {
        Reset();
        ui->DisplayBox->setText("No multiple operations allowed");
    }
}


void MainWindow::on_pushButtondiv_clicked()
{
    if(FirstNum!="" && Operator=="")
    {
        Operator=ui->pushButtondiv->text();
        ui->DisplayBox->setText(ui->DisplayBox->text()+Operator);
    }
    else if(FirstNum=="")
    {
        Reset();
        ui->DisplayBox->setText("You don't have a first Num");
    }
    else
    {
        Reset();
        ui->DisplayBox->setText("No multiple operations allowed");
    }
}


void MainWindow::on_pushButtonmult_clicked()
{
    if(FirstNum!="" && Operator=="")
    {
        Operator=ui->pushButtonmult->text();
        ui->DisplayBox->setText(ui->DisplayBox->text()+Operator);
    }
    else if(FirstNum=="")
    {
        Reset();
        ui->DisplayBox->setText("You don't have a first Num");
    }
    else
    {
        Reset();
        ui->DisplayBox->setText("No multiple operations allowed");
    }
}


void MainWindow::on_pushButtonAC_clicked()
{
    Reset();
}


void MainWindow::on_pushButtonequal_clicked()
{
    if(Operator=="")
    {
        Reset();
        ui->DisplayBox->setText("No operation exists");
    }
    else if(SecondNum=="")
    {
        Reset();
        ui->DisplayBox->setText("No Second Number");
    }
    else if (Operator=="+")
    {
        ui->DisplayBox->setText(QString::number(FirstNum.toInt()+SecondNum.toInt()));
    }
    else if (Operator=="*")
    {
        ui->DisplayBox->setText(QString::number(FirstNum.toInt()*SecondNum.toInt()));
    }
    else if (Operator=="/")
    {
        ui->DisplayBox->setText(QString::number(FirstNum.toFloat()/SecondNum.toFloat()));
    }
    else if (Operator=="-")
    {
        ui->DisplayBox->setText(QString::number(FirstNum.toInt()-SecondNum.toInt()));
    }
}

