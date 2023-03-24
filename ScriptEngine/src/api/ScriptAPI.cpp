#include "api/ScriptAPI.h"
#include "api/APIHelp.h"
#include "engine/EngineOwnData.h"
#include "engine/LocalShareData.h"
#include "engine/GlobalShareData.h"
#include "engine/TimeTaskSystem.h"
#include <sstream>
#include <windows.h>
#include <chrono>
#include <map>
#include <thread>
#include <memory>
#define H do_hash
using namespace std;

//////////////////// APIs ////////////////////

Local<Value> Log(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        auto& infoOut = ENGINE_OWN_DATA()->logger.info;

        for (int i = 0; i < args.size(); ++i)
            PrintValue(infoOut, args[i]);
        infoOut << Logger::endl;
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in Log!");
}

//#include <LiteLoader/Main/Config.h>
Local<Value> ColorLog(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        std::string prefix = "";
        switch (H(args[0].asString().toString().c_str())) {
            case H("dk_blue"):
                prefix = "\x1b[34m";
                break;
            case H("dk_green"):
                prefix = "\x1b[32m";
                break;
            case H("bt_blue"):
                prefix = "\x1b[36m";
                break;
            case H("dk_red"):
                prefix = "\x1b[31m";
                break;
            case H("purple"):
                prefix = "\x1b[35m";
                break;
            case H("dk_yellow"):
                prefix = "\x1b[33m";
                break;
            case H("grey"):
                prefix = "\x1b[37m";
                break;
            case H("sky_blue"):
                prefix = "\x1b[94m";
                break;
            case H("blue"):
                prefix = "\x1b[94m";
                break;
            case H("green"):
                prefix = "\x1b[92m";
                break;
            case H("cyan"):
                prefix = "\x1b[36m";
                break;
            case H("red"):
                prefix = "\x1b[91m";
                break;
            case H("pink"):
                prefix = "\x1b[95m";
                break;
            case H("yellow"):
                prefix = "\x1b[93m";
                break;
            case H("white"):
                prefix = "\x1b[97m";
                break;
            default:
                LOG_ERROR_WITH_SCRIPT_INFO("Invalid color!");
                break;
        }
        // if (!ll::globalConfig.colorLog)
        //     prefix = "";
        auto& infoOut = ENGINE_OWN_DATA()->logger.info;
        infoOut << prefix;
        for (int i = 1; i < args.size(); ++i)
            PrintValue(infoOut, args[i]);
        infoOut << "\x1b[0m" << Logger::endl;
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in Log!");
}

Local<Value> FastLog(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        ostringstream sout;
        for (int i = 0; i < args.size(); ++i)
            PrintValue(sout, args[i]);

        pool.enqueue([str{sout.str()}, pluginName{ENGINE_OWN_DATA()->pluginName}]() {
            SetCurrentThreadDescription(L"LLSE_FastLog_" _CRT_WIDE(LLSE_MODULE_TYPE));
            Logger fastLogger(pluginName);
            fastLogger.info(str);
            SetCurrentThreadDescription(L"LLSE_ThreadPool_Idle_" _CRT_WIDE(LLSE_MODULE_TYPE));
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in FastLog!");
}


//////////////////// APIs ////////////////////

Local<Value> SetTimeout(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)
    try {
        bool isFunc = args[0].getKind() == ValueKind::kFunction;
        if (!isFunc && args[0].getKind() != ValueKind::kString) {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        int timeout = args[1].toInt();
        if (timeout <= 0)
            timeout = 1;

        if (isFunc)
            return Number::newNumber(NewTimeout(args[0].asFunction(), {}, timeout));
        else
            return Number::newNumber(NewTimeout(args[0].asString(), timeout));
    }
    CATCH("Fail in SetTimeout!")
}

Local<Value> SetInterval(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        bool isFunc = args[0].getKind() == ValueKind::kFunction;
        if (!isFunc && args[0].getKind() != ValueKind::kString) {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        int timeout = args[1].toInt();
        if (timeout <= 0)
            timeout = 1;

        if (isFunc)
            return Number::newNumber(NewInterval(args[0].asFunction(), {}, timeout));
        else
            return Number::newNumber(NewInterval(args[0].asString(), timeout));
    }
    CATCH("Fail in SetInterval!")
}

// ClearInterval
Local<Value> ClearInterval(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try {
        return Boolean::newBoolean(ClearTimeTask(args[0].toInt()));
    }
    CATCH("Fail in ClearInterval!")
}