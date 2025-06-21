/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "on_loginButton_clicked",
        "",
        "on_signupLoginPageButton_clicked",
        "on_showLoginPasswordCheckBox_toggled",
        "checked",
        "on_noWorriesButton_clicked",
        "on_registerButton_clicked",
        "on_showSignupPasswordCheckBox_toggled",
        "on_loginButtonSignupPage_clicked",
        "on_playerVsAiButton_clicked",
        "on_playerVsPlayerButton_clicked",
        "on_myAccountButton_clicked",
        "on_myGameHistoryButton_clicked",
        "on_resetPasswordButton_clicked",
        "on_showResetNewPasswordCheckBox_toggled",
        "on_backButtonReset_clicked",
        "on_backButtonAccount_clicked",
        "on_changePasswordButton_clicked",
        "on_logoutButtonAccount_clicked",
        "handleBoardClick",
        "on_resetGameboardButton_clicked",
        "on_backButtonGamePage_clicked",
        "on_replayGameButton_clicked",
        "on_deleteGameButton_clicked",
        "on_backButtonHistory_clicked",
        "replayNextMove",
        "onBoardChanged",
        "row",
        "col",
        "player",
        "onGameEnded",
        "winner",
        "moves",
        "onCurrentPlayerChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_loginButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_signupLoginPageButton_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_showLoginPasswordCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'on_noWorriesButton_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_registerButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_showSignupPasswordCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'on_loginButtonSignupPage_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_playerVsAiButton_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_playerVsPlayerButton_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_myAccountButton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_myGameHistoryButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_resetPasswordButton_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_showResetNewPasswordCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'on_backButtonReset_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_backButtonAccount_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_changePasswordButton_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_logoutButtonAccount_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleBoardClick'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_resetGameboardButton_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_backButtonGamePage_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_replayGameButton_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteGameButton_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_backButtonHistory_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'replayNextMove'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBoardChanged'
        QtMocHelpers::SlotData<void(int, int, int)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 },
        }}),
        // Slot 'onGameEnded'
        QtMocHelpers::SlotData<void(const QString &, const QStringList &)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 32 }, { QMetaType::QStringList, 33 },
        }}),
        // Slot 'onCurrentPlayerChanged'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_signupLoginPageButton_clicked(); break;
        case 2: _t->on_showLoginPasswordCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_noWorriesButton_clicked(); break;
        case 4: _t->on_registerButton_clicked(); break;
        case 5: _t->on_showSignupPasswordCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_loginButtonSignupPage_clicked(); break;
        case 7: _t->on_playerVsAiButton_clicked(); break;
        case 8: _t->on_playerVsPlayerButton_clicked(); break;
        case 9: _t->on_myAccountButton_clicked(); break;
        case 10: _t->on_myGameHistoryButton_clicked(); break;
        case 11: _t->on_resetPasswordButton_clicked(); break;
        case 12: _t->on_showResetNewPasswordCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_backButtonReset_clicked(); break;
        case 14: _t->on_backButtonAccount_clicked(); break;
        case 15: _t->on_changePasswordButton_clicked(); break;
        case 16: _t->on_logoutButtonAccount_clicked(); break;
        case 17: _t->handleBoardClick(); break;
        case 18: _t->on_resetGameboardButton_clicked(); break;
        case 19: _t->on_backButtonGamePage_clicked(); break;
        case 20: _t->on_replayGameButton_clicked(); break;
        case 21: _t->on_deleteGameButton_clicked(); break;
        case 22: _t->on_backButtonHistory_clicked(); break;
        case 23: _t->replayNextMove(); break;
        case 24: _t->onBoardChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 25: _t->onGameEnded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 26: _t->onCurrentPlayerChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
