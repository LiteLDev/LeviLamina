#include <rapidjson/document.h>
#include <LoaderApi.h>
#include <fstream>
#include "pch.h"

extern Logger<stdio_commit> LOG;
bool LoaderDebugMode = false;
bool FixDisconnectBug = true;

LIAPI bool loaderapi::isDebugMode() {
    return LoaderDebugMode;
}

bool isFixDisconnectBug() {
    return FixDisconnectBug;
}

void loadConfig() {
    std::string   config_file = "liteloader.json";
    std::ifstream fs;
    fs.open(config_file, std::ios::in);
    if (!fs) {
        LOG(config_file, " not found, creating configuration file");
        std::ofstream of(config_file);
        if (of) {
            of << "{\n  \"DebugMode\": false,\n   \"FixDisconnectBug\": true\n}";
        } else {
            LOG("Configuration file creation failed");
        }
    } else {
        std::string json;
        char        buf[1024];
        while (fs.getline(buf, 1024)) {
            json.append(buf);
        }
        rapidjson::Document document;
        document.Parse(json.c_str());
        if (!document["DebugMode"].IsNull()) {
            LoaderDebugMode = document["DebugMode"].GetBool();
        } else {
            LOG("Could not found DebugMoade in config");
        }     
        if (!document["FixDisconnectBug"].IsNull()) {
            FixDisconnectBug = document["FixDisconnectBug"].GetBool();
        } else {
            LOG("Could not found FixDisconnectBug in config");
        }
    }
}