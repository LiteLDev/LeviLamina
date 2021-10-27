#include <rapidjson/document.h>
#include <LoaderApi.h>
#include <fstream>
#include "pch.h"

extern Logger<stdio_commit> LOG;
bool LoaderDebugMode = false;

LIAPI bool loaderapi::isDebugMode() {
    return LoaderDebugMode;
}

void loadConfig() {
    std::string   config_file = "liteloader.json";
    std::ifstream fs;
    fs.open(config_file, std::ios::in);
    if (!fs) {
        LOG(config_file, " not found, creating configuration file");
        std::ofstream of(config_file);
        if (of) {
            of << "{\n  \"DebugMode\": false\n}";
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
        LoaderDebugMode = document["DebugMode"].GetBool();
    }
}