/****************************************************************************
** Meta object code from reading C++ file 'tst_testboard.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tests/tst_testboard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_testboard.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9TestBoardE_t {};
} // unnamed namespace

template <> constexpr inline auto TestBoard::qt_create_metaobjectdata<qt_meta_tag_ZN9TestBoardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TestBoard",
        "initTestCase",
        "",
        "cleanupTestCase",
        "init",
        "cleanup",
        "testInitialBoardState",
        "testMakeMoveValid",
        "testMakeMoveInvalid",
        "testCheckWinRows",
        "testCheckWinColumns",
        "testCheckWinDiagonals",
        "testCheckWinNoWin",
        "testIsFull",
        "testResetBoard"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initTestCase'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanupTestCase'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'init'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanup'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testInitialBoardState'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testMakeMoveValid'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testMakeMoveInvalid'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testCheckWinRows'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testCheckWinColumns'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testCheckWinDiagonals'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testCheckWinNoWin'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testIsFull'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testResetBoard'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TestBoard, qt_meta_tag_ZN9TestBoardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TestBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9TestBoardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9TestBoardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9TestBoardE_t>.metaTypes,
    nullptr
} };

void TestBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TestBoard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->testInitialBoardState(); break;
        case 5: _t->testMakeMoveValid(); break;
        case 6: _t->testMakeMoveInvalid(); break;
        case 7: _t->testCheckWinRows(); break;
        case 8: _t->testCheckWinColumns(); break;
        case 9: _t->testCheckWinDiagonals(); break;
        case 10: _t->testCheckWinNoWin(); break;
        case 11: _t->testIsFull(); break;
        case 12: _t->testResetBoard(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9TestBoardE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
