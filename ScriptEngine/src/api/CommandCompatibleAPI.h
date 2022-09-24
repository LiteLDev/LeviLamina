#pragma once
#include "api/APIHelp.h"
#include <string>
#include <vector>

//////////////////// LLSE Event Callbacks ////////////////////

class Player;
// helper
std::vector<std::string> SplitCmdLine(const std::string& paras);

// 命令回调查询
std::string LLSEFindCmdReg(bool isPlayerCmd, const std::string& cmd, std::vector<std::string>& receiveParas, bool* fromOtherEngine);
// 删除指定引擎的所有命令
bool LLSERemoveCmdRegister(script::ScriptEngine* engine);

// 处理命令延迟注册
void ProcessRegCmdQueue();

// 玩家自定义命令注册回调
bool CallPlayerCmdCallback(Player* player, const std::string& cmdPrefix, const std::vector<std::string>& paras);
// 控制台自定义命令注册回调
bool CallServerCmdCallback(const std::string& cmdPrefix, const std::vector<std::string>& paras);