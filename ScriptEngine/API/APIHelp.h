#pragma once
#include <ScriptX/ScriptX.h>
using script::Local;
using script::Value;
using script::Number;
using script::String;
using script::Boolean;
using script::ByteBuffer;
using script::Function;
using script::Array;
using script::Object;
using script::ScriptClass;
using script::Arguments;
using script::ClassDefine;
using script::defineClass;
using script::selectOverloadedFunc;
using script::ScriptEngine;
using script::ScriptEngineImpl;
using script::EngineScope;
using script::ExitEngineScope;
using script::Exception;
using script::ValueKind;

#include <Global.hpp>
#include <Engine/EngineOwnData.h>
#include <Tools/JsonHelper.h>
#include <MC/Level.hpp>
#include <string>
#include <vector>
#include <exception>
#include <sstream>

// 输出异常信息
inline void PrintException(const script::Exception& e)
{
    ostringstream sout;
    sout << e << endl;
    logger.error(sout.str());
}

// 方便提取类型
#define toStr() asString().toString()
#define toInt() asNumber().toInt32()

// 实例类类型检查
template <typename T>
bool inline IsInstanceOf(Local<Value> v)
{
    return EngineScope::currentEngine()->isInstanceOf<T>(v);
}

// 至少COUNT个参数
#define CHECK_ARGS_COUNT(ARGS,COUNT) \
    if(ARGS.size()<COUNT) \
    { \
        logger.error("Too Few arguments!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    }

// 检查是否TYPE类型 
#define CHECK_ARG_TYPE(ARG,TYPE) \
    if(ARG.getKind() != TYPE) \
    { \
        logger.error("Wrong type of argument!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    }

// 截获引擎异常
#define CATCH(LOG) \
    catch(const Exception& e) \
    { \
        logger.error(LOG##"\n"); PrintException(e); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    } \
    catch(const std::exception &e) \
    { \
        logger.error("C++ Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    } \
    catch(const seh_exception &e) \
    { \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    } \
    catch(...) \
    { \
        logger.error("Uncaught Exception Detected!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    }

// 至少COUNT个参数_Constructor
#define CHECK_ARGS_COUNT_C(ARGS,COUNT) \
    if(ARGS.size()<COUNT) \
    { \
        logger.error("Too Few arguments!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    }

// 检查是否TYPE类型_Constructor
#define CHECK_ARG_TYPE_C(ARG,TYPE) \
    if(ARG.getKind() != TYPE) \
    { \
        logger.error("Wrong type of argument!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    }

// 截获引擎异常_Constructor
#define CATCH_C(LOG) \
    catch(const Exception& e) \
    { \
        logger.error(LOG##"\n"); PrintException(e); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    } \
    catch(const std::exception &e) \
    { \
        logger.error("C++ Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    } \
    catch(const seh_exception &e) \
    { \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    } \
    catch(...) \
    { \
        logger.error("Uncaught Exception Detected!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return nullptr; \
    }


// 判断是否为浮点数
bool CheckIsFloat(const Local<Value>& num);

// 序列化
template <typename T>
void PrintValue(T &out, Local<Value> v);

template void PrintValue(std::ostream & out, Local<Value> v);
template void PrintValue(Logger::OutputStream & out, Local<Value> v);

std::string ValueToString(Local<Value> v);

// Json 序列化 反序列化
Local<Value> JsonToValue(std::string jsonStr);
Local<Value> JsonToValue(fifo_json j);
std::string ValueToJson(Local<Value> v,int formatIndent = -1);