#include "APIHelp.h"
#include "LxlAPI.h"
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Utils/NetworkHelper.h>
#include <Tools/Utils.h>
#include <Version.h>
#include <string>
#include <filesystem>
using namespace std;


//////////////////// Classes ////////////////////

ClassDefine<void> LxlClassBuilder =
    defineClass("lxl")
        .function("version", &LxlClass::version)
        .function("requireVersion", &LxlClass::requireVersion)
        .function("listPlugins", &LxlClass::listPlugins)
        .function("import", &LxlClass::importFunc)
        .function("export", &LxlClass::exportFunc)
        .function("require", &LxlClass::require)
        .function("eval", &LxlClass::eval)

        //For Compatibility
        .function("checkVersion", &LxlClass::requireVersion)
        .build();


Local<Value> LxlClass::version(const Arguments& args)
{
    try{
        Local<Object> ver = Object::newObject();
        ver.set("major", LXL_VERSION_MAJOR);
        ver.set("minor", LXL_VERSION_MINOR);
        ver.set("revision", LXL_VERSION_REVISION);
        ver.set("isBeta", LL::Version::Status::LXL_VERSION_STATUS != LL::Version::Status::Release);
        return ver;
    }
    CATCH("Fail in LxlGetVersion!")
}

Local<Value> LxlClass::requireVersion(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try {
        return Boolean::newBoolean(!IsVersionLess(LXL_VERSION_MAJOR, LXL_VERSION_MINOR, LXL_VERSION_REVISION, 
            args[0].toInt(), (args.size() >= 2) ? args[1].toInt() : 0, (args.size() >= 3) ? args[2].toInt() : 0));
    }
    CATCH("Fail in LxlRequireVersion!")
}

Local<Value> LxlClass::listPlugins(const Arguments& args)
{
    try
    {
        Local<Array> plugins = Array::newArray();
        auto list = LxlListGlocalAllPlugins();
        for(auto pluginName : list)
        {
            plugins.add(String::newString(pluginName));
        }
        return plugins;
    }
    CATCH("Fail in LxlListPlugins!")
}

Local<Value> LxlClass::require(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString)

    try
    {
        bool existing = false;
        string require = args[0].toStr();
        string thisName = ENGINE_OWN_DATA()->pluginName;

        //已加载插件
        for (auto pluginName : globalShareData->pluginsList)
        {
            if (pluginName == require)
            {
                existing = true;
                break;
            }
        }
        if (existing)
        {
            logger.info(thisName + tr("lxlapi.require.success") + require);
            return Boolean::newBoolean(true);
        }

        //插件目录
        existing = false;
        auto list = GetFileNameList(LXL_PLUGINS_LOAD_DIR);
        for (auto fileName : list)
        {
            if (fileName == require)
            {
                existing = true;
                break;
            }
        }
        if (existing)
        { 
            bool success = LxlLoadPlugin(string(LXL_PLUGINS_LOAD_DIR) + "/" + require);
            if (success)
            {
                logger.info(thisName + tr("lxlapi.require.success") + require);
                return Boolean::newBoolean(true);
            }
            else
            {
                logger.error(thisName + tr("lxlapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        //依赖库目录
        existing = false;
        list = GetFileNameList(LXL_DEPENDS_DIR);
        for (auto fileName : list)
        {
            if (fileName == require)
            {
                existing = true;
                break;
            }
        }
        if (existing)
        {
            bool success = LxlLoadPlugin(string(LXL_DEPENDS_DIR) + "/" + require);
            if (success)
            {
                logger.info(thisName + tr("lxlapi.require.success") + require);
                return Boolean::newBoolean(true);
            }
            else
            {
                logger.error(thisName + tr("lxlapi.require.fail"));
                return Boolean::newBoolean(false);
            }
        }

        //HTTP(s)下载
        if (args.size() == 1)
        {
            logger.error(thisName + tr("lxlapi.require.fail"));
            return Boolean::newBoolean(false);
        }

        string remotePath = args[1].toStr();
        int status;
        string result, downloadPath = string(LXL_DEPENDS_DIR) + "/" + require;

        if (!HttpGetSync(remotePath, &status, &result) || status != 200)
        {
            logger.error(thisName + tr("lxlapi.require.network.fail") + to_string(status));
            return Boolean::newBoolean(false);
        }
        WriteAllFile(downloadPath, result, false);

        logger.info(thisName + tr("lxlapi.require.download.success") + downloadPath);

        //下载完毕安装
        bool success = LxlLoadPlugin(downloadPath);
        if (success)
        {
            logger.info(thisName + tr("lxlapi.require.success") + require);
            return Boolean::newBoolean(true);
        }
        else
        {
            logger.error(thisName + tr("lxlapi.require.fail"));
            return Boolean::newBoolean(false);
        }
    }
    CATCH("Fail in LxlRequire!")
}

Local<Value> LxlClass::eval(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try
    {
        return EngineScope::currentEngine()->eval(args[0].toStr());
    }
    CATCH("Fail in LxlEval!")
}