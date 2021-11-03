#include <rapidjson/document.h>
#include "Config.h"
#include <LoggerAPI.h>
#include <fstream>

#define LITELOADER_CONFIG_FILE "plugins/LiteLoader/liteloader.json"

bool LoaderDebugMode = false;

void LoadLLConfig() {
    std::ifstream fs;
    fs.open(LITELOADER_CONFIG_FILE, std::ios::in);
    if (!fs)
    {
        Logger::Warn("{} not found, creating configuration file", LITELOADER_CONFIG_FILE);
        std::ofstream of(LITELOADER_CONFIG_FILE);
        if (of) {
            of << "{\n  \"DebugMode\": false\n}";
        }
        else {
            Logger::Error("Configuration file creation failed");
        }
    }
    else {
        std::string json;
        char buf[1024];
        while (fs.getline(buf, 1024)) {
            json.append(buf);
        }
        rapidjson::Document document;
        document.Parse(json.c_str());
        LoaderDebugMode = document["DebugMode"].GetBool();
    }
}