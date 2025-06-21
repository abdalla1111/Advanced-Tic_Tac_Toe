/****************************************************************************
** Meta object code from reading C++ file 'tst_databasemanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tests/tst_databasemanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_databasemanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19TestDatabaseManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto TestDatabaseManager::qt_create_metaobjectdata<qt_meta_tag_ZN19TestDatabaseManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TestDatabaseManager",
        "initTestCase",
        "",
        "cleanupTestCase",
        "init",
        "cleanup",
        "testInitializeDatabase",
        "testRegisterUser_success",
        "testRegisterUser_duplicate",
        "testAuthenticateUser_success",
        "testAuthenticateUser_failure",
        "testResetUserPassword_success",
        "testResetUserPassword_nonExistentUser",
        "testGetUserInfo",
        "testSaveAndLoadGameHistory",
        "testLoadGameHistory_noHistory",
        "testDeleteGameHistory",
        "testGetGameMoves"
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
        // Slot 'testInitializeDatabase'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testRegisterUser_success'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testRegisterUser_duplicate'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testAuthenticateUser_success'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testAuthenticateUser_failure'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testResetUserPassword_success'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testResetUserPassword_nonExistentUser'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testGetUserInfo'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testSaveAndLoadGameHistory'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testLoadGameHistory_noHistory'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testDeleteGameHistory'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'testGetGameMoves'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TestDatabaseManager, qt_meta_tag_ZN19TestDatabaseManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TestDatabaseManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TestDatabaseManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TestDatabaseManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19TestDatabaseManagerE_t>.metaTypes,
    nullptr
} };

void TestDatabaseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TestDatabaseManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->testInitializeDatabase(); break;
        case 5: _t->testRegisterUser_success(); break;
        case 6: _t->testRegisterUser_duplicate(); break;
        case 7: _t->testAuthenticateUser_success(); break;
        case 8: _t->testAuthenticateUser_failure(); break;
        case 9: _t->testResetUserPassword_success(); break;
        case 10: _t->testResetUserPassword_nonExistentUser(); break;
        case 11: _t->testGetUserInfo(); break;
        case 12: _t->testSaveAndLoadGameHistory(); break;
        case 13: _t->testLoadGameHistory_noHistory(); break;
        case 14: _t->testDeleteGameHistory(); break;
        case 15: _t->testGetGameMoves(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestDatabaseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDatabaseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TestDatabaseManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDatabaseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
