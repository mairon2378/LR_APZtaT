#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SLOC_clicked();

    void on_EmptyLines_clicked();

    void on_Comments_clicked();

    void on_OnlyCode_clicked();

    void on_VocOperandn2_clicked();

    void on_VocOperatn1_clicked();

    void on_AllOperatN1_clicked();

    void on_AllOperandN2_clicked();

    void on_Cyclomatic_clicked();

    void on_Voc_clicked();

    void on_N_clicked();

    void on_V_clicked();

    void on_CI_clicked();

    void loadFile();

    void analyzationAll();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
