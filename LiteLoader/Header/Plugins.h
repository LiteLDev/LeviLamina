#pragma once
#include <string>
#include <minwindef.h>

struct Plugin {
    //std::string id;
    std::string  name;
    std::string  introduction;
    std::string  version;

    std::string  git;
    std::string  license;
    std::string  website;

    std::wstring filePath;
    HMODULE      handler;
};

bool registerPlugin(std::string name, std::string introduction, std::string version,
                    std::string git = "", std::string license = "", std::string website = "");
void completePluginInfo(std::string pluginName, std::wstring filePath, HMODULE handler);
