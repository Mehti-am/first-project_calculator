#ifndef CALDIALOG_H
#define CALDIALOG_H

#include <QDialog>

namespace Ui {
class CalDialog;
}

class CalDialog : public QDialog
{
    Q_OBJECT


public:

    enum opereation_amalgar{
           Nop,
           equal,
           Sum,
           minus,
           Multi,
           Division,
           Left_over,
           Sin,
           Cos,
           Tan,
           power,
           Root,
           Log,
           pus_min,


       };
    explicit CalDialog(QWidget *parent = nullptr);
    ~CalDialog();

private slots:
    void on_btn_zero_N_clicked();

    void on_btn_one_N_clicked();

    void on_btn_two_N_clicked();

    void on_btn_tree_N_clicked();

    void on_btn_for_N_clicked();

    void on_btn_five_N_clicked();

    void on_btn_six_N_clicked();

    void on_btn_seven_N_clicked();

    void on_btn_eight_N_clicked();

    void on_btn_nine_N_clicked();

    void on_btn_decimal_N_clicked();

    void on_btn_total_N_clicked();

    void on_btn_minus_N_clicked();

    void on_btn_multiplication_N_clicked();

    void on_btn_division_N_clicked();

    void on_btn_left_over_N_clicked();

    void on_btn_power_2_clicked();

    void on_btn_sinus_N_clicked();

    void on_btn_cosinus_N_clicked();

    void on_btn_tangent_N_clicked();

    void on_btn_the_root_N_clicked();

    void on_btn_equal_N_clicked();

    void on_btn_clean_2_clicked();

    void on_Parentheses_clicked();

    void on_Parentheses_1_clicked();

    void on_Logaritm_clicked();

    void on_pushButton_clicked();

    void on_btn_pus_min_clicked();

    void on_btn_clean_char_2_clicked();

    void on_quit_btn_clicked();

private:
     double num1,num2;
    opereation_amalgar amalgar;
    Ui::CalDialog *ui;

};

#endif // CALDIALOG_H
