#include "pch.h"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <httplib.h>

extern Logger<stdio_commit> LOG;

void checkUpdate() {
    std::thread t([] {
        httplib::Client cli("https://update.sakuralo.top");
        cli.set_connection_timeout(0, 300000);
        auto res = cli.Get("/version.json");     
        rapidjson::Document json;
        if (res) {
            json.Parse(res->body.c_str());
            if (json.HasParseError()) {
                std::cout << "[Liteloader] Failed to get updates(1)\n";
                return;
            }
            auto arr                  = json.GetArray();
            std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
            int latestVersionNum      = arr[arr.Size() - 1]["versionNum"].GetInt();
            if (latestVersionNum > LITELOADER_VERSION_NUMBER) {
                std::string content = arr[arr.Size() - 1]["content"].GetString();
                LOG("[Liteloader] Found a new version: ", LatestRelease, " ", content);
            } else if (latestVersionNum < LITELOADER_VERSION_NUMBER) {
                LOG("[Liteloader] Using preview version: ", LITELOADER_VERSION);
            }
        } else {
            std::cout << "[Liteloader] Failed to get updates(0)\n";
        }
    });
    t.detach();
}