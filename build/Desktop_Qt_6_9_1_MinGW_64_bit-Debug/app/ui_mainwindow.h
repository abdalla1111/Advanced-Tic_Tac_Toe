/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_0_login;
    QVBoxLayout *verticalLayout_2;
    QLabel *gameNameLabelPage0;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *loginUsernameLineEdit;
    QHBoxLayout *loginPassLayout;
    QLineEdit *loginPasswordLineEdit;
    QCheckBox *showLoginPasswordCheckBox;
    QPushButton *loginButton;
    QPushButton *noWorriesButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *signupLoginPageLabel;
    QPushButton *signupLoginPageButton;
    QWidget *page_1_main;
    QVBoxLayout *verticalLayout_4;
    QLabel *gameNameLabelPage1;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *gamplayModeGroupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *playerVsAiButton;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *easyRadioButton;
    QRadioButton *hardRadioButton;
    QPushButton *playerVsPlayerButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *personalDetailsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QPushButton *myGameHistoryButton;
    QPushButton *myAccountButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_5_gameboard;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *backButtonGamePage;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *resetGameboardButton;
    QLabel *gameStatusLabel;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_00;
    QPushButton *pushButton_01;
    QPushButton *pushButton_02;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QSpacerItem *horizontalSpacer_9;
    QWidget *page_2_signup;
    QVBoxLayout *verticalLayout_9;
    QLabel *gameNameLabelPage_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *signupGroupBox;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *signupUsernameLineEdit;
    QHBoxLayout *signupPassLayout;
    QLineEdit *signupPasswordLineEdit;
    QCheckBox *showSignupPasswordCheckBox;
    QLineEdit *signupFirstNameLineEdit;
    QLineEdit *signupLastNameLineEdit;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *existingAccountLabel;
    QPushButton *loginButtonSignupPage;
    QWidget *page_3_password_reset;
    QVBoxLayout *verticalLayout_11;
    QLabel *gameNameLabelPage_6;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *resetUsernameLineEdit;
    QHBoxLayout *resetPassLayout;
    QLineEdit *resetNewPasswordLineEdit;
    QCheckBox *showResetNewPasswordCheckBox;
    QLineEdit *resetConfirmPasswordLineEdit;
    QPushButton *resetPasswordButton;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_8;
    QPushButton *backButtonReset;
    QWidget *page_4_personal_info;
    QVBoxLayout *verticalLayout_13;
    QLabel *gameNameLabelPage_7;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout;
    QLabel *accountFirstNameLabel_2;
    QLabel *accountFirstNameLabel;
    QLabel *accountLastNameLabel_2;
    QLabel *accountLastNameLabel;
    QLabel *accountUsernameLabel_2;
    QLabel *accountUsernameLabel;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *changePasswordButton;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *backButtonAccount;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *logoutButtonAccount;
    QWidget *page_6_game_history;
    QVBoxLayout *verticalLayout_14;
    QLabel *gameNameLabelPage_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *backButtonHistory;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *replayGameButton;
    QPushButton *deleteGameButton;
    QListWidget *gameHistoryListWidget;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 650);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"/* Modern Dark Theme for Tic-Tac-Toe\n"
"---------------------------------\n"
"Main Colors:\n"
"- Background: #2c3e50 (Midnight Blue)\n"
"- Foreground/Containers: #34495e (Wet Asphalt)\n"
"- Primary Text: #ecf0f1 (Clouds)\n"
"- Primary Action: #1abc9c (Turquoise)\n"
"- Primary Hover: #16a085 (Green Sea)\n"
"- Player X: #3498db (Peter River Blue)\n"
"- Player O: #e74c3c (Alizarin Red)\n"
"- Input Fields: #2c3e50\n"
"*/\n"
"\n"
"QWidget#MainWindow {\n"
"    background-color: #2c3e50;\n"
"}\n"
"\n"
"QStackedWidget {\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* === LABELS === */\n"
"QLabel {\n"
"    color: #ecf0f1;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QLabel#gameNameLabelPage0,\n"
"QLabel#gameNameLabelPage1,\n"
"QLabel#gameNameLabelPage_2,\n"
"QLabel#gameNameLabelPage_3,\n"
"QLabel#gameNameLabelPage_5,\n"
"QLabel#gameNameLabelPage_6,\n"
"QLabel#gameNameLabelPage_7 {\n"
"    color: #ecf0f1;\n"
"    font: bold 42pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLabel#gameStatusLabel {\n"
"  "
                        "  color: #ecf0f1;\n"
"    font: bold 16pt \"Segoe UI\";\n"
"    background-color: #34495e;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"\n"
"/* === BUTTONS === */\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: #3498db; /* Blue for secondary buttons */\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"\n"
"/* Primary Action Buttons (Login, Register, etc.) */\n"
"QPushButton#loginButton,\n"
"QPushButton#registerButton,\n"
"QPushButton#playerVsAiButton,\n"
"QPushButton#playerVsPlayerButton {\n"
"    background-color: #1abc9c; /* Turquoise */\n"
"    font-size: 14pt;\n"
"}\n"
"\n"
"QPushButton#loginButton:hover,\n"
"QPushButton#registerButton:hover,\n"
"QPushButton#playerVsAiButton:hover,\n"
"QPushButton#playerVsPlayerButton:hover {\n"
"    background-color: #16a085;\n"
"}\n"
"\n"
"/* Link-style Buttons */\n"
"QPushButton#signupLoginPag"
                        "eButton, QPushButton#noWorriesButton, QPushButton#loginButtonSignupPage {\n"
"    background-color: transparent;\n"
"    color: #1abc9c;\n"
"    font-size: 10pt;\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"\n"
"/* === GAME BOARD BUTTONS === */\n"
"QGroupBox#groupBox_3 QPushButton {\n"
"    font: bold 60pt \"Segoe UI\"; /* Larger font for X and O */\n"
"    background-color: #34495e;\n"
"}\n"
"QGroupBox#groupBox_3 QPushButton:hover {\n"
"    background-color: #4a6278;\n"
"}\n"
"\n"
"/* === INPUT FIELDS === */\n"
"QLineEdit {\n"
"    background-color: #2c3e50;\n"
"    color: #ecf0f1;\n"
"    border: 1px solid #34495e;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 11pt;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #1abc9c;\n"
"}\n"
"\n"
"/* === GROUP BOXES === */\n"
"QGroupBox {\n"
"    color: #ecf0f1;\n"
"    font: italic 14pt \"Segoe UI\";\n"
"    border: 1px solid #34495e;\n"
"    border-radius: 8px;\n"
"    margin-top: 20px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  "
                        "  subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px 10px;\n"
"    background-color: #34495e;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* === OTHER WIDGETS === */\n"
"QCheckBox {\n"
"    color: #ecf0f1;\n"
"    font-size: 10pt;\n"
"}\n"
"QRadioButton {\n"
"    color: #ecf0f1;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QListWidget {\n"
"    background-color: #34495e;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    color: #ecf0f1;\n"
"    font-size: 12pt;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(MainWindow);
        stackedWidget->setObjectName("stackedWidget");
        page_0_login = new QWidget();
        page_0_login->setObjectName("page_0_login");
        verticalLayout_2 = new QVBoxLayout(page_0_login);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gameNameLabelPage0 = new QLabel(page_0_login);
        gameNameLabelPage0->setObjectName("gameNameLabelPage0");
        gameNameLabelPage0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(gameNameLabelPage0);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox = new QGroupBox(page_0_login);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(400, 0));
        groupBox->setTitle(QString::fromUtf8("Log In!"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        loginUsernameLineEdit = new QLineEdit(groupBox);
        loginUsernameLineEdit->setObjectName("loginUsernameLineEdit");

        verticalLayout_3->addWidget(loginUsernameLineEdit);

        loginPassLayout = new QHBoxLayout();
        loginPassLayout->setObjectName("loginPassLayout");
        loginPasswordLineEdit = new QLineEdit(groupBox);
        loginPasswordLineEdit->setObjectName("loginPasswordLineEdit");
        loginPasswordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        loginPassLayout->addWidget(loginPasswordLineEdit);

        showLoginPasswordCheckBox = new QCheckBox(groupBox);
        showLoginPasswordCheckBox->setObjectName("showLoginPasswordCheckBox");

        loginPassLayout->addWidget(showLoginPasswordCheckBox);


        verticalLayout_3->addLayout(loginPassLayout);

        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(0, 45));
        loginButton->setAutoDefault(true);

        verticalLayout_3->addWidget(loginButton);

        noWorriesButton = new QPushButton(groupBox);
        noWorriesButton->setObjectName("noWorriesButton");

        verticalLayout_3->addWidget(noWorriesButton);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        signupLoginPageLabel = new QLabel(page_0_login);
        signupLoginPageLabel->setObjectName("signupLoginPageLabel");
        signupLoginPageLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(signupLoginPageLabel);

        signupLoginPageButton = new QPushButton(page_0_login);
        signupLoginPageButton->setObjectName("signupLoginPageButton");

        horizontalLayout_2->addWidget(signupLoginPageButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_0_login);
        page_1_main = new QWidget();
        page_1_main->setObjectName("page_1_main");
        verticalLayout_4 = new QVBoxLayout(page_1_main);
        verticalLayout_4->setObjectName("verticalLayout_4");
        gameNameLabelPage1 = new QLabel(page_1_main);
        gameNameLabelPage1->setObjectName("gameNameLabelPage1");
        gameNameLabelPage1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(gameNameLabelPage1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        gamplayModeGroupBox = new QGroupBox(page_1_main);
        gamplayModeGroupBox->setObjectName("gamplayModeGroupBox");
        verticalLayout_5 = new QVBoxLayout(gamplayModeGroupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        playerVsAiButton = new QPushButton(gamplayModeGroupBox);
        playerVsAiButton->setObjectName("playerVsAiButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playerVsAiButton->sizePolicy().hasHeightForWidth());
        playerVsAiButton->setSizePolicy(sizePolicy);
        playerVsAiButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_4->addWidget(playerVsAiButton);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        easyRadioButton = new QRadioButton(gamplayModeGroupBox);
        easyRadioButton->setObjectName("easyRadioButton");
        easyRadioButton->setChecked(true);

        verticalLayout_6->addWidget(easyRadioButton);

        hardRadioButton = new QRadioButton(gamplayModeGroupBox);
        hardRadioButton->setObjectName("hardRadioButton");

        verticalLayout_6->addWidget(hardRadioButton);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_5->addLayout(horizontalLayout_4);

        playerVsPlayerButton = new QPushButton(gamplayModeGroupBox);
        playerVsPlayerButton->setObjectName("playerVsPlayerButton");
        playerVsPlayerButton->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(playerVsPlayerButton);


        horizontalLayout_3->addWidget(gamplayModeGroupBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        personalDetailsGroupBox = new QGroupBox(page_1_main);
        personalDetailsGroupBox->setObjectName("personalDetailsGroupBox");
        verticalLayout_7 = new QVBoxLayout(personalDetailsGroupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        myGameHistoryButton = new QPushButton(personalDetailsGroupBox);
        myGameHistoryButton->setObjectName("myGameHistoryButton");
        myGameHistoryButton->setMinimumSize(QSize(0, 50));

        verticalLayout_7->addWidget(myGameHistoryButton);

        myAccountButton = new QPushButton(personalDetailsGroupBox);
        myAccountButton->setObjectName("myAccountButton");
        myAccountButton->setMinimumSize(QSize(0, 50));

        verticalLayout_7->addWidget(myAccountButton);


        horizontalLayout_5->addWidget(personalDetailsGroupBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page_1_main);
        page_5_gameboard = new QWidget();
        page_5_gameboard->setObjectName("page_5_gameboard");
        verticalLayout_8 = new QVBoxLayout(page_5_gameboard);
        verticalLayout_8->setSpacing(15);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        backButtonGamePage = new QPushButton(page_5_gameboard);
        backButtonGamePage->setObjectName("backButtonGamePage");

        horizontalLayout_6->addWidget(backButtonGamePage);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        resetGameboardButton = new QPushButton(page_5_gameboard);
        resetGameboardButton->setObjectName("resetGameboardButton");

        horizontalLayout_6->addWidget(resetGameboardButton);


        verticalLayout_8->addLayout(horizontalLayout_6);

        gameStatusLabel = new QLabel(page_5_gameboard);
        gameStatusLabel->setObjectName("gameStatusLabel");
        gameStatusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(gameStatusLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        groupBox_3 = new QGroupBox(page_5_gameboard);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        pushButton_00 = new QPushButton(groupBox_3);
        pushButton_00->setObjectName("pushButton_00");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_00->sizePolicy().hasHeightForWidth());
        pushButton_00->setSizePolicy(sizePolicy1);
        pushButton_00->setMinimumSize(QSize(140, 140));
        pushButton_00->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_00, 0, 0, 1, 1);

        pushButton_01 = new QPushButton(groupBox_3);
        pushButton_01->setObjectName("pushButton_01");
        sizePolicy1.setHeightForWidth(pushButton_01->sizePolicy().hasHeightForWidth());
        pushButton_01->setSizePolicy(sizePolicy1);
        pushButton_01->setMinimumSize(QSize(140, 140));
        pushButton_01->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_01, 0, 1, 1, 1);

        pushButton_02 = new QPushButton(groupBox_3);
        pushButton_02->setObjectName("pushButton_02");
        sizePolicy1.setHeightForWidth(pushButton_02->sizePolicy().hasHeightForWidth());
        pushButton_02->setSizePolicy(sizePolicy1);
        pushButton_02->setMinimumSize(QSize(140, 140));
        pushButton_02->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_02, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(140, 140));
        pushButton_10->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(140, 140));
        pushButton_11->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(140, 140));
        pushButton_12->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_12, 1, 2, 1, 1);

        pushButton_20 = new QPushButton(groupBox_3);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(140, 140));
        pushButton_20->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_20, 2, 0, 1, 1);

        pushButton_21 = new QPushButton(groupBox_3);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMinimumSize(QSize(140, 140));
        pushButton_21->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_22 = new QPushButton(groupBox_3);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMinimumSize(QSize(140, 140));
        pushButton_22->setMaximumSize(QSize(140, 140));

        gridLayout->addWidget(pushButton_22, 2, 2, 1, 1);


        horizontalLayout_7->addWidget(groupBox_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_8->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_5_gameboard);
        page_2_signup = new QWidget();
        page_2_signup->setObjectName("page_2_signup");
        verticalLayout_9 = new QVBoxLayout(page_2_signup);
        verticalLayout_9->setObjectName("verticalLayout_9");
        gameNameLabelPage_5 = new QLabel(page_2_signup);
        gameNameLabelPage_5->setObjectName("gameNameLabelPage_5");
        gameNameLabelPage_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(gameNameLabelPage_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        signupGroupBox = new QGroupBox(page_2_signup);
        signupGroupBox->setObjectName("signupGroupBox");
        signupGroupBox->setTitle(QString::fromUtf8("Sign Up!"));
        verticalLayout_10 = new QVBoxLayout(signupGroupBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        signupUsernameLineEdit = new QLineEdit(signupGroupBox);
        signupUsernameLineEdit->setObjectName("signupUsernameLineEdit");

        verticalLayout_10->addWidget(signupUsernameLineEdit);

        signupPassLayout = new QHBoxLayout();
        signupPassLayout->setObjectName("signupPassLayout");
        signupPasswordLineEdit = new QLineEdit(signupGroupBox);
        signupPasswordLineEdit->setObjectName("signupPasswordLineEdit");
        signupPasswordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        signupPassLayout->addWidget(signupPasswordLineEdit);

        showSignupPasswordCheckBox = new QCheckBox(signupGroupBox);
        showSignupPasswordCheckBox->setObjectName("showSignupPasswordCheckBox");

        signupPassLayout->addWidget(showSignupPasswordCheckBox);


        verticalLayout_10->addLayout(signupPassLayout);

        signupFirstNameLineEdit = new QLineEdit(signupGroupBox);
        signupFirstNameLineEdit->setObjectName("signupFirstNameLineEdit");

        verticalLayout_10->addWidget(signupFirstNameLineEdit);

        signupLastNameLineEdit = new QLineEdit(signupGroupBox);
        signupLastNameLineEdit->setObjectName("signupLastNameLineEdit");

        verticalLayout_10->addWidget(signupLastNameLineEdit);

        registerButton = new QPushButton(signupGroupBox);
        registerButton->setObjectName("registerButton");
        registerButton->setMinimumSize(QSize(0, 45));

        verticalLayout_10->addWidget(registerButton);


        horizontalLayout_8->addWidget(signupGroupBox);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        existingAccountLabel = new QLabel(page_2_signup);
        existingAccountLabel->setObjectName("existingAccountLabel");
        existingAccountLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_9->addWidget(existingAccountLabel);

        loginButtonSignupPage = new QPushButton(page_2_signup);
        loginButtonSignupPage->setObjectName("loginButtonSignupPage");

        horizontalLayout_9->addWidget(loginButtonSignupPage);


        verticalLayout_9->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_2_signup);
        page_3_password_reset = new QWidget();
        page_3_password_reset->setObjectName("page_3_password_reset");
        verticalLayout_11 = new QVBoxLayout(page_3_password_reset);
        verticalLayout_11->setObjectName("verticalLayout_11");
        gameNameLabelPage_6 = new QLabel(page_3_password_reset);
        gameNameLabelPage_6->setObjectName("gameNameLabelPage_6");
        gameNameLabelPage_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(gameNameLabelPage_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        groupBox_2 = new QGroupBox(page_3_password_reset);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_12 = new QVBoxLayout(groupBox_2);
        verticalLayout_12->setObjectName("verticalLayout_12");
        resetUsernameLineEdit = new QLineEdit(groupBox_2);
        resetUsernameLineEdit->setObjectName("resetUsernameLineEdit");

        verticalLayout_12->addWidget(resetUsernameLineEdit);

        resetPassLayout = new QHBoxLayout();
        resetPassLayout->setObjectName("resetPassLayout");
        resetNewPasswordLineEdit = new QLineEdit(groupBox_2);
        resetNewPasswordLineEdit->setObjectName("resetNewPasswordLineEdit");
        resetNewPasswordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        resetPassLayout->addWidget(resetNewPasswordLineEdit);

        showResetNewPasswordCheckBox = new QCheckBox(groupBox_2);
        showResetNewPasswordCheckBox->setObjectName("showResetNewPasswordCheckBox");

        resetPassLayout->addWidget(showResetNewPasswordCheckBox);


        verticalLayout_12->addLayout(resetPassLayout);

        resetConfirmPasswordLineEdit = new QLineEdit(groupBox_2);
        resetConfirmPasswordLineEdit->setObjectName("resetConfirmPasswordLineEdit");
        resetConfirmPasswordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_12->addWidget(resetConfirmPasswordLineEdit);

        resetPasswordButton = new QPushButton(groupBox_2);
        resetPasswordButton->setObjectName("resetPasswordButton");

        verticalLayout_12->addWidget(resetPasswordButton);


        horizontalLayout_10->addWidget(groupBox_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout_11->addLayout(horizontalLayout_10);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        backButtonReset = new QPushButton(page_3_password_reset);
        backButtonReset->setObjectName("backButtonReset");

        verticalLayout_11->addWidget(backButtonReset);

        stackedWidget->addWidget(page_3_password_reset);
        page_4_personal_info = new QWidget();
        page_4_personal_info->setObjectName("page_4_personal_info");
        verticalLayout_13 = new QVBoxLayout(page_4_personal_info);
        verticalLayout_13->setObjectName("verticalLayout_13");
        gameNameLabelPage_7 = new QLabel(page_4_personal_info);
        gameNameLabelPage_7->setObjectName("gameNameLabelPage_7");
        gameNameLabelPage_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(gameNameLabelPage_7);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        groupBox_7 = new QGroupBox(page_4_personal_info);
        groupBox_7->setObjectName("groupBox_7");
        formLayout = new QFormLayout(groupBox_7);
        formLayout->setObjectName("formLayout");
        accountFirstNameLabel_2 = new QLabel(groupBox_7);
        accountFirstNameLabel_2->setObjectName("accountFirstNameLabel_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, accountFirstNameLabel_2);

        accountFirstNameLabel = new QLabel(groupBox_7);
        accountFirstNameLabel->setObjectName("accountFirstNameLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, accountFirstNameLabel);

        accountLastNameLabel_2 = new QLabel(groupBox_7);
        accountLastNameLabel_2->setObjectName("accountLastNameLabel_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, accountLastNameLabel_2);

        accountLastNameLabel = new QLabel(groupBox_7);
        accountLastNameLabel->setObjectName("accountLastNameLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, accountLastNameLabel);

        accountUsernameLabel_2 = new QLabel(groupBox_7);
        accountUsernameLabel_2->setObjectName("accountUsernameLabel_2");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, accountUsernameLabel_2);

        accountUsernameLabel = new QLabel(groupBox_7);
        accountUsernameLabel->setObjectName("accountUsernameLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, accountUsernameLabel);


        horizontalLayout_11->addWidget(groupBox_7);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);


        verticalLayout_13->addLayout(horizontalLayout_11);

        changePasswordButton = new QPushButton(page_4_personal_info);
        changePasswordButton->setObjectName("changePasswordButton");

        verticalLayout_13->addWidget(changePasswordButton);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        backButtonAccount = new QPushButton(page_4_personal_info);
        backButtonAccount->setObjectName("backButtonAccount");

        horizontalLayout_12->addWidget(backButtonAccount);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_16);

        logoutButtonAccount = new QPushButton(page_4_personal_info);
        logoutButtonAccount->setObjectName("logoutButtonAccount");

        horizontalLayout_12->addWidget(logoutButtonAccount);


        verticalLayout_13->addLayout(horizontalLayout_12);

        stackedWidget->addWidget(page_4_personal_info);
        page_6_game_history = new QWidget();
        page_6_game_history->setObjectName("page_6_game_history");
        verticalLayout_14 = new QVBoxLayout(page_6_game_history);
        verticalLayout_14->setObjectName("verticalLayout_14");
        gameNameLabelPage_3 = new QLabel(page_6_game_history);
        gameNameLabelPage_3->setObjectName("gameNameLabelPage_3");
        gameNameLabelPage_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(gameNameLabelPage_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        backButtonHistory = new QPushButton(page_6_game_history);
        backButtonHistory->setObjectName("backButtonHistory");

        horizontalLayout_13->addWidget(backButtonHistory);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_17);

        replayGameButton = new QPushButton(page_6_game_history);
        replayGameButton->setObjectName("replayGameButton");

        horizontalLayout_13->addWidget(replayGameButton);

        deleteGameButton = new QPushButton(page_6_game_history);
        deleteGameButton->setObjectName("deleteGameButton");

        horizontalLayout_13->addWidget(deleteGameButton);


        verticalLayout_14->addLayout(horizontalLayout_13);

        gameHistoryListWidget = new QListWidget(page_6_game_history);
        gameHistoryListWidget->setObjectName("gameHistoryListWidget");

        verticalLayout_14->addWidget(gameHistoryListWidget);

        stackedWidget->addWidget(page_6_game_history);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Modern Tic-Tac-Toe", nullptr));
        gameNameLabelPage0->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        loginUsernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        loginPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        showLoginPasswordCheckBox->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        noWorriesButton->setText(QCoreApplication::translate("MainWindow", "Forgot Password?", nullptr));
        signupLoginPageLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        signupLoginPageButton->setText(QCoreApplication::translate("MainWindow", "Sign Up!", nullptr));
        gameNameLabelPage1->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        gamplayModeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Gameplay Mode", nullptr));
        playerVsAiButton->setText(QCoreApplication::translate("MainWindow", "Player Vs AI", nullptr));
        easyRadioButton->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        hardRadioButton->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        playerVsPlayerButton->setText(QCoreApplication::translate("MainWindow", "Player Vs Player", nullptr));
        personalDetailsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Personal Details", nullptr));
        myGameHistoryButton->setText(QCoreApplication::translate("MainWindow", "My Game History", nullptr));
        myAccountButton->setText(QCoreApplication::translate("MainWindow", "My Account", nullptr));
        backButtonGamePage->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        resetGameboardButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        gameStatusLabel->setText(QCoreApplication::translate("MainWindow", "Player X's Turn", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_00->setText(QString());
        pushButton_01->setText(QString());
        pushButton_02->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        gameNameLabelPage_5->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        signupUsernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username *", nullptr));
        signupPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password *", nullptr));
        showSignupPasswordCheckBox->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        signupFirstNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "First Name (Optional)", nullptr));
        signupLastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Last Name (Optional)", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        existingAccountLabel->setText(QCoreApplication::translate("MainWindow", "Already have an account?", nullptr));
        loginButtonSignupPage->setText(QCoreApplication::translate("MainWindow", "Log In!", nullptr));
        gameNameLabelPage_6->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Password Reset", nullptr));
        resetUsernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username *", nullptr));
        resetNewPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Password *", nullptr));
        showResetNewPasswordCheckBox->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        resetConfirmPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm New Password *", nullptr));
        resetPasswordButton->setText(QCoreApplication::translate("MainWindow", "Reset Password", nullptr));
        backButtonReset->setText(QCoreApplication::translate("MainWindow", "Back to Login", nullptr));
        gameNameLabelPage_7->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Personal Info", nullptr));
        accountFirstNameLabel_2->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        accountFirstNameLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        accountLastNameLabel_2->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
        accountLastNameLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        accountUsernameLabel_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        accountUsernameLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("MainWindow", "Change Password", nullptr));
        backButtonAccount->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        logoutButtonAccount->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        gameNameLabelPage_3->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        backButtonHistory->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        replayGameButton->setText(QCoreApplication::translate("MainWindow", "Replay Game", nullptr));
        deleteGameButton->setText(QCoreApplication::translate("MainWindow", "Delete Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
