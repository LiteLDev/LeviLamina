#include "APIHelp.h"
#include "LoggerAPI.h"
#include "PlayerAPI.h"
#include <Engine/EngineOwnData.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <Tools/Utils.h>
#include <MC/Player.hpp>
using namespace std;


//////////////////// Classes ////////////////////
// clang-format off
ClassDefine<void> LoggerClassBuilder =
    defineClass("logger")
        .function("log", &LoggerClass::log)
        .function("debug", &LoggerClass::debug)
        .function("info", &LoggerClass::info)
        .function("warn", &LoggerClass::warn)
        .function("warning", &LoggerClass::warn)
        .function("error", &LoggerClass::error)
        .function("fatal", &LoggerClass::fatal)

        .function("setTitle", &LoggerClass::setTitle)
        .function("setConsole", &LoggerClass::setConsole)
        .function("setFile", &LoggerClass::setFile)
        .function("setPlayer", &LoggerClass::setPlayer)
        .function("setLogLevel", &LoggerClass::setLogLevel)
        .build();
// clang-format on

////////////////// Helper //////////////////
string inline GetTimeStrHelper() {
    return Raw_GetDateTimeStr();
}

string& StrReplace(string& str, const string& to_replaced, const string& new_str) {
    for (string::size_type pos(0); pos != string::npos; pos += new_str.length()) {
        pos = str.find(to_replaced, pos);
        if (pos != string::npos)
            str.replace(pos, to_replaced.length(), new_str);
        else
            break;
    }
    return str;
}
////////////////// Helper //////////////////

void inline LogDataHelper(Logger::OutputStream* outStream, const Arguments& args) {
    for (int i = 0; i < args.size(); ++i)
        PrintValue(*outStream, args[i]);
    (*outStream) << Logger::endl;
}

Local<Value> LoggerClass::log(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.info, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerLog!")
}

Local<Value> LoggerClass::debug(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.debug, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerDebug!")
}

Local<Value> LoggerClass::info(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.info, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerInfo!")
}

Local<Value> LoggerClass::warn(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.warn, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerWarn!")
}

Local<Value> LoggerClass::error(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.error, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerError!")
}

Local<Value> LoggerClass::fatal(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        auto globalConf = ENGINE_OWN_DATA();
        LogDataHelper(&globalConf->logger.fatal, args);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerFatal!")
}

Local<Value> LoggerClass::setTitle(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        ENGINE_OWN_DATA()->logger.title = args[0].asString().toString();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerSetTitle!")
}

///////////////// Helper /////////////////
void UpdateMaxLogLevel() {
    auto data = ENGINE_OWN_DATA();
    data->maxLogLevel = data->logger.consoleLevel;
    if (data->maxLogLevel < data->logger.fileLevel)
        data->maxLogLevel = data->logger.fileLevel;
    if (data->maxLogLevel < data->logger.playerLevel)
        data->maxLogLevel = data->logger.playerLevel;
}
///////////////// Helper /////////////////

Local<Value> LoggerClass::setConsole(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kBoolean)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        ENGINE_OWN_DATA()->toConsole = args[0].asBoolean().value();
        if (args.size() >= 2) {
            ENGINE_OWN_DATA()->logger.consoleLevel = args[1].toInt();
            UpdateMaxLogLevel();
        }
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerSetConsole!")
}

Local<Value> LoggerClass::setFile(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        string newFile = args[0].asString().toString();
        ENGINE_OWN_DATA()->logger.setFile(newFile, ios::app);

        if (args.size() >= 2) {
            ENGINE_OWN_DATA()->logger.fileLevel = args[1].toInt();
            UpdateMaxLogLevel();
        }
        return Boolean::newBoolean(ENGINE_OWN_DATA()->logger.ofs.is_open());
    }
    CATCH("Fail in LoggerSetFile!")
}

Local<Value> LoggerClass::setPlayer(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        Player* p = PlayerClass::extract(args[0]);
        ENGINE_OWN_DATA()->logger.player = p;

        if (args.size() >= 2) {
            ENGINE_OWN_DATA()->logger.playerLevel = args[1].toInt();
            UpdateMaxLogLevel();
        }
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in LoggerSetPlayer!")
}

Local<Value> LoggerClass::setLogLevel(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try {
        auto conf = ENGINE_OWN_DATA();
        conf->maxLogLevel = conf->logger.consoleLevel = conf->logger.fileLevel = conf->logger.playerLevel =
            args[0].toInt();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in SetLogLevel!")
}
