#pragma once
#include <string>
#include <unordered_map>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif // ! WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "Global.h"
#include "Utils/WinHelper.h"
#include "Utils/PluginOwnData.h"
#include "LoggerAPI.h"

// LL types
namespace LL {

    struct Version
    {
        enum Status { Dev, Beta, Release };

        int major;
        int minor;
        int revision;
        Status status;

        LIAPI explicit Version(int major = 0, int minor = 0, int revision = 0, Status status = Status::Release);

        LIAPI bool operator<(Version b);
        LIAPI bool operator==(Version b);

        LIAPI std::string toString(bool needStatus = false);
        LIAPI static Version parse(const std::string& str);
    };

    struct Plugin
    {
        //std::string id;
        std::string name;
        std::string introduction;
        Version version;
        std::map<std::string, std::string> otherInformation;

        std::string filePath;
        HMODULE handler;

        // Call a Function by Symbol String
        template<typename ReturnType = void, typename... Args>
        inline ReturnType callFunction(const char* functionName, Args... args) {
            void* address = GetProcAddress(handler, functionName);
            if (!address)
                return ReturnType();
            return reinterpret_cast<ReturnType(*)(Args...)>(address)(std::forward<Args>(args)...);
        }
    };

}
inline bool operator<=(LL::Version a, LL::Version b) { return a < b || a == b; }
inline bool operator>(LL::Version a, LL::Version b) { return b < a; }
inline bool operator>=(LL::Version a, LL::Version b) { return b < a || b == a; }

//helper
LIAPI bool RegisterPlugin(HMODULE hPlugin, std::string name, std::string introduction, LL::Version version,
                          std::map<std::string, std::string> others);

// Loader APIs
namespace LL
{
    // @return 加载器版本
    LIAPI std::string getLoaderVersionString();
    // @return 加载器版本数字
    LIAPI Version getLoaderVersion();
    // @return 是否为调试模式
    LIAPI bool isDebugMode();

    LIAPI std::string getDataPath(const std::string& pluginName);

    // @param name 插件名
    // @param introduction 插件介绍
    // @param version 插件版本
    // @param git *git仓库(链接)
    // @param license *插件许可证
    // @param website *网站
    // @return 是否成功(失败则为插件名重复)
    // @note 此函数的实现必须放在头文件中
    inline bool registerPlugin(std::string name, std::string introduction, LL::Version version,
                              std::string git = "", std::string license = "", std::string website = "") {
        std::map<std::string, std::string> others;
        if (!git.empty()) others.emplace("Git", git);
        if (!license.empty()) others.emplace("License", license);
        if (!website.empty()) others.emplace("Website", website);
        return ::RegisterPlugin(GetCurrentModule(), name, introduction, version, others);
    } 
    // @param name 插件名
    // @param introduction 插件介绍
    // @param version 插件版本
    // @param others 其他要附加的信息, k-v
    // @return 是否成功(失败则为插件名重复)
    // @example registerPlugin("Test", "Only a test", Version{0, 0, 1, Version::Dev}, {{"Note","This is Note"}});
    // @note 此函数的实现必须放在头文件中
    inline bool registerPlugin(std::string name, std::string introduction, LL::Version version,
                              std::map<std::string, std::string> others) {
        return ::RegisterPlugin(GetCurrentModule(), name, introduction, version, others);
    }

    // @param name 插件名
    // @return 若未找到则返回0
    LIAPI LL::Plugin* getPlugin(std::string name);

    LIAPI LL::Plugin* getPlugin(HMODULE handler);

    // @param name 插件名
    // @return 是否存在插件
    LIAPI bool hasPlugin(std::string name);

    LIAPI std::unordered_map<std::string, LL::Plugin> getAllPlugins();

};

