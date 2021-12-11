#define LL_UPDATE_CHECK "https://lxl-upgrade.amd.rocks/LXL/LXL.json"

#include "CheckNotice.h"
#include <LoggerAPI.h>
#include <Utils/NetworkHelper.h>
#include <Nlohmann/json.hpp>
#include <string>

using namespace std;

Logger noticeLogger("Notice");

void ProcessData(int code, string body) {
    if (code == 200) {
        try {
            nlohmann::json data = nlohmann::json::parse(body);

            //公告信息
            if (data["notice"].is_array()) {
                for (auto &element: data["notice"])
                    noticeLogger.Info << element.get<string>() << Logger::endl;
            }
        } catch (nlohmann::json::exception &e) {
            noticeLogger.debug("Failed to parse the announcement information file. Error code: {}", e.what());
        }
    } else {
        noticeLogger.debug("Failed to download the announcement information file. Error code: {}", code);
    }
}

void CheckNotice() {
    if (!HttpGet(LL_UPDATE_CHECK, ProcessData)) {
        noticeLogger.debug("Failed to download the announcement information file. Error code: {}");
    }
}