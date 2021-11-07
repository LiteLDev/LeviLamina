#pragma once
#include <Global.h>
#include <string>
#include <unordered_map>
#include <Windows.h>
#include <Utils/WinHelper.h>
#include <LoggerAPI.h>

//helper
LIAPI bool RegisterPlugin(HMODULE hPlugin, std::string name, std::string introduction, std::string version,
    std::string git, std::string license, std::string website);

// LL types
namespace LL {
    struct Plugin {
        //std::string id;
        std::string name;
        std::string introduction;
        std::string version;

        std::string git;
        std::string license;
        std::string website;

        std::string filePath;
        HMODULE handler;
    };

    struct Version
    {
        enum Status { Dev, Beta, Release };

        int major;
        int minor;
        int revision;
        Status status;

        LIAPI Version(int major = 0, int minor = 0, int revision = 0, Status status = Status::Release);

        LIAPI bool operator<(const Version& b);
        LIAPI bool operator==(const Version& b);
        LIAPI bool operator<=(const Version& b);

        LIAPI std::string toString(bool needStatus = false);
        LIAPI static Version parse(const std::string& str);
    };
}

// Loader APIs
namespace LL
{
    // @return 加载器版本
    LIAPI std::string getLoaderVersionString();
    // @return 加载器版本数字
    LIAPI Version getLoaderVersion();
    // @return 是否为调试模式
    LIAPI bool isDebugMode();

    // @param name 插件名
    // @param introduction 插件介绍
    // @param version 插件版本
    // @param git *git仓库(链接)
    // @param license *插件许可证
    // @param website *网站
    // @return 是否成功(失败则为插件名重复)
    LIAPI inline bool registerPlugin(std::string name, std::string introduction, std::string version,
                              std::string git = "", std::string license = "", std::string website = "") {
        //此函数的实现必须放在头文件中
        Logger::setTitle(name);
        return ::RegisterPlugin(GetCurrentModule(), name, introduction, version, git, license, website);
    }

    // @param name 插件名
    // @return 若未找到则返回0
    LIAPI LL::Plugin* getPlugin(std::string name);

    // @param name 插件名
    // @return 是否存在插件
    LIAPI bool hasPlugin(std::string name);

    LIAPI std::unordered_map<std::string, LL::Plugin> getAllPlugins();

};




















//For compatibility
LIAPI std::string GetDataPath(const std::string& myname);
