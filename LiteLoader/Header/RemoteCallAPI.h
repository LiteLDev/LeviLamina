#pragma once
#include "Global.h"
#include "Utils/WinHelper.h"
#include "third-party/Nlohmann/json.hpp"

// Mainly designed for scripting engines
// Please call it in MC_SERVER thread or in ScheduleAPI
// make sure the callback parameter type can be converted to json
namespace RemoteCall
{
// Use string as value type because it is easy to convert between script types and native types
using ValueType = std::string; // Json string
using CallbackFn = std::function<ValueType(std::vector<ValueType>)>;

template <typename T>
std::remove_reference_t<T> extra(ValueType const& val)
{
    return nlohmann::json::parse(val).get<std::remove_reference_t<T>>();
}

template <typename T>
ValueType pack(T const& val)
{
    return nlohmann::json(val).dump();
}

struct ExportedFuncData
{
    HMODULE handler;
    CallbackFn callback;
};

LIAPI bool exportFunc(std::string const& nameSpace, std::string const& funcName, CallbackFn&& callback, HMODULE handler = GetCurrentModule());
LIAPI CallbackFn* importFunc(std::string const& nameSpace, std::string const& funcName);

template <typename RTN, typename... Args>
inline bool _importAs(std::string const& nameSpace, std::string const& funcName, std::function<RTN(Args...)>& func)
{
    auto rawFunc = importFunc(nameSpace, funcName);
    if (!rawFunc)
        return false;
    func = [rawFunc](Args... args) -> RTN {
        auto res = (*rawFunc)(std::vector<std::string>{pack(args)...});
        return extra<RTN>(res);
    };
    return true;
}

inline std::string const& _expandArg(std::vector<std::string> const& args, int& index)
{
    return args[--index];
}

template <typename RTN, typename... Args>
inline bool _exportAs(std::string const& nameSpace, std::string const& funcName, std::function<RTN(Args...)>&& callback)
{
    CallbackFn cb = [callback = std::move(callback)](std::vector<std::string> args) -> std::string {
        if (sizeof...(Args) != args.size())
            return "";
        int index = sizeof...(Args);
        auto res = callback(extra<Args>(_expandArg(args, index))...);
        return pack(res);
    };
    return exportFunc(nameSpace, funcName, std::move(cb), GetCurrentModule());
}

LIAPI bool removeFunc(std::string const& nameSpace, std::string const& funcName);
LIAPI int removeNameSpace(std::string const& nameSpace);
LIAPI int removeFuncs(std::vector<std::pair<std::string, std::string>> funcs);

template <typename CB>
inline CB importAs(std::string const& nameSpace, std::string const& funcName)
{
    CB callback;
    bool res = _importAs(nameSpace, funcName, callback);
    return callback;
}

template <typename CB>
inline bool exportAs(std::string const& nameSpace, std::string const& funcName, CB&& callback)
{
    return _exportAs(nameSpace, funcName, std::function(std::move(callback)));
}

}; // namespace RemoteCall
