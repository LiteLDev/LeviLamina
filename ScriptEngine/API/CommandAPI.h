#pragma once
#include "APIHelp.h"
#include <string>
#include <vector>

//////////////////// LXL Event Callbacks ////////////////////

class Player;
//helper
std::vector<std::string> SplitCmdLine(const std::string& paras);

// 注册LXL内置命令
void RegisterBuiltinCmds();
// 命令回调查询
std::string LxlFindCmdReg(bool isPlayerCmd, const std::string& cmd, std::vector<std::string>& receiveParas, bool* fromOtherEngine);
// 删除指定引擎的所有命令
bool LxlRemoveCmdRegister(script::ScriptEngine* engine);

// 处理命令延迟注册
void ProcessRegCmdQueue();
// 处理调试引擎事件
bool ProcessDebugEngine(const std::string& cmd);
// 处理热管理系统
bool ProcessHotManageCmd(std::string& cmd);

// 玩家自定义命令注册回调
bool CallPlayerCmdCallback(Player* player, const std::string& cmdPrefix, const std::vector<std::string>& paras);
// 控制台自定义命令注册回调
bool CallServerCmdCallback(const std::string& cmdPrefix, const std::vector<std::string>& paras);