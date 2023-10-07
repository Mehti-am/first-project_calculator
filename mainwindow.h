#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "caldialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum opereation_mod{
           Nop,
           equal,
           Sum,
           minus,
           Multi,
           Division,
           Left_over,
           Sin,
           Cos,
           tan


       };

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_zero_clicked();

    void on_btn_one_clicked();

    void on_btn_two_clicked();

    void on_btn_tree_clicked();

    void on_btn_for_clicked();

    void on_btn_five_clicked();

    void on_btn_six_clicked();

    void on_btn_seven_clicked();

    void on_btn_eight_clicked();

    void on_btn_nine_clicked();

    void on_btn_decimal_clicked();

    void on_btn_total_clicked();

    void on_btn_minus_clicked();

    void on_btn_multiplication_clicked();

    void on_btn_division_clicked();

    void on_btn_left_over_clicked();

    void on_btn_equal_clicked();

    void on_btn_sinus_clicked();

    void on_btn_cosinus_clicked();

    void on_btn_tangent_clicked();

    void on_btn_clean_clicked();

    void on_btn_clean_char_clicked();

    void on_actionScientific_triggered();

    void on_actionStandard_triggered();

    void on_btn_quit_clicked();

private:
     CalDialog *caldialog;
     double num1,num2;
     opereation_mod mod;
     Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
