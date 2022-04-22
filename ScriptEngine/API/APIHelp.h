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
#include <magic_enum/magic_enum.hpp>

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

// 类型错误输出
#define LOG_WRONG_ARGS \
logger.error("Wrong type of argument!"); \
logger.error(std::string("In API: ") + __FUNCTION__); \
logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName)

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


// 截获引擎异常_Constructor
#define CATCH_WITHOUT_RETURN(LOG) \
    catch(const Exception& e) \
    { \
        logger.error(LOG##"\n"); PrintException(e); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
    } \
    catch(const std::exception &e) \
    { \
        logger.error("C++ Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
    } \
    catch(const seh_exception &e) \
    { \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
    } \
    catch(...) \
    { \
        logger.error("Uncaught Exception Detected!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
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

// Get the enum's ClassDefine<void> object
// Limitation: enum values must be in range of [-128, 128)
template <typename Type>
struct EnumDefineBuilder
{
    template <Type val>
    inline static Local<Value> serialize()
    {
        return Number::newNumber(static_cast<int>(val));
    }
    inline static Local<Value> keys()
    {
        try
        {
            auto arr = Array::newArray();
            for (auto& name : magic_enum::enum_names<Type>())
            {
                arr.add(String::newString(name));
            }
            return arr;
        }
        catch (const std::exception&)
        {
            logger.error("Error in " __FUNCTION__);
        }
        return Local<Value>();
    }
    inline static Local<Value> toObject()
    {
        try
        {
            auto obj = Object::newObject();
            for (auto& [value, name] : magic_enum::enum_entries<Type>())
            {
                obj.set(String::newString(name), Number::newNumber((int)value));
            }
            return obj;
        }
        catch (const std::exception&)
        {
            logger.error("Error in " __FUNCTION__);
        }
        return Local<Value>();
    }
    inline static Local<Value> getName(const Arguments& args)
    {
        try
        {
            if (args.size() < 1)
                return Local<Value>();
            if (args[0].isString())
                return magic_enum::enum_cast<Type>(args[0].toStr()).has_value() ? args[0] : Local<Value>();
            if (args[0].isNumber())
                return String::newString(magic_enum::enum_name(static_cast<Type>(args[0].toInt())));
            return Local<Value>();
        }
        catch (const std::exception&)
        {
            logger.error("Error in " __FUNCTION__);
        }
        return Local<Value>();
    }

    inline static Local<Value> toString()
    {
        try
        {
            return String::newString(typeid(Type).name()+5);
        }
        catch (const std::exception&)
        {
            logger.error("Error in " __FUNCTION__);
        }
        return Local<Value>();
    }
    template <Type val, std::enable_if_t<std::is_enum_v<Type>, char> max = static_cast<char>(*magic_enum::enum_values<Type>().rbegin())>
    inline static void buildBuilder(script::ClassDefineBuilder<void>& builder)
    {
        if constexpr (static_cast<char>(val) > max)
            return;
        if constexpr (!magic_enum::enum_name(val).empty())
        {
            fmt::print("{} = {},\n", magic_enum::enum_name(val), static_cast<int>(val));
            builder.property(magic_enum::enum_name(val).data(), &serialize<val>);
        }
        buildBuilder<static_cast<Type>((static_cast<char>(val) + 1)), max>(builder);
    }
    template <std::enable_if_t<std::is_enum_v<Type>, char> max = static_cast<char>(*magic_enum::enum_values<Type>().rbegin())>
    inline static ClassDefine<void> build(std::string const& enumName)
    {
        script::ClassDefineBuilder<void> builder = defineClass(enumName);
        //fmt::print("枚举 {} 可能取值：\n", enumName);
        //buildBuilder<*magic_enum::enum_values<Type>().begin(), max>(builder);

        for (auto& [val, name] : magic_enum::enum_entries<Type>())
        {
            //fmt::print("{} = {},\n", name, static_cast<int>(val));
            builder.property(std::string(name), [=]() -> Local<Value> {
                try
                {
                    return Number::newNumber(static_cast<int>(val));
                }
                catch (const std::exception&)
                {
                    logger.error("Error in get {}.{}", enumName, name);
                }
                return Local<Value>();
            });
        }

        builder.property("keys", &keys);
        //builder.property("object", &toObject);
        builder.function("getName", &getName);
        //fmt::print("\n");
        return builder.build();
    }
};
