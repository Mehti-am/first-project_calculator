#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include  "cmath"
#include "QStringList"
#include "math.h"
#include  <QtMath>
#include "caldialog.h"

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


void MainWindow::on_btn_zero_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"0");

}

void MainWindow::on_btn_one_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"1");
}

void MainWindow::on_btn_two_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"2");
}

void MainWindow::on_btn_tree_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"3");
}

void MainWindow::on_btn_for_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"4");
}

void MainWindow::on_btn_five_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"5");
}


void MainWindow::on_btn_six_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"6");
}

void MainWindow::on_btn_seven_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"7");
}

void MainWindow::on_btn_eight_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"8");
}

void MainWindow::on_btn_nine_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+"9");
}

void MainWindow::on_btn_decimal_clicked()
{
     ui->textEdit->setText(ui->textEdit->toPlainText()+".");
}

void MainWindow::on_btn_total_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"+");
        mod=Sum;
}

void MainWindow::on_btn_minus_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"-");
        mod=minus;
}

void MainWindow::on_btn_multiplication_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"*");
        mod=Multi;
}

void MainWindow::on_btn_division_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"/");
        mod=Division;
}

void MainWindow::on_btn_left_over_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"%");
        mod=Left_over;
}

void MainWindow::on_btn_equal_clicked()
{

       QString s =ui->textEdit->toPlainText();
       switch (mod) {
       case Sum:
       {
           QStringList list =s.split("+");
           if(list.length()==2){
                num1=list[0].toDouble();
                num2=list[1].toDouble();
                ui->textEdit->setText(ui->textEdit->toPlainText()+"="+QString::number(num1+num2));

           }

       }


           break;
       case minus:
       {
           QStringList list =s.split("-");
           if(list.length()==2){
                num1=list[0].toDouble();
                num2=list[1].toDouble();
                ui->textEdit->setText(ui->textEdit->toPlainText()+"="+QString::number(num1-num2));

           }

       }


           break;
       case Multi:
       {
           QStringList list =s.split("*");
           if(list.length()==2){
                num1=list[0].toDouble();
                num2=list[1].toDouble();
                ui->textEdit->setText(ui->textEdit->toPlainText()+"="+QString::number(num1*num2));

           }

       }


           break;
       case Division:
       {
           QStringList list =s.split("/");
           if(list.length()==2){
                num1=list[0].toDouble();
                num2=list[1].toDouble();
                ui->textEdit->setText(ui->textEdit->toPlainText()+"="+QString::number(num1/num2));

           }

       }


           break;
       case Left_over:
       {
           QStringList list =s.split("%");
           if(list.length()==2){
                int num1=list[0].toDouble();
               int num2=list[1].toDouble();
                ui->textEdit->setText(ui->textEdit->toPlainText()+"="+QString::number(num1%num2));

           }

       }

           break;

   }
       mod=Nop;

   }
void MainWindow::on_btn_clean_clicked()
{
    ui->textEdit->clear();

}

void MainWindow::on_btn_clean_char_clicked()
{
    //if(ui->textEdit)
     //   return;
  //  QString taxt;
//    if(text.is)
}

void MainWindow::on_actionScientific_triggered()
{
    hide();
    caldialog =new CalDialog(this);
    caldialog->show();

}

void MainWindow::on_actionStandard_triggered()
{
    MainWindow().show();
}

void MainWindow::on_btn_quit_clicked()
{
    QApplication::quit();
}
