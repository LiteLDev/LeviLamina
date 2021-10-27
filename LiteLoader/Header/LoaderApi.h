#pragma once
#include <string>
#ifdef LITELOADER_EXPORTS
#    define LIAPI __declspec(dllexport)
#else
#    define LIAPI __declspec(dllimport)
#endif
#define LITELOADER_VERSION "2.0.0"
#define LITELOADER_VERSION_NUMBER 20
typedef unsigned char uchar;

struct Plugin; 

namespace loaderapi {
// @return 加载器版本
LIAPI std::string getLoaderVersion();
// @return 加载器版本数字
LIAPI unsigned short getLoaderVersionNum();
// @return 是否为调试模式
LIAPI bool           isDebugMode();
// @return 游戏服务器版本
LIAPI std::string getServerVersion();

// @param name 插件名
// @param introduction 插件介绍
// @param version 插件版本
// @param git *git仓库(链接)
// @param license *插件许可证
// @param website *网站
// @return 是否成功(失败则为插件名重复)
LIAPI bool registerPlugin(std::string name, std::string introduction, std::string version,
                          std::string git = "", std::string license = "", std::string website = "");
// @param name 插件名
// @return 若未找到则返回0
LIAPI Plugin* tryGetPluginByName(std::string name);
// @param name 插件名
// @return 是否存在插件
LIAPI bool hasPlugin(std::string name);

};  // namespace loaderapi