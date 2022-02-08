#pragma once
#include <string>

void InitSafeGuardRecord();
void RecordOperation(const std::string& pluginName, const std::string &operation, const std::string& content);