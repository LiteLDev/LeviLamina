#include "APIHelp.h"
#include "DataAPI.h"
#include "DatabaseAPI.h"
#include <fstream>
#include <string>
#include <sstream>
#include <exception>
#include <Engine/EngineOwnData.h>
#include <PlayerInfoAPI.h>
#include <Utils/CryptHelper.h>
#include <Utils/FileHelper.h>
#include <Utils/StringHelper.h>
#include <Tools/JsonHelper.h>
#include <EconomicSystem.h>
#include <cpp-base64/base64.h>
using namespace std;


//////////////////// Class Definition ////////////////////

ClassDefine<void> DataClassBuilder =
    defineClass("data")
        .function("xuid2name", &DataClass::xuid2name)
        .function("name2xuid", &DataClass::name2xuid)
        .function("parseJson", &DataClass::parseJson)
        .function("toJson", &DataClass::toJson)
        .function("toMD5", &DataClass::toMD5)
        .function("toSHA1", &DataClass::toSHA1)
        .function("toBase64", &DataClass::toBase64)
        .function("fromBase64", &DataClass::fromBase64)

        // For Compatibility
        .function("openDB", &DataClass::openDB)
        .function("openConfig", &DataClass::openConfig)
        .build();

ClassDefine<void> MoneyClassBuilder =
    defineClass("money")
        .function("set", &MoneyClass::set)
        .function("get", &MoneyClass::get)
        .function("add", &MoneyClass::add)
        .function("reduce", &MoneyClass::reduce)
        .function("trans", &MoneyClass::trans)
        .function("getHistory", &MoneyClass::getHistory)
        .function("clearHistory", &MoneyClass::clearHistory)
        .build();

ClassDefine<ConfJsonClass> ConfJsonClassBuilder =
    defineClass<ConfJsonClass>("JsonConfigFile")
        .constructor(&ConfJsonClass::constructor)
        .instanceFunction("init", &ConfJsonClass::init)
        .instanceFunction("get", &ConfJsonClass::get)
        .instanceFunction("set", &ConfJsonClass::set)
        .instanceFunction("delete", &ConfJsonClass::del)
        .instanceFunction("reload", selectOverloadedFunc<Local<Value> (ConfJsonClass::*)(const Arguments&)>(&ConfJsonClass::reload))
        .instanceFunction("close", selectOverloadedFunc<Local<Value>(ConfJsonClass::*)(const Arguments&)>(&ConfJsonClass::close))
        .instanceFunction("getPath", &ConfJsonClass::getPath)
        .instanceFunction("read", &ConfJsonClass::read)
        .instanceFunction("write", &ConfJsonClass::write)
        .build();

ClassDefine<ConfIniClass> ConfIniClassBuilder =
    defineClass<ConfIniClass>("IniConfigFile")
        .constructor(&ConfIniClass::constructor)
        .instanceFunction("init", &ConfIniClass::init)
        .instanceFunction("set", &ConfIniClass::set)
        .instanceFunction("getStr", &ConfIniClass::getStr)
        .instanceFunction("getInt", &ConfIniClass::getInt)
        .instanceFunction("getFloat", &ConfIniClass::getFloat)
        .instanceFunction("getBool", &ConfIniClass::getBool)
        .instanceFunction("delete", &ConfIniClass::del)
        .instanceFunction("reload", selectOverloadedFunc<Local<Value>(ConfIniClass::*)(const Arguments&)>(&ConfIniClass::reload))
        .instanceFunction("close", selectOverloadedFunc<Local<Value>(ConfIniClass::*)(const Arguments&)>(&ConfIniClass::close))
        .instanceFunction("getPath", &ConfIniClass::getPath)
        .instanceFunction("read", &ConfIniClass::read)
        .instanceFunction("write", &ConfIniClass::write)
        .build();


//////////////////// Classes ConfBase ////////////////////

ConfBaseClass::ConfBaseClass(const string& dir)
    : confPath(dir)
{ }

Local<Value> ConfBaseClass::getPath(const Arguments& args)
{
    try
    {
        return String::newString(confPath);
    }
    CATCH("Fail in confGetPath!")
}

Local<Value> ConfBaseClass::read(const Arguments& args)
{
    try
    {
        auto content = ReadAllFile(confPath);
        if (!content)
            return Local<Value>();
        else
            return String::newString(*content);
    }
    CATCH("Fail in confRead!")
}

//////////////////// Classes ConfJson ////////////////////

// 生成函数
ConfJsonClass::ConfJsonClass(const Local<Object>& scriptObj, const string& path, const string& defContent)
    : ScriptClass(scriptObj), ConfBaseClass(path)
{
    jsonConf = CreateJson(path, defContent);
}

ConfJsonClass::ConfJsonClass(const string& path, const string& defContent)
    : ScriptClass(ScriptClass::ConstructFromCpp<ConfJsonClass>{}), ConfBaseClass(path)
{
    jsonConf = CreateJson(path, defContent);
}

ConfJsonClass::~ConfJsonClass()
{
    close();
}

ConfJsonClass* ConfJsonClass::constructor(const Arguments& args)
{
    CHECK_ARGS_COUNT_C(args, 1);
    CHECK_ARG_TYPE_C(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE_C(args[1], ValueKind::kString);

    try {
        string path = args[0].toStr();
        if (path.empty())
            return nullptr;

        if (args.size() >= 2)
            return new ConfJsonClass(args.thiz(), path, args[1].toStr());
        else
            return new ConfJsonClass(args.thiz(), path, "{}");
    }
    CATCH_C("Fail in Open JsonConfigFile!");
}

Local<Value> ConfJsonClass::init(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        return JsonToValue(jsonConf.at(args[0].toStr()));
    }
    catch (const std::out_of_range& e)
    {
        jsonConf[args[0].toStr()] = fifo_json::parse(ValueToJson(args[1]));
        flush();
        return args[1];
    }
    catch (const fifo_json::exception& e)
    {
        jsonConf[args[0].toStr()] = fifo_json::parse(ValueToJson(args[1]));
        flush();
        return args[1];
    }
    CATCH("Fail in confJsonSet!");
}

Local<Value> ConfJsonClass::get(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        return JsonToValue(jsonConf.at(args[0].toStr()));
    }
    catch (const std::out_of_range& e)
    {
        return args.size() >= 2 ? args[1] : Local<Value>();
    }
    catch (const fifo_json::exception& e)
    {
        return args.size() >= 2 ? args[1] : Local<Value>();
    }
    CATCH("Fail in confJsonGet!")
}

Local<Value> ConfJsonClass::set(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        jsonConf[args[0].toStr()] = fifo_json::parse(ValueToJson(args[1]));
        return Boolean::newBoolean(flush());
    }
    catch (const fifo_json::exception& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in confJsonSet!");
}

Local<Value> ConfJsonClass::del(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        if (jsonConf.erase(args[0].toStr()) <= 0)
            return Boolean::newBoolean(false);

        return Boolean::newBoolean(flush());
    }
    catch (const fifo_json::exception& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in confJsonDelete!");
}

Local<Value> ConfJsonClass::reload(const Arguments& args)
{
    try
    {
        return Boolean::newBoolean(reload());
    }
    catch (const fifo_json::exception& e)
    {
        logger.error("Fail to parse json content in file!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in confJsonReload!");
}

Local<Value> ConfJsonClass::close(const Arguments& args)
{
    try
    {
        return Boolean::newBoolean(close());
    }
    CATCH("Fail in confJsonClose!");
}

Local<Value> ConfJsonClass::write(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        bool res = WriteAllFile(confPath, args[0].toStr(), false);
        reload();
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in confJsonWrite!");
}

bool ConfJsonClass::flush()
{
    ofstream jsonFile(confPath);
    if (jsonFile.is_open())
    {
        jsonFile << jsonConf.dump(4);
        jsonFile.close();
        return true;
    }
    else
        return false;
}

bool ConfJsonClass::close()
{
    reload();
    return true;
}

bool ConfJsonClass::reload()
{
    auto jsonTexts = ReadAllFile(confPath);
    if (!jsonTexts)
        return false;

    jsonConf = fifo_json::parse(*jsonTexts, nullptr, true, true);
    return true;
}


//////////////////// Classes ConfIni ////////////////////

// 生成函数
ConfIniClass::ConfIniClass(const Local<Object>& scriptObj, const string& path, const string& defContent)
    : ScriptClass(scriptObj), ConfBaseClass(path)
{
    iniConf = SimpleIni::create(path, defContent);
}

ConfIniClass::ConfIniClass(const string& path, const string& defContent)
    : ScriptClass(ScriptClass::ConstructFromCpp<ConfIniClass>{}), ConfBaseClass(path)
{
    iniConf = SimpleIni::create(path, defContent);
}

ConfIniClass::~ConfIniClass()
{
    close();
}

ConfIniClass* ConfIniClass::constructor(const Arguments& args)
{
    CHECK_ARGS_COUNT_C(args, 1);
    CHECK_ARG_TYPE_C(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE_C(args[1], ValueKind::kString);

    try {
        string path = args[0].toStr();
        if (path.empty())
            return nullptr;

        if (args.size() >= 2)
            return new ConfIniClass(args.thiz(), path, args[1].toStr());
        else
            return new ConfIniClass(args.thiz(), path, "");
    }
    CATCH_C("Fail in Open JsonConfigFile!");
}

bool ConfIniClass::flush()
{
    return iniConf->SaveFile(iniConf->filePath.c_str(), true);
}

bool ConfIniClass::close()
{
    if (isValid())
    {
        reload();
        delete iniConf;
        iniConf = nullptr;
    }
    return true;
}
bool ConfIniClass::reload()
{
    if (!isValid())
        return false;

    delete iniConf;
    iniConf = SimpleIni::create(confPath,"");
    return true;
}

Local<Value> ConfIniClass::init(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();

        string section = args[0].toStr();
        string key = args[1].toStr();
        Local<Value> res;

        switch (args[2].getKind())
        {
        case ValueKind::kString:
        {
            string def = args[2].toStr();
            string data = iniConf->getString(section, key, def);
            if (data == def)
            {
                iniConf->setString(section, key, def);
                flush();
            }
            res = String::newString(data);
            break;
        }
        case ValueKind::kNumber:
        {
            if (CheckIsFloat(args[2]))
            {
                // Float
                float def = args[2].asNumber().toFloat();
                float data = iniConf->getFloat(section, key, def);
                if (data == def)
                {
                    iniConf->setFloat(section, key, def);
                    flush();
                }
                res = Number::newNumber(data);
            }
            else
            {
                // Int
                int def = args[2].toInt();
                int data = iniConf->getInt(section, key, def);
                if (data == def)
                {
                    iniConf->setInt(section, key, def);
                    flush();
                }
                res = Number::newNumber(data);
            }
            break;
        }
        case ValueKind::kBoolean:
        {
            bool def = args[2].asBoolean().value();
            bool data = iniConf->getBool(section, key, def);
            if (data == def)
            {
                iniConf->setBool(section, key, def);
                flush();
            }
            res = Boolean::newBoolean(data);
            break;
        }
        default:
            LOG_ERROR_WITH_SCRIPT_INFO("Ini file don't support this type of data!");
            return Local<Value>();
            break;
        }
        return res;
    }
    CATCH("Fail in confIniInit!")
}

Local<Value> ConfIniClass::set(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();
        
        string section = args[0].toStr();
        string key = args[1].toStr();
        switch (args[2].getKind())
        {
        case ValueKind::kString:
            iniConf->setString(section, key, args[2].toStr());
            break;
        case ValueKind::kNumber:
            if (CheckIsFloat(args[2]))
                iniConf->setFloat(section, key, args[2].asNumber().toFloat());
            else
                iniConf->setInt(section, key, args[2].toInt());
            break;
        case ValueKind::kBoolean:
            iniConf->setBool(section, key, args[2].asBoolean().value());
            break;
        default:
            LOG_ERROR_WITH_SCRIPT_INFO("Ini file don't support this type of data!");
            return Local<Value>();
            break;
        }
        flush();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in confIniSet!")
}

Local<Value> ConfIniClass::getStr(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kString)

    try
    {
        if (!isValid())
            return Local<Value>();

        return String::newString(iniConf->getString(args[0].toStr(), args[1].toStr(), 
            args.size() >= 3 ? args[2].toStr() : ""));
    }
    CATCH("Fail in confIniGetStr!")
}

Local<Value> ConfIniClass::getInt(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber)

    try
    {
        if (!isValid())
            return Local<Value>();

        return Number::newNumber(iniConf->getInt(args[0].toStr(), args[1].toStr(), 
            args.size() >= 3 ? args[2].asNumber().toInt32() : 0));
    }
    CATCH("Fail in ConfIniGetInt!");
}

Local<Value> ConfIniClass::getFloat(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try
    {
        if (!isValid())
            return Local<Value>();

        return Number::newNumber(iniConf->getFloat(args[0].toStr(), args[1].toStr(), 
            args.size() >= 3 ? (float)args[2].asNumber().toDouble() : 0.0));
    }
    CATCH("Fail in ConfIniGetFloat!");
}

Local<Value> ConfIniClass::getBool(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kBoolean);

    try
    {
        if (!isValid())
            return Local<Value>();

        return Boolean::newBoolean(iniConf->getBool(args[0].toStr(), args[1].toStr(), 
            args.size() >= 3 ? args[2].asBoolean().value() : false));
    }
    CATCH("Fail in ConfIniGetBool");
}

Local<Value> ConfIniClass::del(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();

        bool res = iniConf->deleteKey(args[0].toStr(), args[1].toStr());
        flush();
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in confIniDelete!");
}

Local<Value> ConfIniClass::reload(const Arguments& args)
{
    try
    {
        return Boolean::newBoolean(reload());
    }
    CATCH("Fail in confReload!");
}

Local<Value> ConfIniClass::write(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        bool res = WriteAllFile(confPath, args[0].toStr(), false);
        reload();
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in confIniWrite!");
}

Local<Value> ConfIniClass::close(const Arguments& args)
{
    try
    {
        return Boolean::newBoolean(close());
    }
    CATCH("Fail in confClose!");
}


//////////////////// APIs ////////////////////

Local<Value> MoneyClass::set(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try
    {
        return Boolean::newBoolean(EconomySystem::setMoney(args[0].toStr(), args[1].asNumber().toInt64()));
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneySet!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneySet!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in MoneySet!");
}

Local<Value> MoneyClass::get(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        return Number::newNumber(EconomySystem::getMoney(args[0].toStr()));
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneyGet!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Number::newNumber(0);
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneyGet!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Number::newNumber(0);
    }
    CATCH("Fail in MoneyGet!");
}

Local<Value> MoneyClass::add(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try
    {
        return Boolean::newBoolean(EconomySystem::addMoney(args[0].toStr(), args[1].asNumber().toInt64()));
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneyAdd!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneyAdd!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in MoneyAdd!");
}

Local<Value> MoneyClass::reduce(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try
    {
        return Boolean::newBoolean(EconomySystem::reduceMoney(args[0].toStr(), args[1].asNumber().toInt64()));
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneyReduce!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneyReduce!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in MoneyReduce!");
}

Local<Value> MoneyClass::trans(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try
    {
        string note = "";
        if (args.size() >= 4 && args[3].getKind() == ValueKind::kString)
            note = args[3].toStr();
        return Boolean::newBoolean(EconomySystem::transMoney(args[0].toStr(), args[1].toStr(),
                args[2].asNumber().toInt64(), note));
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneyTrans!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneyTrans!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in MoneyTrans!");
}

Local<Value> MoneyClass::getHistory(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try
    {
        string res{ EconomySystem::getMoneyHist(args[0].toStr(), args[1].asNumber().toInt64()) };
        auto list = SplitStrWithPattern(res, "\n");
        // from -> to money time (note)

        Local<Array> arr = Array::newArray();

        string from, to, time1, time2, note, tmp;
        long long money;
        for(auto &str : list)
        {
            if (str.back() == '\n')
                str.pop_back();

            istringstream sin(str);
            Local<Object> obj = Object::newObject();

            note.clear();
            sin >> from >> tmp >> to >> money >> time1 >> time2;
            sin.get();
            getline(sin, note);
            if (note.front() == '(')
                note.erase(0, 1);
            if (note.back() == '\n')
                note.pop_back();
            if (note.back() == ')')
                note.pop_back();

            time1 += " " + time2;

            obj.set("from", String::newString(from));
            obj.set("to", String::newString(to));
            obj.set("money", Number::newNumber(money));
            obj.set("time", String::newString(time1));
            obj.set("note", String::newString(note));
            arr.add(obj);
        }
        return arr;
    }
    catch (const std::invalid_argument& e)
    {
        logger.error("Bad argument in MoneyGetHintory!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Local<Value>();
    }
    catch (const std::out_of_range& e)
    {
        logger.error("Bad argument in MoneyGetHintory!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Local<Value>();
    }
    CATCH("Fail in MoneyGetHintory!");
}

Local<Value> MoneyClass::clearHistory(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try
    {
        return Boolean::newBoolean(EconomySystem::clearMoneyHist(args[0].asNumber().toInt64()));
    }
    CATCH("Fail in MoneyClearHistory!");
}

Local<Value> DataClass::xuid2name(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        return String::newString(PlayerInfo::fromXuid(args[0].toStr()));
    }
    CATCH("Fail in Xuid2Name!");
}

Local<Value> DataClass::name2xuid(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        return String::newString(PlayerInfo::getXuid(args[0].toStr()));
    }
    CATCH("Fail in Name2Xuid!");
}

Local<Value> DataClass::toJson(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try
    {
        int spaces = -1;
        if (args.size() >= 2)
        {
            int newSpaces = args[1].toInt();
            if (newSpaces > 0)
                spaces = newSpaces;
        }
        try
        {
            return String::newString(ValueToJson(args[0],spaces));
        }
        catch (...)
        {
            LOG_ERROR_WITH_SCRIPT_INFO("Failed to transform into Json.");
            return Local<Value>();
        }
    }
    CATCH("Fail in ToJson!");
}

Local<Value> DataClass::parseJson(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        try
        {
            return JsonToValue(args[0].toStr());
        }
        catch (...)
        {
            LOG_ERROR_WITH_SCRIPT_INFO("Failed to parse from Json.");
            return Local<Value>();
        }
    }
    CATCH("Fail in ParseJson!");
}

Local<Value> DataClass::toMD5(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        string data;
        if (args[0].isString())
            data = args[0].toStr();
        else if (args[0].isByteBuffer())
        {
            Local<ByteBuffer> buf = args[0].asByteBuffer();
            data = string((char*)buf.getRawBytes(), buf.byteLength());
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        return String::newString(CalcMD5(data));
    }
    CATCH("Fail in ToMD5!");
}

Local<Value> DataClass::toSHA1(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        string data;
        if (args[0].isString())
            data = args[0].toStr();
        else if (args[0].isByteBuffer())
        {
            Local<ByteBuffer> buf = args[0].asByteBuffer();
            data = string((char*)buf.getRawBytes(), buf.byteLength());
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        return String::newString(CalcSHA1(data));
    }
    CATCH("Fail in ToSHA1!");
}

Local<Value> DataClass::toBase64(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        string data;
        if (args[0].isString())
            data = args[0].toStr();
        else if (args[0].isByteBuffer())
        {
            Local<ByteBuffer> buf = args[0].asByteBuffer();
            data = string((char*)buf.getRawBytes(), buf.byteLength());
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        return String::newString(base64_encode(data));
    }
    CATCH("Fail in ToBase64!");
}

Local<Value> DataClass::fromBase64(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        bool isBinary = false;
        if (args.size() > 1)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);
            isBinary = args[1].asBoolean().value();
        }
        auto data = base64_decode(args[0].toStr());
        if (isBinary)
        {
            return ByteBuffer::newByteBuffer((void*)data.c_str(), data.size());
        }
        else
        {
            return String::newString(data);
        }
    }
    CATCH("Fail in FromBase64!");
}


// For Compability

Local<Value> KVDBClass::newDb(const string& dir)
{
    auto newp = new KVDBClass(dir);

    if (newp->isValid())
        return newp->getScriptObject();
    else
    {
        delete newp;
        return Local<Value>();
    }
}

Local<Value> ConfJsonClass::newConf(const string& path, const string& defContent)
{
    auto newp = new ConfJsonClass(path, defContent);
    return newp->getScriptObject();
}


Local<Value> ConfIniClass::newConf(const string& path, const string& defContent)
{
    auto newp = new ConfIniClass(path, defContent);
    if (newp)
        return newp->getScriptObject();
    else
        return Local<Value>();
}

Local<Value> DataClass::openConfig(const Arguments& args)
{
    enum GlobalConfType { json, ini };

    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kString);

    try {
        string path = args[0].toStr();
        GlobalConfType confType = GlobalConfType::ini;

        if (path.empty())
            return Boolean::newBoolean(false);

        if (args.size() >= 2)
        {
            string fileType = args[1].toStr();
            if (fileType == "json" || fileType == "Json")
                confType = GlobalConfType::json;
        }

        if (confType == GlobalConfType::ini)
        {
            if (args.size() >= 3)
                return ConfIniClass::newConf(path, args[2].toStr());
            else
                return ConfIniClass::newConf(path);
        }
        else    //json
        {
            if (args.size() >= 3)
                return ConfJsonClass::newConf(path, args[2].toStr());
            else
                return ConfJsonClass::newConf(path, "{}");
        }
    }
    CATCH("Fail in OpenConfig!");
}

Local<Value> DataClass::openDB(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    return KVDBClass::newDb(args[0].toStr());
}
