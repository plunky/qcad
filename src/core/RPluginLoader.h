/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RPLUGINLOADER_H
#define RPLUGINLOADER_H

#include "core_global.h"

#include <QList>
#include <QMetaType>
#include <QScriptEngine>

#include "RPluginInterface.h"
#include "RPluginInfo.h"

/**
 * Loads and registeres plugins.
 *
 * \ingroup core
 * \scriptable
 */
class QCADCORE_EXPORT RPluginLoader {
public:
    static void loadPlugins();
    static void loadPlugin(QObject* plugin, const QString& fileName = QString(), const QString& errorString = QString());

    static void postInitPlugins();
    static void postInitPlugin(QObject* plugin);

    /**
     * \nonscriptable
     */
    static void initScriptExtensions(QScriptEngine& engine);

    /**
     * \nonscriptable
     */
    static void initScriptExtensions(QObject* plugin, QScriptEngine& engine);

    static int countPlugins() {
        return pluginsInfo.count();
    }

    static RPluginInfo getPluginInfo(int i) {
        if (i<0 || i>pluginsInfo.count()) {
            return RPluginInfo();
        }
        return pluginsInfo[i];
    }

    static QString getPluginsPath();

private:
    static QList<RPluginInfo> pluginsInfo;
};

Q_DECLARE_METATYPE(RPluginLoader*)

#endif
