#include "api/APIHelp.h"
#include <liteloader/Config.h>
#include "api/LlAPI.h"
#include "engine/GlobalShareData.h"
#include "engine/EngineOwnData.h"
#include <llapi/utils/NetworkHelper.h>
#include <llapi/utils/WinHelper.h>
#include <liteloader/PluginManager.h>
#include "utils/Utils.h"
#include <liteloader/Version.h>
#include <string>
#include <filesystem>
#include <map>
using namespace std;


//////////////////// Classes ////////////////////

ClassDefine<void> LlClassBuilder =
    defineClass("ll")
        .property("major", &LlClass::getMajorVersion)
        .property("minor", &LlClass::getMinorVersion)
        .property("revision", &LlClass::getRevisionVersion)
        .property("status", &LlClass::getVersionStatus)
        .property("scriptEngineVersion", &LlClass::getScriptEngineVersion)
        .property("language", &LlClass::getLanguage)
        .property("isWine", &LlClass::isWine)
        .property("isDebugMode", &LlClass::isDebugMode)
        .property("isRelease", &LlClass::isRelease)
        .property("isBeta", &LlClass::isBeta)
        .property("isDev", &LlClass::isDev)
        
        .function("versionString", &LlClass::versionString)
        .function("requireVersion", &LlClass::requireVersion)
        .function("listPlugins", &LlClass::listPlugins)
        .function("getAllPluginInfo", &LlClass::getAllPluginInfo)
        .function("imports", &LlClass::importFunc)
        .function("exports", &LlClass::exportFunc)
        .function("hasExported", &LlClass::hasFuncExported)
        .function("require", &LlClass::require)
        .function("eval", &LlClass::eval)
        .function("registerPlugin", &LlClass::registerPlugin)
        .function("getPluginInfo", &LlClass::getPluginInfo)
        .function("checkVersion", &LlClass::requireVersion)

        // For Compatibility
        .function("version", &LlClass::version)
        .function("isDebugMode", &LlClass::isDebugModeFunction)
        .function("versionStatus", &LlClass::getVersionStatusFunction)
        .function("scriptEngineVersion", &LlClass::getScriptEngineVersionFunction)

        .build();

ClassDefine<void> VersionClassBuilder =
    defineClass("Version")
        // wait for: constructor, setter, converter(toString, toArray, toObject)...
        .property("Dev", []() { return Number::newNumber(ll::Version::Dev); })
        .property("Beta", []() { return Number::newNumber(ll::Version::Beta); })
        .property("Release", []() { return Number::newNumber(ll::Version::Release); })
        .build();

Local<Value> LlClass::getLanguage() {
    try {
        return String::newString(PluginOwnData::getImpl<I18nBase>(ll::getLoaderHandle(), I18nBase::POD_KEY).defaultLocaleName);
    }
    CATCH("Fail in LLSEGetLanguage")
}

Local<Value> LlClass::isWine() {
    try {
        return Boolean::newBoolean(IsWineEnvironment());
    }
    CATCH("Fail in LLSEIsWine")
}

Local<Value> LlClass::isDebugMode() {
    try {
        return Boolean::newBoolean(ll::isDebugMode());
    }
    CATCH("Fail in LLSEIsDebugMode")
}

Local<Value> LlClass::isRelease() {
    try {
        return Boolean::newBoolean(LITELOADER_VERSION_STATUS == ll::Version::Status::Release);
    }
    CATCH("Fail in LLSEIsRelease")
}

Local<Value> LlClass::isBeta() {
    try {
        return Boolean::newBoolean(LITELOADER_VERSION_STATUS == ll::Version::Status::Beta);
    }
    CATCH("Fail in LLSEIsBeta")
}

Local<Value> LlClass::isDev() {
    try {
        return Boolean::newBoolean(LITELOADER_VERSION_STATUS == ll::Version::Status::Dev);
    }
    CATCH("Fail in LLSEIsDev")
}

Local<Value> LlClass::getMajorVersion() {
    try {
        return Number::newNumber(LITELOADER_VERSION_MAJOR);
    }
    CATCH("Fail in LLSEGetMajorVersion")
}

Local<Value> LlClass::getMinorVersion() {
    try {
        return Number::newNumber(LITELOADER_VERSION_MINOR);
    }
    CATCH("Fail in LLSEGetMinorVersion")
}

Local<Value> LlClass::getRevisionVersion() {
    try {
        return Number::newNumber(LITELOADER_VERSION_REVISION);
    }
    CATCH("Fail in LLSEGetRevisionVersion")
}

Local<Value> LlClass::getScriptEngineVersion() {
    try {
        return String::newString(EngineScope::currentEngine()->getEngineVersion());
    }
    CATCH("Fail in LLSEGetScriptEngineVerison")
}

Local<Value> LlClass::getVersionStatus() {
    try {
        return Number::newNumber((int)(ll::Version::Status)LITELOADER_VERSION_STATUS);
    }
    CATCH("Fail in LLSEGetVersionStatus")
}

Local<Value> LlClass::registerPlugin(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString);
    // if (args.size() >= 3)
    //     CHECK_ARG_TYPE(args[2], ValueKind::kObject);
    if (args.size() >= 4)
        CHECK_ARG_TYPE(args[3], ValueKind::kObject);

    try {
        string name = args[0].toStr();
        string desc = args.size() >= 2 ? args[1].toStr() : "";

        ll::Version ver = ll::Version(1, 0, 0);
        if (args.size() >= 3) {
            if (args[2].isArray()) { // like [1,0,0].
                Local<Array> verInfo = args[2].asArray();
                if (verInfo.size() >= 1) {
                    Local<Value> major = verInfo.get(0);
                    if (major.isNumber())
                        ver.major = major.toInt();
                }
                if (verInfo.size() >= 2) {
                    Local<Value> minor = verInfo.get(1);
                    if (minor.isNumber())
                        ver.minor = minor.toInt();
                }
                if (verInfo.size() >= 3) {
                    Local<Value> revision = verInfo.get(2);
                    if (revision.isNumber())
                        ver.revision = revision.toInt();
                }
                if (verInfo.size() >= 4) { // script: Version Enum.
                    Local<Value> revision = verInfo.get(3);
                    if (revision.isNumber())
                        ver.status = (ll::Version::Status)revision.toInt();
                }
            } else if (args[2].isObject()) { // like { major: 1, minor:0, revision:0 }
                Local<Object> verInfo = args[2].asObject();
                if (verInfo.has("major")) {
                    Local<Value> major = verInfo.get("major");
                    if (major.isNumber())
                        ver.major = major.toInt();
                }
                if (verInfo.has("minor")) {
                    Local<Value> minor = verInfo.get("minor");
                    if (minor.isNumber())
                        ver.minor = minor.toInt();
                }
                if (verInfo.has("revision")) {
                    Local<Value> revision = verInfo.get("revision");
                    if (revision.isNumber())
                        ver.revision = revision.toInt();
                }
                if (verInfo.has("status")) {
                    Local<Value> revision = verInfo.get("status");
                    if (revision.isNumber())
                        ver.status = (ll::Version::Status)revision.toInt();
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Boolean::newBoolean(false);
            }
        }

        map<string, string> other;
        if (args.size() >= 4) {
            Local<Object> otherInfo = args[3].asObject();
            auto keys = otherInfo.getKeyNames();
            for (auto& key : keys) {
                other[key] = otherInfo.get(key).toStr();
            }
        }

        ENGINE_OWN_DATA()->pluginName = ENGINE_OWN_DATA()->logger.title = name;
        return Boolean::newBoolean(PluginManager::registerPlugin(ENGINE_OWN_DATA()->pluginFileOrDirPath,
                                                                 name, desc, ver, other));
    }
    CATCH("Fail in LLSERegisterPlugin!");
}

Local<Value> LlClass::getPluginInfo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        std::string name = args[0].toStr();
        auto plugin = ll::getPlugin(name);
        if (plugin) {
            auto result = Object::newObject();

            result.set("name", plugin->name);
            result.set("desc", plugin->desc);

            auto ver = Array::newArray();
            ver.add(Number::newNumber(plugin->version.major));
            ver.add(Number::newNumber(plugin->version.minor));
            ver.add(Number::newNumber(plugin->version.revision));

            result.set("version", ver);
            result.set("versionStr", plugin->version.toString(true));
            result.set("filePath", plugin->filePath);

            auto others = Object::newObject();
            for (auto& [k, v] : plugin->others) {
                others.set(k, v);
            }
            result.set("others", others);
            return result;
        }
        return Local<Value>();
    }
    CATCH("Fail in getPluginInfo");
}

Local<Value> LlClass::versionString(const Arguments& args) {
    try {
        return String::newString(ll::getLoaderVersionString());
    }
    CATCH("Fail in LLSEGetVersionString!")
}

Local<Value> LlClass::requireVersion(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try {
        return Boolean::newBoolean(!IsVersionLess(LITELOADER_VERSION_MAJOR, LITELOADER_VERSION_MINOR, LITELOADER_VERSION_REVISION,
                                                  args[0].toInt(), (args.size() >= 2) ? args[1].toInt() : 0, (args.size() >= 3) ? args[2].toInt() : 0));
    }
    CATCH("Fail in LLSERequireVersion!")
}

Local<Value> LlClass::getAllPluginInfo(const Arguments& args) {
    try {
        Local<Array> plugins = Array::newArray();
        auto list = PluginManager::getAllPlugins();
        for (auto& plugin : list) {
            // Create plugin object
            auto pluginObject = Object::newObject();

            pluginObject.set("name", plugin.second->name);
            pluginObject.set("desc", plugin.second->desc);

            auto ver = Array::newArray();
            ver.add(Number::newNumber(plugin.second->version.major));
            ver.add(Number::newNumber(plugin.second->version.minor));
            ver.add(Number::newNumber(plugin.second->version.revision));

            pluginObject.set("version", ver);
            pluginObject.set("versionStr", plugin.second->version.toString(true));
            pluginObject.set("filePath", plugin.second->filePath);

            auto others = Object::newObject();
            for (auto& [k, v] : plugin.second->others) {
                others.set(k, v);
            }
            pluginObject.set("others", others);

            // Add plugin object to list
            plugins.add(pluginObject);
        }
        return plugins;
    }
    CATCH("Fail in LLSEGetAllPluginInfo!")
}

// For Compatibility
Local<Value> LlClass::listPlugins(const Arguments& args) {
    try {
        Local<Array> plugins = Array::newArray();
        auto list = PluginManager::getAllPlugins();
        for (auto& plugin : list) {
            plugins.add(String::newString(plugin.second->name));
        }
        return plugins;
    }
    CATCH("Fail in LLSEListPlugins!")
}

Local<Value> LlClass::require(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString)

    try {
        bool existing = false;
        string require = args[0].toStr();
        string thisName = ENGINE_OWN_DATA()->pluginName;

        //已加载插件
        if (PluginManager::getPlugin(require) != nullptr) {
            logger.info(tr("llse.api.ll.require.success", thisName, require));
            return Boolean::newBoolean(true);
        }

        //插件目录
        existing = false;
        string requirePath = "";

        // Direct
        std::error_code ec;
        if (filesystem::exists(str2wstr(require), ec)) {
            requirePath = require;
            existing = true;
        } else {
            auto list = GetFileNameList(LLSE_PLUGINS_LOAD_DIR);
            for (auto fileName : list) {
                if (fileName == require) {
                    requirePath = string(LLSE_PLUGINS_LOAD_DIR) + "/" + require;
                    existing = true;
                    break;
                }
            }
        }

        if (existing) {
            bool success = PluginManager::loadPlugin(requirePath);
            if (success) {
                logger.info(thisName + tr("llseapi.require.success") + require);
                return Boolean::newBoolean(true);
            } else {
                logger.error(thisName + tr("llseapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        //依赖库目录
        existing = false;
        auto list = GetFileNameList(LLSE_DEPENDS_DIR);
        for (auto fileName : list) {
            if (fileName == require) {
                existing = true;
                break;
            }
        }
        if (existing) {
            bool success = PluginManager::loadPlugin(string(LLSE_DEPENDS_DIR) + "/" + require);
            if (success) {
                logger.info(thisName + tr("llseapi.require.success") + require);
                return Boolean::newBoolean(true);
            } else {
                logger.error(thisName + tr("llseapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        // HTTP(s)下载
        if (args.size() == 1) {
            logger.error(thisName + tr("llseapi.require.fail"));
            return Boolean::newBoolean(false);
        }

        string remotePath = args[1].toStr();
        int status;
        string result, downloadPath = string(LLSE_DEPENDS_DIR) + "/" + require;

        if (!HttpGetSync(remotePath, &status, &result) || status != 200) {
            logger.error(thisName + tr("llseapi.require.network.fail") + to_string(status));
            return Boolean::newBoolean(false);
        }
        WriteAllFile(downloadPath, result, false);

        logger.info(thisName + tr("llseapi.require.download.success") + downloadPath);

        //下载完毕安装
        bool success = PluginManager::loadPlugin(downloadPath);
        if (success) {
            logger.info(thisName + tr("llseapi.require.success") + require);
            return Boolean::newBoolean(true);
        } else {
            logger.error(thisName + tr("llseapi.require.fail"));
            return Boolean::newBoolean(false);
        }
    }
    CATCH("Fail in LLSERequire!")
}

Local<Value> LlClass::eval(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        return EngineScope::currentEngine()->eval(args[0].toStr());
    }
    CATCH("Fail in LLSEEval!")
}

// For Compatibility
Local<Value> LlClass::getVersionStatusFunction(const Arguments& args) {
    try {
        int versionStatusValue;

        if (LITELOADER_VERSION_STATUS == ll::Version::Status::Release) {
            versionStatusValue = 0;
        } else if (LITELOADER_VERSION_STATUS == ll::Version::Status::Beta) {
            versionStatusValue = 1;
        } else if (LITELOADER_VERSION_STATUS == ll::Version::Status::Dev) {
            versionStatusValue = 2;
        }

        return Number::newNumber(versionStatusValue);
    }
    CATCH("Fail in LLSEGetVersionStatus")
}

// For Compatibility
Local<Value> LlClass::version(const Arguments& args) {
    try {
        Local<Object> ver = Object::newObject();
        ver.set("major", LITELOADER_VERSION_MAJOR);
        ver.set("minor", LITELOADER_VERSION_MINOR);
        ver.set("revision", LITELOADER_VERSION_REVISION);
        ver.set("isBeta", LITELOADER_VERSION_STATUS == ll::Version::Status::Beta);
        ver.set("isRelease", LITELOADER_VERSION_STATUS == ll::Version::Status::Release);
        ver.set("isDev", LITELOADER_VERSION_STATUS == ll::Version::Status::Dev);
        return ver;
    }
    CATCH("Fail in LLSEGetVersion!")
}

// For Compatibility
Local<Value> LlClass::isDebugModeFunction(const Arguments& args) {
    try {
        return Boolean::newBoolean(ll::isDebugMode());
    }
    CATCH("Fail in LLSEGetIsDebugModeFunction")
}

// For Compatibility
Local<Value> LlClass::getScriptEngineVersionFunction(const Arguments& args) {
    try {
        return String::newString(EngineScope::currentEngine()->getEngineVersion());
    }
    CATCH("Fail in LLSEGetScriptEngineVerison")
}