#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton0_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonplus_clicked();

    void on_pushButtonminus_clicked();

    void on_pushButtondiv_clicked();

    void on_pushButtonmult_clicked();

    void on_pushButtonAC_clicked();

    void on_pushButtonequal_clicked();

private:
    Ui::MainWindow *ui;
    QString FirstNum;
    QString SecondNum;
    QString Operator;
    void Reset();
    void managecalc(QString buttonText);

};
#endif // MAINWINDOW_H
