#include "ScriptAPI.h"
#include "APIHelp.h"
#include <Engine/EngineOwnData.h>
#include <Engine/LocalShareData.h>
#include <Engine/GlobalShareData.h>
#include <Engine/TimeTaskSystem.h>
#include <sstream>
#include <windows.h>
#include <chrono>
#include <map>
#include <thread>
#include <memory>
#define H do_hash
using namespace std;

//////////////////// APIs ////////////////////

Local<Value> Log(const Arguments& args)
{
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

Local<Value> ColorLog(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        char color = 15;
        switch (H(args[0].asString().toString().c_str()))
        {
            case H("dk_blue")  : color = 1;  break;
            case H("dk_green") : color = 2;  break;
            case H("bt_blue")  : color = 3;  break;
            case H("dk_red")   : color = 4;  break;
            case H("purple")   : color = 5;  break;
            case H("dk_yellow"): color = 6;  break;
            case H("grey")     : color = 7;  break;
            case H("sky_blue") : color = 9;  break;
            case H("blue")     : color = 9;  break;
            case H("green")    : color = 10; break;
            case H("cyan")     : color = 11; break;
            case H("red")      : color = 12; break;
            case H("pink")     : color = 13; break;
            case H("yellow")   : color = 14; break;
            case H("white")    : color = 15; break;
            default: logger.error("Invalid color!");break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

        auto& infoOut = ENGINE_OWN_DATA()->logger.info;
        for (int i = 1; i < args.size(); ++i)
            PrintValue(infoOut, args[i]);
        infoOut << Logger::endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in Log!");
}

Local<Value> FastLog(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        ostringstream sout;
        for (int i = 0; i < args.size(); ++i)
            PrintValue(sout, args[i]);
        sout << endl;

        pool.enqueue([str{ sout.str() }, pluginName{ ENGINE_OWN_DATA()->pluginName }]() {
            Logger fastLogger(pluginName);
            fastLogger.info(str);
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in FastLog!");
}


//////////////////// APIs ////////////////////

Local<Value> SetTimeout(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        bool isFunc = args[0].getKind() == ValueKind::kFunction;
        if (!isFunc && args[0].getKind() != ValueKind::kString)
        {
            logger.error("Unknown type of time task!");
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

Local<Value> SetInterval(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        bool isFunc = args[0].getKind() == ValueKind::kFunction;
        if (!isFunc && args[0].getKind() != ValueKind::kString)
        {
            logger.error("Unknown type of time task!");
            return Local<Value>();
        }

        int timeout = args[1].toInt();
        if (timeout <= 0)
            timeout = 1;

        if(isFunc)
            return Number::newNumber(NewInterval(args[0].asFunction(), {}, timeout));
        else
            return Number::newNumber(NewInterval(args[0].asString(), timeout));
    }
    CATCH("Fail in SetInterval!")
}

// ClearInterval
Local<Value> ClearInterval(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try {
        return Boolean::newBoolean(ClearTimeTask(args[0].toInt()));
    }
    CATCH("Fail in ClearInterval!")
}