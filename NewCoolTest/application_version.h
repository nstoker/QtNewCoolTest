#ifndef APPLICATION_VERSION_H
#define APPLICATION_VERSION_H
#include <QVersionNumber>

// See https://doc.qt.io/qt-5/qversionnumber.html for more details
static QString appVersionString("0.0.1"); // This is the application version string
static int appVersionSuffixIndex;  // The start index of a potential suffix (eg -alpha)
static QVersionNumber appVersion = QVersionNumber::fromString(appVersionString, &appVersionSuffixIndex);

#endif // APPLICATION_VERSION_H
