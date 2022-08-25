#include "APIHelp.h"
#include "LlAPI.h"
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Utils/NetworkHelper.h>
#include <PluginManager.h>
#include <Tools/Utils.h>
#include <LiteLoader/Main/Version.h>
#include <string>
#include <filesystem>
#include <map>
using namespace std;


//////////////////// Classes ////////////////////

ClassDefine<void> LlClassBuilder =
    defineClass("ll")
        .function("version", &LlClass::version)
        .function("versionString", &LlClass::versionString)
        .function("versionStatus", &LlClass::getVersionStatus)
        .function("language", &LlClass::getLanguage)
        .function("isDebugMode", &LlClass::getIsDebugMode)
        .function("requireVersion", &LlClass::requireVersion)
        .function("listExtPlugins", &LlClass::listExtPlugins)
        .function("import", &LlClass::importFunc)
        .function("export", &LlClass::exportFunc)
        .function("hasExported", &LlClass::hasFuncExported)
        .function("require", &LlClass::require)
        .function("scriptEngineVersion", &LlClass::getScriptEngineVersion)
        .function("eval", &LlClass::eval)
        .function("registerPlugin", &LlClass::registerPlugin)
        .function("getPluginInfo", &LlClass::getPluginInfo)

        // For Compatibility
        .function("checkVersion", &LlClass::requireVersion)
        .function("listPlugins", &LlClass::listPluginsName)
        .build();

//////////////////// Plugin Object ////////////////////

script::Local<script::Object> PluginObject(auto plugin) {
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

///////////////////////////////////////////////////////

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

        LL::Version ver = LL::Version(1, 0, 0);
        if (args.size() >= 3) {
            if (args[2].isArray()) {
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
            } else if (args[2].isObject()) {
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
        return Boolean::newBoolean(PluginManager::registerPlugin(ENGINE_OWN_DATA()->pluginFilePath,
                                                                 name, desc, ver, other));
    }
    CATCH("Fail in LLSERegisterPlugin!");
}

Local<Value> LlClass::getPluginInfo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        std::string name = args[0].toStr();
        auto plugin = LL::getPlugin(name);
        if (plugin) {
            return PluginObject(plugin);
        }
        return Local<Value>();
    }
    CATCH("Fail in getPluginInfo");
}

Local<Value> LlClass::getVersionStatus(const Arguments& args) {
    try {
        int versionStatusValue;

        if (LITELOADER_VERSION_STATUS == LL::Version::Status::Release) {
            versionStatusValue = 0;
        } else if (LITELOADER_VERSION_STATUS == LL::Version::Status::Beta) {
            versionStatusValue = 1;
        } else if (LITELOADER_VERSION_STATUS == LL::Version::Status::Dev) {
            versionStatusValue = 2;
        }

        return Number::newNumber(versionStatusValue);
    }
    CATCH("Fail in LLSEGetVersionStatus")
}

Local<Value> LlClass::version(const Arguments& args) {
    try {
        Local<Object> ver = Object::newObject();
        ver.set("major", LITELOADER_VERSION_MAJOR);
        ver.set("minor", LITELOADER_VERSION_MINOR);
        ver.set("revision", LITELOADER_VERSION_REVISION);
        ver.set("isBeta", LITELOADER_VERSION_STATUS == LL::Version::Status::Beta);
        ver.set("isRelease", LITELOADER_VERSION_STATUS == LL::Version::Status::Release);
        ver.set("isDev", LITELOADER_VERSION_STATUS == LL::Version::Status::Dev);
        return ver;
    }
    CATCH("Fail in LLSEGetVersion!")
}

Local<Value> LlClass::getLanguage(const Arguments& args) {
    try {
        return String::newString(std::format("{}", LL::getLanguage()));
    }
    CATCH("Fail in LLSEGetLanguage")
}

Local<Value> LlClass::getIsDebugMode(const Arguments& args) {
    try {
        return Boolean::newBoolean(LL::isDebugMode());
    }
    CATCH("Fail in LLSEGetIsDebugMode")
}

Local<Value> LlClass::versionString(const Arguments& args) {
    try {
        return String::newString(LL::getLoaderVersionString());
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

Local<Value> LlClass::listExtPlugins(const Arguments& args) {
    try {
        Local<Array> plugins = Array::newArray();
        auto list = PluginManager::getAllPlugins();
        for (auto& plugin : list) {
            plugins.add(PluginObject(plugin.second));
        }
        return plugins;
    }
    CATCH("Fail in LLSEListExtPlugins!")
}

// For Compatibility
Local<Value> LlClass::listPluginsName(const Arguments& args) {
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

Local<Value> LlClass::getScriptEngineVersion(const Arguments& args) {
    try {
        return String::newString(EngineScope::currentEngine()->getEngineVersion());
    }
    CATCH("Fail in LLSEGetScriptEngineVerison")
}

Local<Value> LlClass::eval(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        return EngineScope::currentEngine()->eval(args[0].toStr());
    }
    CATCH("Fail in LLSEEval!")
}
