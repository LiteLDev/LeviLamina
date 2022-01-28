#pragma once
#include <string>
#include <vector>

std::string ReadFileFrom(const std::string& filePath);
ScriptEngine* NewEngine();

class ModuleMessage;
void RemoteLoadCallback(ModuleMessage& msg);
void RemoteLoadReturnCallback(ModuleMessage& msg);

//加载插件
bool LxlLoadPlugin(const std::string& filePath, bool isHotLoad = false);
//卸载插件
std::string LxlUnloadPlugin(const std::string& name);
//重载插件
bool LxlReloadPlugin(const std::string& name);
//重载所有插件
bool LxlReloadAllPlugins();

//获取当前语言的所有插件
std::vector<std::string> LxlListLocalAllPlugins();
//获取整个LXL所有的插件
std::vector<std::string> LxlListGlocalAllPlugins();