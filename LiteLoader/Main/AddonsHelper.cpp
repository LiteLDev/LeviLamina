#include "AddonsHelper.h"
#include <Main/Config.h>
#include <EventAPI.h>
#include <RegCommandAPI.h>
#include <LLAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/PropertiesSettings.hpp>
#include <MC/Level.hpp>
#include <GlobalServiceAPI.h>
#include <Utils/WinHelper.h>
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include <Main/Config.h>
#include <LoggerAPI.h>
#include <I18nAPI.h>
#include <filesystem>
#include <set>
#include <vector>
using namespace std;
using namespace RegisterCommandHelper;

Logger addonLogger("AddonHelper");
std::vector<Addon> addons;

//Helper
std::string GetAddonJsonFile(Addon::Type type)
{
    string addonListFile = Level::getCurrentLevelPath();
    switch (type)
    {
    case Addon::Type::BehaviorPack:
        return addonListFile + "/world_behavior_packs.json";
        break;
    case Addon::Type::ResourcePack:
        return addonListFile + "/world_resource_packs.json";
        break;
    default:
        break;
    }
    return "";
}



std::optional<Addon> parseAddon(std::filesystem::path addonPath)
{
    try
    {
        auto manifestFile = ReadAllFile(addonPath.u8string());
        if (!manifestFile || manifestFile->empty())
            return std::nullopt;

        auto manifest = nlohmann::json::parse(*manifestFile, nullptr, true, true);
        auto header = manifest["header"];
        auto uuid = header["uuid"];
        Addon addon;
        addon.name = header["name"];
        addon.description = header["description"];
        addon.uuid = uuid;
        addon.directory = addonPath.u8string();

        auto ver = header["version"];
        addon.version = LL::Version(ver[0], ver[1], ver[2]);

        string type = manifest["modules"][0]["type"];
        if (type == "resources")
            addon.type = Addon::Type::ResourcePack;
        else if (type == "data")
            addon.type = Addon::Type::BehaviorPack;
        else
            return std::nullopt;

        return addon;
    }
    catch (const seh_exception& e)
    {
        addonLogger.error("Uncaught SEH Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + addonPath.u8string());
        addonLogger.error("Error: Code[{}] {}", e.code(), TextEncoding::toUTF8(e.what()));
    }
    catch (const std::exception& e)
    {
        addonLogger.error("Uncaught C++ Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + addonPath.u8string());
        addonLogger.error("Error: Code[{}] {}", -1, TextEncoding::toUTF8(e.what()));
    }
    catch (...)
    {
        addonLogger.error("Uncaught Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + addonPath.u8string());
    }
    return std::nullopt;
}

//Helper
bool InstallAddonToLevel(std::string addonDir, std::string addonName)
{
    Addon::Type addonType;
    string subPath = "";
    string uuid;
    nlohmann::json version;

    // parse addon data
    try
    {
        auto manifest = nlohmann::json::parse(*ReadAllFile(addonDir + "/manifest.json"), nullptr, true, true);
        string type = manifest["modules"][0]["type"];
        if (type == "resources")
        {
            addonType = Addon::Type::ResourcePack;
            subPath = "/resource_packs";
        }
        else if (type == "data")
        {
            addonType = Addon::Type::BehaviorPack;
            subPath = "/behavior_packs";
        }
        else
            throw "Unknown type of addon pack!";

        uuid = manifest["header"]["uuid"];
        version = manifest["header"]["version"];
    }
    catch (const std::exception &e)
    {
        addonLogger.error("Fail to parse the manifest data of addon {}!", addonName);
        addonLogger.error("Error: {}", TextEncoding::toUTF8(e.what()));
        addonLogger.error("* Install progress aborted!");
        return false;
    }

    // copy files
    string levelPath = Level::getCurrentLevelPath();
    string toPath = levelPath + subPath + "/" + addonName;

    // Avoid duplicate names or update addon if same uuid
    while (filesystem::exists(str2wstr(toPath)))
    {
        auto addon = parseAddon(str2wstr(toPath));
        if (addon.has_value() && addon->uuid != uuid)
        {
            toPath += "_";
        }
        else
        {
            std::error_code ec;
            filesystem::remove_all(str2wstr(toPath), ec);
            break;
        }
    }
    std::error_code ec;
    filesystem::create_directories(str2wstr(toPath), ec);
    filesystem::copy(str2wstr(addonDir), str2wstr(toPath), filesystem::copy_options::recursive, ec);

    // add addon to list file
    string addonListFile = GetAddonJsonFile(addonType);
    if (!filesystem::exists(str2wstr(addonListFile)))
    {
        ofstream fout(addonListFile);
        fout << "[]" << flush;
    }

    try
    {
        auto newAddonData = nlohmann::json::object();
        newAddonData["pack_id"] = uuid;
        newAddonData["version"] = version;

        bool exists = false;
        auto addonList = nlohmann::json::parse(*ReadAllFile(addonListFile), nullptr, false, true);
        if (!addonList.is_array()) {
            auto backupPath = filesystem::path(str2wstr(addonListFile)).stem().u8string() + "_error.json";
            addonLogger.error("Invalid Addon List File {}, backup to {} and reset to default", addonListFile, backupPath);
            std::error_code ec;
            std::filesystem::rename(str2wstr(addonListFile), filesystem::path(addonListFile).remove_filename().append(str2wstr(backupPath)), ec);
            addonList = "[]"_json;
        }
        for (auto& addonData : addonList)
        {
            if (addonData["pack_id"] == uuid) {
                addonData["version"] = version;
                exists = true;
                break;
            }
        }
        if (!exists)
            addonList.push_back(newAddonData);
        bool res = WriteAllFile(addonListFile, addonList.dump(4));
        if (!res)
            throw "Fail to write data back to addon list file!";

        return true;
    }
    catch (const std::exception& e)
    {
        addonLogger.error("Fail to insert the addon {} into {}!", addonName, addonListFile);
        addonLogger.error("Error: {}", TextEncoding::toUTF8(e.what()));
        addonLogger.error("* Install progress aborted!");
        return false;
    }
}

void FindManifest(vector<string> &result, const string& path)
{
    filesystem::directory_iterator ent(str2wstr(path));

    bool foundManifest = false;
    for (auto& file : ent)
    {
        auto path = file.path();
        if (path.filename() == "manifest.json")
        {
            result.push_back(filesystem::canonical(path).parent_path().u8string());
            foundManifest = true;
            break;
        }
    }
    if (!foundManifest)
    {
        //No manifest file
        filesystem::directory_iterator ent2(str2wstr(path));
        for (auto& file : ent2)
            if (file.is_directory())
                FindManifest(result, file.path().u8string());
    }
    return;
}

bool AddonsManager::install(std::string packPath)
{
    try
    {
        if (!filesystem::exists(str2wstr(packPath)))
        {
            addonLogger.error("Addon file no found!");
            return false;
        }
        if (VALID_ADDON_FILE_EXTENSION.find(filesystem::path(str2wstr(packPath)).extension().u8string()) == VALID_ADDON_FILE_EXTENSION.end())
        {
            addonLogger.error("Unsupported type of file found!");
            return false;
        }

        string name = filesystem::path(str2wstr(packPath)).filename().u8string();
        addonLogger.warn("Installing addon <{}>...", name);

        std::error_code ec;
        if (EndsWith(packPath, ".mcpack"))
        {
            string newPath = packPath;
            ReplaceStr(newPath, ".mcpack", ".zip");
            filesystem::rename(str2wstr(packPath), str2wstr(newPath), ec);
            packPath = newPath;
        }
        if (EndsWith(packPath, ".mcaddon"))
        {
            string newPath = packPath;
            ReplaceStr(newPath, ".mcaddon", ".zip");
            filesystem::rename(str2wstr(packPath), str2wstr(newPath), ec);
            packPath = newPath;
        }

        filesystem::remove_all(ADDON_INSTALL_TEMP_DIR, ec);
        filesystem::create_directories(ADDON_INSTALL_TEMP_DIR, ec);

        auto res = NewProcessSync(fmt::format("{} x \"{}\" -o{} -aoa", ZIP_PROGRAM_PATH, packPath, ADDON_INSTALL_TEMP_DIR), ADDON_INSTALL_MAX_WAIT);
        if (res.first != 0)
        {
            addonLogger.error("Fail to uncompress addon {}!", name);
            addonLogger.error("Exit Code: {}", res.first);
            addonLogger.error("Program Output:\n{}", res.second);
            addonLogger.error("* Install progress aborted!");
            filesystem::remove_all(ADDON_INSTALL_TEMP_DIR, ec);
            return false;
        }

        vector<string> paths;
        FindManifest(paths, ADDON_INSTALL_TEMP_DIR);

        for (auto& dir : paths)
        {
            string addonName = filesystem::path(str2wstr(dir)).filename().u8string();
            if (addonName.empty() || addonName == "Temp")
                addonName = filesystem::path(str2wstr(packPath)).stem().u8string();
            if (!InstallAddonToLevel(dir, addonName)) {
                addonLogger.error("Error in Install Addon {} To Level", addonName);
            }
        }

        filesystem::remove_all(ADDON_INSTALL_TEMP_DIR, ec);
        filesystem::remove_all(str2wstr(packPath), ec);
        return true;
    }
    catch (const seh_exception& e)
    {
        addonLogger.error("Uncaught SEH Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
        addonLogger.error("Error: Code[{}] {}", e.code(), TextEncoding::toUTF8(e.what()));
    }
    catch (const std::exception& e)
    {
        addonLogger.error("Uncaught C++ Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
        addonLogger.error("Error: Code[{}] {}", -1, TextEncoding::toUTF8(e.what()));
    }
    catch (...)
    {
        addonLogger.error("Uncaught Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
    }
    return false;
}

bool AddonsManager::uninstall(std::string nameOrUuid)
{
    try
    {
        auto addon = getAddon(nameOrUuid);
        if (!addon)
        {
            addonLogger.error("Addon no found!");
            return false;
        }

        auto jsonFile = GetAddonJsonFile(addon->type);
        if (!filesystem::exists(str2wstr(jsonFile)))
        {
            addonLogger.error("Addon config no found!");
            return false;
        }

        auto addonJsonContent = ReadAllFile(jsonFile);
        if(!addonJsonContent || addonJsonContent->empty())
        {
            addonLogger.error("Addon config no found!");
            return false;
        }

        auto addonJson = fifo_json::parse(*addonJsonContent, nullptr, true, true);
        int id = 0;
        for (auto item : addonJson)
        {
            if (item["pack_id"] == addon->uuid)
            {
                addonJson.erase(id);
                bool res = WriteAllFile(jsonFile, addonJson.dump(4));
                if(!res)
                {
                    addonLogger.error("Fail to remove addon <{}> from config file!", addon->name);
                    return false;
                }
                std::error_code ec;
                filesystem::remove_all(str2wstr(addon->directory), ec);
                for (auto i = addons.begin(); i != addons.end(); ++i)
                    if (i->uuid == addon->uuid)
                    {
                        addons.erase(i);
                        break;
                    }
                addonLogger.info("Addon <{}> uninstalled.");
                return true;
            }
            ++id;
        }
        addonLogger.error("Addon <{}> no found!", addon->name);
    }
    catch(...)
    { }
    return false;
}

std::vector<Addon*> AddonsManager::getAllAddons()
{
    std::vector<Addon*> res;
    for (auto& addon : addons)
        res.push_back(&addon);
    return res;
}

Addon* AddonsManager::getAddon(std::string nameOrUuid)
{
    for (auto& addon : addons)
        if (addon.name == nameOrUuid || addon.uuid == nameOrUuid)
            return &addon;
    return nullptr;
}

void ListAllAddons(CommandOutput& output)
{
    if (addons.empty())
    {
        output.success("No addon is installed.");
        return;
    }

    output.success("Addons: " + to_string(addons.size()) + " addon(s) installed:");
    for (auto& addon : addons)
    {
        string addonName = addon.name;
        if (addonName.find("§") == string::npos)
            addonName = "§b" + addonName;
        string desc = addon.description;
        if (desc.find("§") == string::npos)
            desc = "§7" + desc;

        std::string addonType = (addon.type == Addon::Type::ResourcePack ? "ResourcePack" : "BehaviorPack");
        output.success(fmt::format("- {} §a[v{}] §8({})", addonName, addon.version.toString(), addonType));
        output.success(fmt::format("  {}", desc));
    }
}

class AddonsCommand : public Command {
    enum class Operation
    {
        List, Install, Uninstall
    };

    Operation operation;
    std::string target;

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        switch (operation)
        {
        case Operation::List:
            ListAllAddons(output);
            break;
        case Operation::Install:
            if (AddonsManager::install(target))
                output.success();
            break;
        case Operation::Uninstall:
            if (AddonsManager::uninstall(target))
                output.success();
            break;
        default:
            break;
        }
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand("addons", "LiteLoaderBDS Addons Helper",
            CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });

        // addons list
        registry->addEnum<Operation>("Operation_Addons_List", {
            {"list", Operation::List}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_List").addOptions((CommandParameterOption)1)
        );

        // addons install
        registry->addEnum<Operation>("Operation_Addons_Install", {
            {"install", Operation::Install}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_Install").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::NORMAL>(&AddonsCommand::target, "Target")
        );

        // addons uninstall
        vector<string> addonsList;
        for (auto& addon : addons)
            addonsList.push_back(addon.name);
        registry->addSoftEnum("AddonName", addonsList);

        registry->addEnum<Operation>("Operation_Addons_Uninstall", {
            {"uninstall", Operation::Uninstall}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_Uninstall").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::SOFT_ENUM>(&AddonsCommand::target, "AddonName", "AddonName")
        );
    }
};

void FindAddons(string jsonPath, string packsDir)
{
    try
    {
        if (!filesystem::exists(str2wstr(jsonPath)) || !filesystem::exists(str2wstr(packsDir)))
            return;

        auto content = ReadAllFile(jsonPath);
        if (!content)
        {
            addonLogger.warn("Fail to load {}! Fail to enumerate addons.", jsonPath);
        }
        if (content->empty())
            return;

        auto addonList = nlohmann::json::parse(*content, nullptr, true, true);
        if (addonList.empty())
            return;

        std::set<string> validPackIDs;
        for (auto addon : addonList)
        {
            auto pkid = addon.at("pack_id");
            if (pkid && pkid.is_string())
                validPackIDs.insert(pkid.get<std::string>());
        }

        filesystem::directory_iterator ent(str2wstr(packsDir));
        for (auto& dir : ent)
        {
            if (!dir.is_directory())
                continue;
            auto addon = parseAddon(dir);
            if (!addon)
                continue;
            if (validPackIDs.find(addon->uuid) != validPackIDs.end())
            {
                addons.emplace_back(std::move(*addon));
            }
        }
    }
    catch (...)
    {
        return;
    }
}

void BuildAddonsList()
{
    string levelPath = Level::getCurrentLevelPath();

    FindAddons(levelPath + "/world_behavior_packs.json", levelPath + "/behavior_packs");
    FindAddons(levelPath + "/world_resource_packs.json", levelPath + "/resource_packs");
}


void AutoInstallAddons()
{
    std::error_code ec;
    if (!filesystem::exists(str2wstr(LL::globalConfig.addonsInstallPath)))
    {
        filesystem::create_directories(str2wstr(LL::globalConfig.addonsInstallPath), ec);
        addonLogger.warn("Directory created. You can move compressed Addon files to {} to get installed at next launch.",
            LL::globalConfig.addonsInstallPath);
        return;
    }
    std::vector<string> toInstallList;

    filesystem::directory_iterator ent(str2wstr(LL::globalConfig.addonsInstallPath));
    for (auto& file : ent)
    {
        if (!file.is_regular_file())
            continue;

        if (VALID_ADDON_FILE_EXTENSION.count(file.path().extension().u8string()) > 0)
        {
            toInstallList.push_back(file.path().lexically_normal().u8string());
        }
    }

    if (toInstallList.empty())
        return;

    addonLogger.warn("{} new addon(s) found to install. Working...", toInstallList.size());

    int cnt = 0;
    for (auto& path : toInstallList)
        if (!AddonsManager::install(path))
        {
            //filesystem::remove_all(ADDON_INSTALL_TEMP_DIR, ec);
            break;
        }
        else
        {
            ++cnt;
            addonLogger.warn("Addon {} has beed installed.", path);
        }

    if (cnt == 0)
    {
        addonLogger.error("No addon was installed.");
        return;
    }
    else
    {
        addonLogger.warn("{} addon(s) was installed.", cnt);
        return;
    }
}

void InitAddonsHelper()
{
    AutoInstallAddons();
    BuildAddonsList();

    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        AddonsCommand::setup(ev.mCommandRegistry);
        return true;
    });
}