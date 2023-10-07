#include "caldialog.h"
#include "ui_caldialog.h"
#include "iostream"
#include  "cmath"
#include "QStringList"
#include "math.h"
#include  <QtMath>
#include "caldialog.h"
#include "QApplication"
CalDialog::CalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalDialog)

{
    ui->setupUi(this);

}

CalDialog::~CalDialog()
{
    delete ui;

}

void CalDialog::on_btn_zero_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"0");
}

void CalDialog::on_btn_one_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"1");
}

void CalDialog::on_btn_two_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"2");
}

void CalDialog::on_btn_tree_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"3");
}

void CalDialog::on_btn_for_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"4");
}

void CalDialog::on_btn_five_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"5");
}

void CalDialog::on_btn_six_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"6");
}

void CalDialog::on_btn_seven_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"7");
}

void CalDialog::on_btn_eight_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"8");
}

void CalDialog::on_btn_nine_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"9");
}

void CalDialog::on_btn_decimal_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+".");
}

void CalDialog::on_btn_total_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"+");
    amalgar=Sum;

}

void CalDialog::on_btn_minus_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"-");
    amalgar=minus;
}

void CalDialog::on_btn_multiplication_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"*");
    amalgar=Multi;
}

void CalDialog::on_btn_division_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"/");
    amalgar=Division;
}

void CalDialog::on_btn_left_over_N_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"%");
    amalgar=Left_over;
}

void CalDialog::on_btn_power_2_clicked()
{
    num1 = ui->textEdit_New->toPlainText().toDouble();
    num2 = ui->textEdit_New->toPlainText().toDouble();
    ui->textEdit_New->setText("^" +ui->textEdit_New->toPlainText());
    amalgar=power;
}

void CalDialog::on_btn_sinus_N_clicked()
{

    num1 = ui->textEdit_New->toPlainText().toDouble();
    ui->textEdit_New->setText("Sin(" +ui->textEdit_New->toPlainText());
    amalgar=Sin;
}

void CalDialog::on_btn_cosinus_N_clicked()
{
    num1 = ui->textEdit_New->toPlainText().toDouble();
     ui->textEdit_New->setText("Cos(" +ui->textEdit_New->toPlainText());
     amalgar=Cos;
}

void CalDialog::on_btn_tangent_N_clicked()
{
    num1 = ui->textEdit_New->toPlainText().toDouble();
     ui->textEdit_New->setText("Tan(" +ui->textEdit_New->toPlainText());
     amalgar=Tan;
}

void CalDialog::on_btn_the_root_N_clicked()
{
    num1 = ui->textEdit_New->toPlainText().toDouble();
     ui->textEdit_New->setText("Root(" +ui->textEdit_New->toPlainText());
     amalgar=Root;
}
void CalDialog::on_Logaritm_clicked()
{
     num1 = ui->textEdit_New->toPlainText().toDouble();
    ui->textEdit_New->setText("Log(" +ui->textEdit_New->toPlainText());
    amalgar=Log;
}

void CalDialog::on_btn_equal_N_clicked()
{
    QString s =ui->textEdit_New->toPlainText();
       switch (amalgar) {
       case Left_over:
       {
           QStringList list =s.split("%");
           if(list.length()==2){
                int num1=list[0].toDouble();
               int num2=list[1].toDouble();
                ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"="+QString::number(num1%num2));

           }

       }

           break;
       case Sin:
       {

             double result= qSin(qDegreesToRadians(num1));
             ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(result));
       }

           break;
       case Cos:
       {
              double result= qCos(qDegreesToRadians(num1));
              ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(result));


       }

           break;
       case Root:
       {


           double result= qSqrt(num1);
              ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(result));


       }

           break;
       case Tan:
       {

           double result= qTan(qDegreesToRadians(num1));
           ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(result));


       }

           break;
       case Log:
       {

            double result= log(qDegreesToRadians(num1));
              ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(result));


       }
       case power:
       {


           double result= qLn(num1);

              ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"="+QString::number(result));


       }


           break;
       case pus_min:
       {


           qDegreesToRadians(abs(num1));


              ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")="+QString::number(+num1));


       }


           break;
   }
       amalgar=Nop;
}


void CalDialog::on_btn_clean_2_clicked()
{

    ui->textEdit_New->clear();

}

void CalDialog::on_Parentheses_clicked()
{
    ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+")");
}

void CalDialog::on_Parentheses_1_clicked()
{
     ui->textEdit_New->setText(ui->textEdit_New->toPlainText()+"(");
}
void CalDialog::on_btn_pus_min_clicked()
{
    ui->textEdit_New->setText("-" +ui->textEdit_New->toPlainText());
    amalgar=pus_min;
}

void CalDialog::on_btn_clean_char_2_clicked()
{
    ui->textEdit_New->textCursor().insertHtml("");
}

void CalDialog::on_quit_btn_clicked()
{
    QApplication::quit();
}
