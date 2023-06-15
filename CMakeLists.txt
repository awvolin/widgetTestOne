cmake_minimum_required(VERSION 3.14)

project(widgetTestOne LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add Widgets and Gui to the required components
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Gui Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Gui Widgets)

add_library(widgetTestOne SHARED
  widgetTestOne_global.h
  widgettestone.cpp
  widgettestone.h
  slidertext.h
  SliderText.cpp
  DelayedInitializationWidget.h
  slidertextplugin.h
  slidertextplugin.cpp
  MyWidgetCollectionPlugin.h
  MyWidgetCollectionPlugin.cpp
)

# Add Widgets and Gui to the linked libraries
target_link_libraries(widgetTestOne PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(widgetTestOne PRIVATE WIDGETTESTONE_LIBRARY)

# set the correct output path for the plugin
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins)
# install the plugin to Qt plugins/designer directory
install(TARGETS widgetTestOne
    RUNTIME DESTINATION ${QT_INSTALL_PLUGINS}/designer
    LIBRARY DESTINATION ${QT_INSTALL_PLUGINS}/designer
)
