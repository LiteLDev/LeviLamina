#include "pch.h"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <httplib.h>

void updateCheck() {
    std::thread t([] {
        httplib::Client cli("https://gitee.com");
        auto res = cli.Get("/dreamguxiang/LLessentials/raw/master/llupdate.json");
        cli.set_connection_timeout(0, 300000);
        rapidjson::Document json;
        if (res) {
            json.Parse(res->body.c_str());
            if (json.HasParseError()) {
                std::cout << "[BDSLiteloader] Failed to get updates(1)\n";
                return;
            }
            auto arr = json.GetArray();
            std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
            int latestVersionNum = arr[arr.Size() - 1]["versionNum"].GetInt();
            if (latestVersionNum < LiteLoaderVersionNum) {
                std::cout << "[BDSLiteloader] Found a new version: " << LatestRelease << "\n";
            }
            if (latestVersionNum == LiteLoaderVersionNum) {
            }
            if (latestVersionNum > LiteLoaderVersionNum) {
                std::cout << "[BDSLiteloader] Using preview version: " << LatestRelease << "\n";
            }
        }
        else
        {
            std::cout << "[BDSLiteloader] Failed to get updates(0)\n";
        }
        });
    t.detach();
}