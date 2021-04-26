#include "pch.h"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <httplib.h>

void updateCheck() {
    std::thread t([] {
        httplib::Client cli("https://update.sakuralo.top");
        auto res = cli.Get("/version.json");
        cli.set_connection_timeout(0, 300000);
        rapidjson::Document json;
        if (res) {
            json.Parse(res->body.c_str());
            if (json.HasParseError()) {
                std::cout << "[Liteloader] Failed to get updates(1)\n";
                return;
            }
            auto arr = json.GetArray();
            std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
            int latestVersionNum = arr[arr.Size() - 1]["versionNum"].GetInt();
            if (latestVersionNum > LiteLoaderVersionNum) {
                std::cout << "[Liteloader] Found a new version: " << LatestRelease << "\n";
            }
            if (latestVersionNum < LiteLoaderVersionNum) {
                std::cout << "[Liteloader] Using preview version: " << LiteLoaderVersion << "\n";
            }
        }
        else
        {
            std::cout << "[Liteloader] Failed to get updates(0)\n";
        }
        });
    t.detach();
}