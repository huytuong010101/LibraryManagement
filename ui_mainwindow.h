/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSignOut;
    QAction *ActionProfile;
    QAction *actionBorrowBook;
    QAction *actionInOutBook;
    QAction *actionQu_n_l_t_i_kho_n;
    QAction *actionQu_n_l_nh_n_vi_n;
    QAction *actionCreateAcc;
    QAction *actionManageShift;
    QAction *actionManageEmployee;
    QAction *actionManageAccount;
    QAction *actionManageBook;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *col1;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupAction;
    QGridLayout *gridLayout;
    QPushButton *btnBorrowBook;
    QPushButton *btnReturnBook;
    QPushButton *btnListBorrowBook;
    QPushButton *btnListBorrowUser;
    QGroupBox *groupSelectedBook;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableSelectedBook;
    QGroupBox *groupUsers;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupSearchUser;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupSearchBy;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioNameSearchUser;
    QRadioButton *radioIDSearchUser;
    QRadioButton *radioPhoneSearchUser;
    QRadioButton *radioIDCardSearchUser;
    QGroupBox *groupQuerySearchUser;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *inputQuerySearchUser;
    QTableView *tableListUser;
    QGroupBox *col2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupSearchBook;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupSearchBookBy;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioNameSearchBook;
    QRadioButton *radioAuthorSearchBook;
    QRadioButton *radioIDSearchBook;
    QGroupBox *groupInputSearchBook;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputQuerySearchBook;
    QTableView *tableListBookSearch;
    QMenuBar *menuBar;
    QMenu *menuT_i_kho_n;
    QMenu *menuT_c_v;
    QMenu *menuQu_n_tr_vi_n;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QSqlDatabase db;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1092, 644);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/\314\211\314\211\314\211\314\211\314\211\314\211ku/Downloads/1498673348_bookshelf-2i0xcxy.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSignOut = new QAction(MainWindow);
        actionSignOut->setObjectName(QString::fromUtf8("actionSignOut"));
        ActionProfile = new QAction(MainWindow);
        ActionProfile->setObjectName(QString::fromUtf8("ActionProfile"));
        actionBorrowBook = new QAction(MainWindow);
        actionBorrowBook->setObjectName(QString::fromUtf8("actionBorrowBook"));
        actionInOutBook = new QAction(MainWindow);
        actionInOutBook->setObjectName(QString::fromUtf8("actionInOutBook"));
        actionQu_n_l_t_i_kho_n = new QAction(MainWindow);
        actionQu_n_l_t_i_kho_n->setObjectName(QString::fromUtf8("actionQu_n_l_t_i_kho_n"));
        actionQu_n_l_nh_n_vi_n = new QAction(MainWindow);
        actionQu_n_l_nh_n_vi_n->setObjectName(QString::fromUtf8("actionQu_n_l_nh_n_vi_n"));
        actionCreateAcc = new QAction(MainWindow);
        actionCreateAcc->setObjectName(QString::fromUtf8("actionCreateAcc"));
        actionManageShift = new QAction(MainWindow);
        actionManageShift->setObjectName(QString::fromUtf8("actionManageShift"));
        actionManageEmployee = new QAction(MainWindow);
        actionManageEmployee->setObjectName(QString::fromUtf8("actionManageEmployee"));
        actionManageAccount = new QAction(MainWindow);
        actionManageAccount->setObjectName(QString::fromUtf8("actionManageAccount"));
        actionManageBook = new QAction(MainWindow);
        actionManageBook->setObjectName(QString::fromUtf8("actionManageBook"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_6 = new QHBoxLayout(centralWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        col1 = new QGroupBox(centralWidget);
        col1->setObjectName(QString::fromUtf8("col1"));
        verticalLayout_5 = new QVBoxLayout(col1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupAction = new QGroupBox(col1);
        groupAction->setObjectName(QString::fromUtf8("groupAction"));
        gridLayout = new QGridLayout(groupAction);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnBorrowBook = new QPushButton(groupAction);
        btnBorrowBook->setObjectName(QString::fromUtf8("btnBorrowBook"));

        gridLayout->addWidget(btnBorrowBook, 0, 0, 1, 1);

        btnReturnBook = new QPushButton(groupAction);
        btnReturnBook->setObjectName(QString::fromUtf8("btnReturnBook"));

        gridLayout->addWidget(btnReturnBook, 0, 1, 1, 1);

        btnListBorrowBook = new QPushButton(groupAction);
        btnListBorrowBook->setObjectName(QString::fromUtf8("btnListBorrowBook"));

        gridLayout->addWidget(btnListBorrowBook, 0, 2, 1, 1);

        btnListBorrowUser = new QPushButton(groupAction);
        btnListBorrowUser->setObjectName(QString::fromUtf8("btnListBorrowUser"));

        gridLayout->addWidget(btnListBorrowUser, 0, 3, 1, 1);


        verticalLayout_5->addWidget(groupAction);

        groupSelectedBook = new QGroupBox(col1);
        groupSelectedBook->setObjectName(QString::fromUtf8("groupSelectedBook"));
        verticalLayout_2 = new QVBoxLayout(groupSelectedBook);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableSelectedBook = new QTableView(groupSelectedBook);
        tableSelectedBook->setObjectName(QString::fromUtf8("tableSelectedBook"));

        verticalLayout_2->addWidget(tableSelectedBook);


        verticalLayout_5->addWidget(groupSelectedBook);

        groupUsers = new QGroupBox(col1);
        groupUsers->setObjectName(QString::fromUtf8("groupUsers"));
        verticalLayout_4 = new QVBoxLayout(groupUsers);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupSearchUser = new QGroupBox(groupUsers);
        groupSearchUser->setObjectName(QString::fromUtf8("groupSearchUser"));
        horizontalLayout_5 = new QHBoxLayout(groupSearchUser);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupSearchBy = new QGroupBox(groupSearchUser);
        groupSearchBy->setObjectName(QString::fromUtf8("groupSearchBy"));
        horizontalLayout_4 = new QHBoxLayout(groupSearchBy);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioNameSearchUser = new QRadioButton(groupSearchBy);
        radioNameSearchUser->setObjectName(QString::fromUtf8("radioNameSearchUser"));

        horizontalLayout_4->addWidget(radioNameSearchUser);

        radioIDSearchUser = new QRadioButton(groupSearchBy);
        radioIDSearchUser->setObjectName(QString::fromUtf8("radioIDSearchUser"));

        horizontalLayout_4->addWidget(radioIDSearchUser);

        radioPhoneSearchUser = new QRadioButton(groupSearchBy);
        radioPhoneSearchUser->setObjectName(QString::fromUtf8("radioPhoneSearchUser"));

        horizontalLayout_4->addWidget(radioPhoneSearchUser);

        radioIDCardSearchUser = new QRadioButton(groupSearchBy);
        radioIDCardSearchUser->setObjectName(QString::fromUtf8("radioIDCardSearchUser"));

        horizontalLayout_4->addWidget(radioIDCardSearchUser);


        horizontalLayout_5->addWidget(groupSearchBy);

        groupQuerySearchUser = new QGroupBox(groupSearchUser);
        groupQuerySearchUser->setObjectName(QString::fromUtf8("groupQuerySearchUser"));
        verticalLayout_3 = new QVBoxLayout(groupQuerySearchUser);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        inputQuerySearchUser = new QLineEdit(groupQuerySearchUser);
        inputQuerySearchUser->setObjectName(QString::fromUtf8("inputQuerySearchUser"));

        verticalLayout_3->addWidget(inputQuerySearchUser);


        horizontalLayout_5->addWidget(groupQuerySearchUser);


        verticalLayout_4->addWidget(groupSearchUser);

        tableListUser = new QTableView(groupUsers);
        tableListUser->setObjectName(QString::fromUtf8("tableListUser"));

        verticalLayout_4->addWidget(tableListUser);


        verticalLayout_5->addWidget(groupUsers);


        horizontalLayout_6->addWidget(col1);

        col2 = new QGroupBox(centralWidget);
        col2->setObjectName(QString::fromUtf8("col2"));
        verticalLayout = new QVBoxLayout(col2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupSearchBook = new QGroupBox(col2);
        groupSearchBook->setObjectName(QString::fromUtf8("groupSearchBook"));
        horizontalLayout_3 = new QHBoxLayout(groupSearchBook);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupSearchBookBy = new QGroupBox(groupSearchBook);
        groupSearchBookBy->setObjectName(QString::fromUtf8("groupSearchBookBy"));
        horizontalLayout_2 = new QHBoxLayout(groupSearchBookBy);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioNameSearchBook = new QRadioButton(groupSearchBookBy);
        radioNameSearchBook->setObjectName(QString::fromUtf8("radioNameSearchBook"));

        horizontalLayout_2->addWidget(radioNameSearchBook);

        radioAuthorSearchBook = new QRadioButton(groupSearchBookBy);
        radioAuthorSearchBook->setObjectName(QString::fromUtf8("radioAuthorSearchBook"));

        horizontalLayout_2->addWidget(radioAuthorSearchBook);

        radioIDSearchBook = new QRadioButton(groupSearchBookBy);
        radioIDSearchBook->setObjectName(QString::fromUtf8("radioIDSearchBook"));

        horizontalLayout_2->addWidget(radioIDSearchBook);


        horizontalLayout_3->addWidget(groupSearchBookBy);

        groupInputSearchBook = new QGroupBox(groupSearchBook);
        groupInputSearchBook->setObjectName(QString::fromUtf8("groupInputSearchBook"));
        horizontalLayout = new QHBoxLayout(groupInputSearchBook);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        inputQuerySearchBook = new QLineEdit(groupInputSearchBook);
        inputQuerySearchBook->setObjectName(QString::fromUtf8("inputQuerySearchBook"));

        horizontalLayout->addWidget(inputQuerySearchBook);


        horizontalLayout_3->addWidget(groupInputSearchBook);


        verticalLayout->addWidget(groupSearchBook);

        tableListBookSearch = new QTableView(col2);
        tableListBookSearch->setObjectName(QString::fromUtf8("tableListBookSearch"));

        verticalLayout->addWidget(tableListBookSearch);


        horizontalLayout_6->addWidget(col2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1092, 21));
        menuT_i_kho_n = new QMenu(menuBar);
        menuT_i_kho_n->setObjectName(QString::fromUtf8("menuT_i_kho_n"));
        menuT_c_v = new QMenu(menuBar);
        menuT_c_v->setObjectName(QString::fromUtf8("menuT_c_v"));
        menuQu_n_tr_vi_n = new QMenu(menuBar);
        menuQu_n_tr_vi_n->setObjectName(QString::fromUtf8("menuQu_n_tr_vi_n"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuT_i_kho_n->menuAction());
        menuBar->addAction(menuT_c_v->menuAction());
        menuBar->addAction(menuQu_n_tr_vi_n->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuT_i_kho_n->addAction(actionSignOut);
        menuT_i_kho_n->addAction(ActionProfile);
        menuT_i_kho_n->addSeparator();
        menuT_c_v->addAction(actionBorrowBook);
        menuT_c_v->addAction(actionInOutBook);
        menuT_c_v->addAction(actionCreateAcc);
        menuQu_n_tr_vi_n->addAction(actionManageShift);
        menuQu_n_tr_vi_n->addAction(actionManageEmployee);
        menuQu_n_tr_vi_n->addAction(actionManageAccount);
        menuQu_n_tr_vi_n->addAction(actionManageBook);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 th\306\260 vi\341\273\207n", 0, QApplication::UnicodeUTF8));
        actionSignOut->setText(QApplication::translate("MainWindow", "\304\220\304\203ng xu\341\272\245t", 0, QApplication::UnicodeUTF8));
        ActionProfile->setText(QApplication::translate("MainWindow", "Th\303\264ng tin t\303\240i kho\341\272\243n", 0, QApplication::UnicodeUTF8));
        actionBorrowBook->setText(QApplication::translate("MainWindow", "M\306\260\341\273\243n tr\341\272\243 s\303\241ch", 0, QApplication::UnicodeUTF8));
        actionInOutBook->setText(QApplication::translate("MainWindow", "Nh\341\272\255p xu\341\272\245t s\303\241ch", 0, QApplication::UnicodeUTF8));
        actionQu_n_l_t_i_kho_n->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 t\303\240i kho\341\272\243n", 0, QApplication::UnicodeUTF8));
        actionQu_n_l_nh_n_vi_n->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 nh\303\242n vi\303\252n", 0, QApplication::UnicodeUTF8));
        actionCreateAcc->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275 t\303\240i kho\341\272\243n", 0, QApplication::UnicodeUTF8));
        actionManageShift->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 ca l\303\240m vi\341\273\207c", 0, QApplication::UnicodeUTF8));
        actionManageEmployee->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 nh\303\242n vi\303\252n", 0, QApplication::UnicodeUTF8));
        actionManageAccount->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 t\303\240i kho\341\272\243n", 0, QApplication::UnicodeUTF8));
        actionManageBook->setText(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 s\303\241ch", 0, QApplication::UnicodeUTF8));
        col1->setTitle(QString());
        groupAction->setTitle(QApplication::translate("MainWindow", "Thao t\303\241c", 0, QApplication::UnicodeUTF8));
        btnBorrowBook->setText(QApplication::translate("MainWindow", "M\306\260\341\273\243n s\303\241ch", 0, QApplication::UnicodeUTF8));
        btnReturnBook->setText(QApplication::translate("MainWindow", "Tr\341\272\243 s\303\241ch", 0, QApplication::UnicodeUTF8));
        btnListBorrowBook->setText(QApplication::translate("MainWindow", "Xem s\303\241ch \304\221\303\243 m\306\260\341\273\243n", 0, QApplication::UnicodeUTF8));
        btnListBorrowUser->setText(QApplication::translate("MainWindow", "Danh s\303\241ch \304\221\303\243 m\306\260\341\273\243n", 0, QApplication::UnicodeUTF8));
        groupSelectedBook->setTitle(QApplication::translate("MainWindow", "S\303\241ch \304\221\303\243 ch\341\273\215n", 0, QApplication::UnicodeUTF8));
        groupUsers->setTitle(QApplication::translate("MainWindow", "Ng\306\260\341\273\235i d\303\271ng \304\221\303\243 ch\341\273\215n", 0, QApplication::UnicodeUTF8));
        groupSearchUser->setTitle(QString());
        groupSearchBy->setTitle(QApplication::translate("MainWindow", "T\303\254m ki\341\272\277m theo", 0, QApplication::UnicodeUTF8));
        radioNameSearchUser->setText(QApplication::translate("MainWindow", "T\303\252n", 0, QApplication::UnicodeUTF8));
        radioIDSearchUser->setText(QApplication::translate("MainWindow", "CMND", 0, QApplication::UnicodeUTF8));
        radioPhoneSearchUser->setText(QApplication::translate("MainWindow", "S\304\220T", 0, QApplication::UnicodeUTF8));
        radioIDCardSearchUser->setText(QApplication::translate("MainWindow", "M\303\243 th\341\272\273", 0, QApplication::UnicodeUTF8));
        groupQuerySearchUser->setTitle(QApplication::translate("MainWindow", "Nh\341\272\255p th\303\264ng tin", 0, QApplication::UnicodeUTF8));
        col2->setTitle(QString());
        groupSearchBook->setTitle(QApplication::translate("MainWindow", "T\303\254m ki\341\272\277m s\303\241ch", 0, QApplication::UnicodeUTF8));
        groupSearchBookBy->setTitle(QApplication::translate("MainWindow", "T\303\254m ki\341\272\277m theo", 0, QApplication::UnicodeUTF8));
        radioNameSearchBook->setText(QApplication::translate("MainWindow", "T\303\252n s\303\241ch", 0, QApplication::UnicodeUTF8));
        radioAuthorSearchBook->setText(QApplication::translate("MainWindow", "T\303\241c gi\341\272\243", 0, QApplication::UnicodeUTF8));
        radioIDSearchBook->setText(QApplication::translate("MainWindow", "M\303\243 s\303\241ch", 0, QApplication::UnicodeUTF8));
        groupInputSearchBook->setTitle(QApplication::translate("MainWindow", "Nh\341\272\255p th\303\264ng tin", 0, QApplication::UnicodeUTF8));
        menuT_i_kho_n->setTitle(QApplication::translate("MainWindow", "T\303\240i kho\341\272\243n", 0, QApplication::UnicodeUTF8));
        menuT_c_v->setTitle(QApplication::translate("MainWindow", "T\303\241c v\341\273\245", 0, QApplication::UnicodeUTF8));
        menuQu_n_tr_vi_n->setTitle(QApplication::translate("MainWindow", "Qu\341\272\243n tr\341\273\213 vi\303\252n", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Gi\341\273\233i thi\341\273\207u", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
