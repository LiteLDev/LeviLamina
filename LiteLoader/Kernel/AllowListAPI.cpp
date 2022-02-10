#include <filesystem>
#include <LoggerAPI.h>
#include <GlobalServiceAPI.h>
#include <AllowListAPI.h>
#include <Utils/FileHelper.h>
#include <MC/AllowListFile.hpp>

AllowListManager::AllowListManager()
{
    allowList = nlohmann::json::array();
    if (std::filesystem::exists("allowlist.json"))
    {
        auto content = ReadAllFile("allowlist.json");
        if (content.has_value())
        {
            try
            {
                allowList = nlohmann::json::parse(content.value());
            }
            catch (std::exception e)
            {
                Logger("AllowList").error("Failed to parse allowlist.json: {}", e.what());
            }
        }
        else
        {
            Logger("AllowList").error("Failed to read allowlist.json");
        }
        return;
    }
    Logger("AllowList").warn("allowlist.json is not found");
}

void AllowListManager::save()
{
    WriteAllFile("allowlist.json", allowList.dump());
}

size_t AllowListManager::size()
{
    return allowList.size();
}

bool AllowListManager::has(const std::string& name, const xuid_t& xuid)
{
    size_t _;
    return has(name, xuid, _);
}

bool AllowListManager::has(const std::string& name, const xuid_t& xuid, size_t& index)
{
    for (int i = 0; i < allowList.size(); i++)
    {
        auto& p = allowList[i];
        if (p["name"] == name)
        {
            if (!xuid.empty() && p.count("xuid") && p.at("xuid") == xuid)
            {
                index = i;
                return true;
            }
            else if (xuid.empty())
            {
                index = i;
                return true;
            }
        }
    }
    return false;
}

AllowListManager& AllowListManager::add(const std::string& name, const xuid_t& xuid, bool ignore)
{
    try
    {
        nlohmann::json j{{"name", name}, {"ignoresPlayerLimit", ignore}};
        if (!xuid.empty())
        {
            j.emplace("xuid", xuid);
        }
        allowList.push_back(j);
        save();
    }
    catch (std::exception e)
    {
        Logger("AllowList").error("Failed to add player to AllowList: {}", e.what());
    }
    return *this;
}

AllowListManager& AllowListManager::remove(const std::string& name, const xuid_t& xuid)
{
    try
    {
        size_t i = -1;
        if (has(name, xuid, i))
        {
            allowList.erase(i);
            save();
        }
        else
        {
            Logger("AllowList").error("Failed to remove player from AllowList: Target player is not found");
        }
    }
    catch (std::exception e)
    {
        Logger("AllowList").error("Failed to remove player from AllowList: {}", e.what());
    }
    return *this;
}

void AllowListManager::reload()
{
    if (Global<AllowListFile>)
    {
        Global<AllowListFile>->reload();
    }
}