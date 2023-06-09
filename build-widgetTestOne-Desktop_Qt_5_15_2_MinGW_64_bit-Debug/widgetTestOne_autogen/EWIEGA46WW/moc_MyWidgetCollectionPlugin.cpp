/****************************************************************************
** Meta object code from reading C++ file 'MyWidgetCollectionPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../widgetTestOne/MyWidgetCollectionPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyWidgetCollectionPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyWidgetCollectionPlugin_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWidgetCollectionPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWidgetCollectionPlugin_t qt_meta_stringdata_MyWidgetCollectionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 24) // "MyWidgetCollectionPlugin"

    },
    "MyWidgetCollectionPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWidgetCollectionPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MyWidgetCollectionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyWidgetCollectionPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyWidgetCollectionPlugin.data,
    qt_meta_data_MyWidgetCollectionPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyWidgetCollectionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWidgetCollectionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidgetCollectionPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDesignerCustomWidgetCollectionInterface"))
        return static_cast< QDesignerCustomWidgetCollectionInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface"))
        return static_cast< QDesignerCustomWidgetCollectionInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int MyWidgetCollectionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x3a,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'D',  'e', 
    's',  'i',  'g',  'n',  'e',  'r',  'C',  'u', 
    's',  't',  'o',  'm',  'W',  'i',  'd',  'g', 
    'e',  't',  'C',  'o',  'l',  'l',  'e',  'c', 
    't',  'i',  'o',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x78,  0x18,  'M',  'y',  'W',  'i',  'd', 
    'g',  'e',  't',  'C',  'o',  'l',  'l',  'e', 
    'c',  't',  'i',  'o',  'n',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa8,  0x68,  'C',  'a',  't',  'e',  'g', 
    'o',  'r',  'y',  0x6e,  'C',  'u',  's',  't', 
    'o',  'm',  ' ',  'W',  'i',  'd',  'g',  'e', 
    't',  's',  0x69,  'C',  'l',  'a',  's',  's', 
    'N',  'a',  'm',  'e',  0x78,  0x18,  'M',  'y', 
    'W',  'i',  'd',  'g',  'e',  't',  'C',  'o', 
    'l',  'l',  'e',  'c',  't',  'i',  'o',  'n', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x6b,  'D', 
    'e',  's',  'c',  'r',  'i',  'p',  't',  'i', 
    'o',  'n',  0x78,  0x36,  'A',  ' ',  'c',  'u', 
    's',  't',  'o',  'm',  ' ',  'c',  'o',  'l', 
    'l',  'e',  'c',  't',  'i',  'o',  'n',  ' ', 
    'o',  'f',  ' ',  'w',  'i',  'd',  'g',  'e', 
    't',  's',  ' ',  'f',  'o',  'r',  ' ',  'u', 
    's',  'e',  ' ',  'i',  'n',  ' ',  'Q',  't', 
    ' ',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  '.',  0x64,  'N',  'a',  'm',  'e',  0x74, 
    'M',  'y',  ' ',  'W',  'i',  'd',  'g',  'e', 
    't',  ' ',  'C',  'o',  'l',  'l',  'e',  'c', 
    't',  'i',  'o',  'n',  0x6d,  'P',  'l',  'u', 
    'g',  'i',  'n',  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x63,  '1',  '.',  '0',  0x69,  'Q', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x64,  '5',  '.',  '1',  '5',  0x63,  'U',  'r', 
    'l',  0x77,  'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'y',  'o',  'u', 
    'r',  '-',  'u',  'r',  'l',  '.',  'c',  'o', 
    'm',  0x66,  'V',  'e',  'n',  'd',  'o',  'r', 
    0x76,  'Y',  'o',  'u',  'r',  ' ',  'O',  'r', 
    'g',  'a',  'n',  'i',  'z',  'a',  't',  'i', 
    'o',  'n',  ' ',  'N',  'a',  'm',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(MyWidgetCollectionPlugin, MyWidgetCollectionPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
