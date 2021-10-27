#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <Utils/Logger.h>
#include <httplib/httplib.h>
#include <rapidjson/document.h>
#include <Version.h>

void checkUpdate() {
    std::thread t([] {
        httplib::Client cli("https://liteldev.github.io");
        cli.set_connection_timeout(0, 300000);
        auto res = cli.Get("/update/version.json");     
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
                Logger::log("[LiteLoader] Found a new version: ", LatestRelease, " ", content);
            } else if (latestVersionNum < LITELOADER_VERSION_NUMBER) {
                Logger::log("[LiteLoader] Using preview version: ", LITELOADER_VERSION);
            }
        } else {
            std::cout << "[Liteloader] Failed to get updates(0)\n";
        }
    });
    t.detach();
}