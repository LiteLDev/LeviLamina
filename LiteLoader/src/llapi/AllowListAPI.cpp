#include <filesystem>
#include "llapi/LoggerAPI.h"
#include "llapi/GlobalServiceAPI.h"
#include "llapi/AllowListAPI.h"
#include "llapi/utils/FileHelper.h"
#include "llapi/mc/AllowListFile.hpp"
#pragma warning(disable : 26812)

Logger allowListLogger("AllowList");

AllowListManager::AllowListManager() {
    allowList = nlohmann::json::array();
    if (std::filesystem::exists("allowlist.json")) {
        auto content = ReadAllFile("allowlist.json");
        if (content.has_value()) {
            try {
                allowList = nlohmann::json::parse(content.value());
            } catch (std::exception e) {
                allowListLogger.error("Failed to parse allowlist.json: {}", e.what());
            }
        } else {
            allowListLogger.error("Failed to read allowlist.json");
        }
        return;
    }
    allowListLogger.warn("allowlist.json is not found");
}

void AllowListManager::save() {
    WriteAllFile("allowlist.json", allowList.dump());
}

size_t AllowListManager::size() {
    return allowList.size();
}

bool AllowListManager::has(const std::string& name, const xuid_t& xuid) {
    size_t _;
    return has(name, xuid, _);
}

bool AllowListManager::has(const std::string& name, const xuid_t& xuid, size_t& index) {
    for (size_t i = 0, mEnd = allowList.size(); i < mEnd; ++i) {
        auto& p = allowList[i];
        if (p["name"] == name) {
            if (!xuid.empty() && p.count("xuid") && p.at("xuid") == xuid) {
                index = i;
                return true;
            } else if (xuid.empty()) {
                index = i;
                return true;
            }
        }
    }
    return false;
}

AllowListManager& AllowListManager::add(const std::string& name, const xuid_t& xuid, bool ignore) {
    try {
        nlohmann::json j{{"name", name}, {"ignoresPlayerLimit", ignore}};
        if (!xuid.empty()) {
            j.emplace("xuid", xuid);
        }
        allowList.push_back(j);
        save();
        if (ignore)
            allowListLogger.warn("Added player \"{}\" to AllowList with ignoresPlayerLimit on", name);
        else
            allowListLogger.info("Added player \"{}\" to AllowList", name);
    } catch (std::exception e) {
        allowListLogger.error("Failed to add player to AllowList: {}", e.what());
    }
    return *this;
}

AllowListManager& AllowListManager::remove(const std::string& name, const xuid_t& xuid) {
    try {
        size_t i = -1;
        if (has(name, xuid, i)) {
            allowList.erase(i);
            save();
            allowListLogger.info("Removed player \"{}\" from AllowList", name);
        } else {
            allowListLogger.error("Failed to remove player from AllowList: Target player is not found");
        }
    } catch (std::exception e) {
        allowListLogger.error("Failed to remove player from AllowList: {}", e.what());
    }
    return *this;
}

void AllowListManager::reload() {
    if (Global<AllowListFile>) {
        Global<AllowListFile>->reload();
    }
}