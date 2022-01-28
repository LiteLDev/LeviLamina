#pragma once
#include <string>

class ModuleMessage;
bool ProcessHotManageCmd(const std::string& cmd);
void HotManageMessageCallback(ModuleMessage& msg);