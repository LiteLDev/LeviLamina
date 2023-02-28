#include <filesystem>
#include <set>
#include <utility>
#include <vector>
#include "liteloader/AddonsHelper.h"
#include "liteloader/Config.h"
#include "llapi/event/LegacyEvents.h"
#include "llapi/event/server/RegisterCommandEvent.h"
#include "llapi/RegCommandAPI.h"
#include "llapi/LLAPI.h"
#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/CommandOutput.hpp"
#include "llapi/mc/CommandPosition.hpp"
#include "llapi/mc/CommandRegistry.hpp"
#include "llapi/mc/PropertiesSettings.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/GlobalServiceAPI.h"
#include "llapi/utils/WinHelper.h"
#include "llapi/utils/FileHelper.h"
#include "llapi/utils/fifo_json.h"
#include <Nlohmann/json.hpp>
#include "llapi/LoggerAPI.h"
#include "llapi/I18nAPI.h"
#include "llapi/mc/ColorFormat.hpp"
#include <magic_enum.hpp>
using namespace std;
using namespace RegisterCommandHelper;

Logger             addonLogger("AddonHelper");
std::vector<Addon> addons;

bool AutoInstallAddons(string path);

// Helper
std::string GetAddonJsonFile(Addon::Type type) {
    string addonListFile = Level::getCurrentLevelPath();
    switch (type) {
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

inline bool isManifestFile(std::string const& filename) {
    return filename == "manifest.json" || filename == "pack_manifest.json";
}

#include "llapi/mc/JsonHelpers.hpp"
inline std::string FixMojangJson(std::string const& content) {
    Json::Value value;
    JsonHelpers::parseJson(content, value);
    return JsonHelpers::serialize(value);
}

std::optional<Addon> parseAddonFromPath(const std::filesystem::path& addonPath) {
    try {
        auto manifestPath = addonPath;
        manifestPath.append("manifest.json");
        if (!filesystem::exists(manifestPath)) {
            manifestPath = addonPath;
            manifestPath.append("pack_manifest.json");
        }
        auto manifestFile = ReadAllFile(UTF82String(manifestPath.u8string()));
        if (!manifestFile || manifestFile->empty())
            throw std::exception("manifest.json not found!");
        std::string content = FixMojangJson(*manifestFile);

        auto  manifest = nlohmann::json::parse(content, nullptr, true, true);
        auto  header   = manifest["header"];
        auto  uuid     = header["uuid"];
        Addon addon;
        addon.name        = header["name"];
        addon.description = header["description"];
        addon.uuid        = uuid;
        addon.directory   = UTF82String(addonPath.u8string());

        auto ver      = header["version"];
        addon.version = ll::Version(ver[0], ver[1], ver[2]);

        string type = manifest["modules"][0]["type"];
        if (type == "resources")
            addon.type = Addon::Type::ResourcePack;
        else if (type == "data" || type == "script")
            addon.type = Addon::Type::BehaviorPack;
        else
            throw std::exception("Unknown type of addon pack!");

        return addon;
    } catch (const seh_exception& e) {
        addonLogger.error("Uncaught SEH Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + UTF82String(addonPath.u8string()));
        addonLogger.error("Error: Code[{}] {}", e.code(), TextEncoding::toUTF8(e.what()));
    } catch (const std::exception& e) {
        addonLogger.error("Uncaught C++ Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + UTF82String(addonPath.u8string()));
        addonLogger.error("Error: Code[{}] {}", -1, TextEncoding::toUTF8(e.what()));
    } catch (...) {
        addonLogger.error("Uncaught Exception Detected!");
        addonLogger.error("In " __FUNCTION__ " " + UTF82String(addonPath.u8string()));
    }
    return std::nullopt;
}

bool RemoveAddonFromList(Addon& addon) {
    auto jsonFile = GetAddonJsonFile(addon.type);
    if (!filesystem::exists(str2wstr(jsonFile))) {
        addonLogger.error(tr("ll.addonsHelper.error.addonConfigNotFound"));
        return false;
    }

    auto addonJsonContent = ReadAllFile(jsonFile);
    if (!addonJsonContent || addonJsonContent->empty()) {
        addonLogger.error(tr("ll.addonsHelper.error.addonConfigNotFound"));
        return false;
    }
    auto addonJson = fifo_json::parse(*addonJsonContent, nullptr, true, true);
    int  id        = 0;
    for (auto item : addonJson) {
        if (item["pack_id"] == addon.uuid) {
            addonJson.erase(id);
            bool res = WriteAllFile(jsonFile, addonJson.dump(4));
            if (!res) {
                addonLogger.error(tr("ll.addonsHelper.removeAddonFromList.fail", addon.getPrintName()));
                return false;
            }
            addonLogger.info(tr("ll.addonsHelper.removeAddonFromList.success", addon.getPrintName()));
            return true;
        }
        ++id;
    }
    addonLogger.error(tr("ll.addonsHelper.error.addonNotFound", addon.getPrintName()));
    return false;
}

bool AddAddonToList(Addon& addon) {
    string addonListFile = GetAddonJsonFile(addon.type);
    if (!filesystem::exists(str2wstr(addonListFile))) {
        ofstream fout(addonListFile);
        fout << "[]" << flush;
    }

    try {

        bool exists    = false;
        auto addonList = nlohmann::json::parse(*ReadAllFile(addonListFile), nullptr, false, true);
        // Auto fix Addon List File
        if (!addonList.is_array()) {
            auto backupPath = UTF82String(filesystem::path(str2wstr(addonListFile)).stem().u8string()) + "_error.json";
            addonLogger.error(tr("ll.addonsHelper.addAddonToList.invalidList", addonListFile, backupPath));
            std::error_code ec;
            std::filesystem::rename(
                str2wstr(addonListFile),
                filesystem::path(addonListFile).remove_filename().append(str2wstr(backupPath)),
                ec
            );
            addonList = "[]"_json;
        }
        for (auto& addonData : addonList) {
            if (addonData["pack_id"] == addon.uuid) {
                addonData["version"] = {addon.version.major, addon.version.minor, addon.version.revision};
                exists               = true;
                break;
            }
        }
        if (!exists) {
            auto newAddonData       = nlohmann::json::object();
            newAddonData["pack_id"] = addon.uuid;
            newAddonData["version"] = {addon.version.major, addon.version.minor, addon.version.revision};
            addonList.push_back(newAddonData);
        }
        bool res = WriteAllFile(addonListFile, addonList.dump(4));
        if (!res)
            throw std::exception("Fail to write data back to addon list file!");
        addonLogger.info(tr("ll.addonsHelper.addAddonToList.success", addon.getPrintName()));
        return true;
    } catch (const std::exception& e) {
        addonLogger.error(tr("ll.addonsHelper.addAddonToList.fail", addon.getPrintName(), addonListFile));
        addonLogger.error(tr("ll.addonsHelper.displayError", TextEncoding::toUTF8(e.what())));
        addonLogger.error(tr("ll.addonsHelper.error.installationAborted"));
        return false;
    }
}
bool InstallAddonToLevel(const std::string& addonDir, const std::string& addonName) {
    auto addon = parseAddonFromPath(str2wstr(addonDir));
    if (!addon.has_value())
        return false;
    std::string subPath;
    if (addon->type == Addon::Type::ResourcePack)
        subPath = "/resource_packs";
    else if (addon->type == Addon::Type::BehaviorPack)
        subPath = "/behavior_packs";


    // copy files
    string levelPath = Level::getCurrentLevelPath();
    string toPath    = levelPath + subPath + "/" + addonName;

    // Avoid duplicate names or update addon if same uuid
    while (filesystem::exists(str2wstr(toPath))) {
        auto tmp = parseAddonFromPath(str2wstr(toPath));
        if (tmp.has_value() && tmp->uuid != addon->uuid) {
            toPath += "_";
        } else {
            std::error_code ec;
            filesystem::remove_all(str2wstr(toPath), ec);
            break;
        }
    }
    std::error_code ec;
    filesystem::create_directories(str2wstr(toPath), ec);
    filesystem::copy(str2wstr(addonDir), str2wstr(toPath), filesystem::copy_options::recursive, ec);

    // add addon to list file
    return AddAddonToList(*addon);
}

void FindManifest(vector<string>& result, const string& path) {
    filesystem::directory_iterator ent(str2wstr(path));

    bool foundManifest = false;
    for (auto& file : ent) {
        const auto& file_path = file.path();
        if (isManifestFile(UTF82String(file_path.filename().u8string()))) {
            result.push_back(UTF82String(filesystem::canonical(file_path).parent_path().u8string()));
            foundManifest = true;
            break;
        }
    }
    if (!foundManifest) {
        // No manifest file
        if (!AutoInstallAddons(path)) {
            filesystem::directory_iterator ent2(str2wstr(path));
            for (auto& file : ent2)
                if (file.is_directory())
                    FindManifest(result, UTF82String(file.path().u8string()));
        }
    }
}

std::string Addon::getPrintName() const {
    if (ll::globalConfig.colorLog)
        return ColorFormat::convertToConsole(std::string(name));
    else
        return ColorFormat::removeColorCode(std::string(name));
}

bool AddonsManager::install(std::string packPath) {
    try {
        if (!filesystem::exists(str2wstr(packPath))) {
            addonLogger.error(tr("ll.addonsHelper.error.addonFileNotFound", packPath));
            return false;
        }
        if (VALID_ADDON_FILE_EXTENSION.find(UTF82String(filesystem::path(str2wstr(packPath)).extension().u8string())) ==
            VALID_ADDON_FILE_EXTENSION.end()) {
            addonLogger.error(tr("ll.addonsHelper.error.unsupportedFileType"));
            return false;
        }

        string name = UTF82String(filesystem::path(str2wstr(packPath)).filename().u8string());
        addonLogger.warn(tr("ll.addonsHelper.install.installing", name));

        std::error_code ec;
        if (EndsWith(packPath, ".mcpack")) {
            string newPath = packPath;
            ReplaceStr(newPath, ".mcpack", ".zip");
            filesystem::rename(str2wstr(packPath), str2wstr(newPath), ec);
            packPath = newPath;
        }
        if (EndsWith(packPath, ".mcaddon")) {
            string newPath = packPath;
            ReplaceStr(newPath, ".mcaddon", ".zip");
            filesystem::rename(str2wstr(packPath), str2wstr(newPath), ec);
            packPath = newPath;
        }

        name = UTF82String(filesystem::path(str2wstr(packPath)).filename().u8string());

        // filesystem::remove_all(ADDON_INSTALL_TEMP_DIR + name + "/", ec); //?
        // filesystem::create_directories(ADDON_INSTALL_TEMP_DIR + name + "/", ec);

        auto res = NewProcessSync(
            fmt::format(
                "{} x \"{}\" -o{} -aoa", ZIP_PROGRAM_PATH, packPath, "\"" ADDON_INSTALL_TEMP_DIR + name + "/\""
            ),
            ADDON_INSTALL_MAX_WAIT
        );
        if (res.first != 0) {
            addonLogger.error(tr("ll.addonsHelper.install.error.failToUncompress.msg", name));
            addonLogger.error(tr("ll.addonsHelper.install.error.failToUncompress.exitCode"), res.first);
            addonLogger.error(tr("ll.addonsHelper.install.error.failToUncompress.programOutput"), res.second);
            addonLogger.error(tr("ll.addonsHelper.error.installationAborted"));
            filesystem::remove_all(ADDON_INSTALL_TEMP_DIR + name + "/", ec);
            return false;
        }

        vector<string> paths;
        FindManifest(paths, ADDON_INSTALL_TEMP_DIR + name + "/");

        for (auto& dir : paths) {
            string addonName = UTF82String(filesystem::path(str2wstr(dir)).filename().u8string());
            if (addonName.empty() || addonName == "Temp")
                addonName = UTF82String(filesystem::path(str2wstr(packPath)).stem().u8string());
            if (!InstallAddonToLevel(dir, addonName))
                throw std::exception("Error in Install Addon To Level ");
        }

        filesystem::remove_all(ADDON_INSTALL_TEMP_DIR + name + "/", ec);
        filesystem::remove_all(str2wstr(packPath), ec);
        return true;
    } catch (const seh_exception& e) {
        addonLogger.error("Uncaught SEH Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
        addonLogger.error("Error: Code[{}] {}", e.code(), TextEncoding::toUTF8(e.what()));
    } catch (const std::exception& e) {
        addonLogger.error("Uncaught C++ Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
        addonLogger.error("Error: Code[{}] {}", -1, TextEncoding::toUTF8(e.what()));
    } catch (...) {
        addonLogger.error("Uncaught Exception Detected!");
        addonLogger.error("In " __FUNCTION__);
    }
    return false;
}

bool AddonsManager::disable(std::string nameOrUuid) {
    try {
        auto addon = findAddon(nameOrUuid, true);
        if (!addon)
            return false;
        if (RemoveAddonFromList(*addon)) {
            addon->enable = false;
            return true;
        }

    } catch (...) {
    }
    return false;
}

bool AddonsManager::enable(std::string nameOrUuid) {
    try {
        auto addon = findAddon(nameOrUuid, true);
        if (!addon)
            return false;
        if (AddAddonToList(*addon)) {
            addon->enable = true;
            return true;
        }

    } catch (...) {
    }
    return false;
}

bool AddonsManager::uninstall(std::string nameOrUuid) {
    try {
        auto addon = findAddon(nameOrUuid, true);
        if (!addon) {
            addonLogger.error(tr("ll.addonsHelper.error.addonNotFound"));
            return false;
        }
        RemoveAddonFromList(*addon);
        std::error_code ec;
        filesystem::remove_all(str2wstr(addon->directory), ec);
        for (auto i = addons.begin(); i != addons.end(); ++i)
            if (i->uuid == addon->uuid) {
                addons.erase(i);
                break;
            }
        addonLogger.info(tr("ll.addonsHelper.uninstall.success", addon->getPrintName()));
    } catch (...) {
    }
    return false;
}

std::vector<Addon*> AddonsManager::getAllAddons() {
    std::vector<Addon*> res;
    for (auto& addon : addons)
        res.push_back(&addon);
    return res;
}

Addon* AddonsManager::findAddon(const std::string& nameOrUuid, bool fuzzy) {
    Addon* possible   = nullptr;
    bool   multiMatch = false;
    for (auto& addon : addons) {
        if (addon.uuid == nameOrUuid)
            return &addon;
        std::string addonName  = addon.name;
        std::string targetName = nameOrUuid;
        if (ColorFormat::removeColorCode(addonName) == ColorFormat::removeColorCode(targetName))
            return &addon;
        if (!fuzzy)
            continue;
        // Simple fuzzy matching
        std::transform(addonName.begin(), addonName.end(), addonName.begin(), ::tolower);
        std::transform(targetName.begin(), targetName.end(), targetName.begin(), ::tolower);
        if (StartsWith(addonName, targetName)) {
            if (possible)
                multiMatch = true;
            else
                possible = &addon;
        }
    }
    if (multiMatch)
        return nullptr;
    else
        return possible;
}

void ListAllAddons(CommandOutput& output) {
    if (addons.empty()) {
        output.trSuccess("ll.addonsHelper.error.noAddonInstalled");
        return;
    }

    output.trSuccess("ll.addonsHelper.cmd.output.list.overview", addons.size());
    for (auto index = 0; index < addons.size(); ++index) {
        auto&  addon     = addons[index];
        string addonName = addon.name;
        if (addonName.find("§") == string::npos)
            addonName = "§b" + addonName;
        string desc = addon.description;
        if (desc.find("§") == string::npos)
            desc = "§7" + desc;

        std::string addonType = (addon.type == Addon::Type::ResourcePack ? "ResourcePack" : "BehaviorPack");
        if (addon.enable) {
            output.success(
                fmt::format("§e{:>2}§r: {} §a[v{}] §8({})", index + 1, addonName, addon.version.toString(), addonType)
            );
            output.success(fmt::format("    {}", desc));
        } else {
            output.success(fmt::format(
                "§e{:>2}§r: §8{} [v{}] ({})",
                index + 1,
                ColorFormat::removeColorCode(addonName),
                addon.version.toString(),
                addonType
            ));
            output.success(fmt::format("    §8Disabled"));
        }
    }
}

void ShowAddon(CommandOutput& output, Addon& addon) {
    std::ostringstream oss;
    oss << "Addon <" << addon.name << "§r>" << (addon.enable ? " §aEnabled" : " §cDisabled") << "\n\n";
    oss << "- §aName§r:  " << addon.name << "\n";
    oss << "- §aUUID§r:  " << addon.uuid << "\n";
    oss << "- §aDescription§r:  " << addon.description << "\n";
    oss << "- §aVersion§r:  v" << addon.version.toString(true) << "\n";
    oss << "- §aType§r:  " << magic_enum::enum_name(addon.type) << "\n";
    oss << "- §aDirectory§r:  " << addon.directory << "\n";
    output.success(oss.str());
}

class AddonsCommand : public Command {
    enum class Operation { List, Install, Uninstall, Enable, Disable };

    Operation   operation = static_cast<Operation>(-1);
    std::string target;
    int         index        = -1;
    bool        target_isSet = false;
    bool        index_isSet  = false;

    inline Addon* getSelectedAddon(CommandOutput& output) const {
        if (target_isSet) {
            auto addon = AddonsManager::findAddon(target, true);
            if (addon) {
                return addon;
            } else {
                output.trError("ll.addonsHelper.error.addonNotfound", target);
            }
        } else {
            auto allAddons = AddonsManager::getAllAddons();
            if (index - 1 >= 0 && index - 1 < static_cast<int>(allAddons.size()))
                return allAddons[index - 1];
            else
                output.trError("ll.addonsHelper.error.outOfRange", index);
        }
        return nullptr;
    }

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override {
        output.setLanguageCode(ori);
        switch (operation) {
        case Operation::List:
            if (target_isSet || index_isSet) {
                if (auto addon = getSelectedAddon(output))
                    ShowAddon(output, *addon);
            } else
                ListAllAddons(output);
            break;
        case Operation::Install:
            if (AddonsManager::install(target))
                filesystem::remove_all(ADDON_INSTALL_TEMP_DIR);
            output.success();
            break;
        case Operation::Uninstall: {
            auto addon = getSelectedAddon(output);
            if (addon && AddonsManager::uninstall(addon->uuid))
                output.success();
            break;
        }
        case Operation::Enable: {
            auto addon = getSelectedAddon(output);
            if (addon && AddonsManager::enable(addon->uuid))
                output.success();
            break;
        }
        case Operation::Disable: {
            auto addon = getSelectedAddon(output);
            if (addon && AddonsManager::disable(addon->uuid))
                output.success();
            break;
        }
        default:
            break;
        }
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "addons",
            "LiteLoaderBDS Addons Helper (Restart required after addon changes)",
            CommandPermissionLevel::GameMasters,
            {(CommandFlagValue)0},
            {(CommandFlagValue)0x80}
        );

        vector<string> addonsList;
        for (auto& addon : addons)
            addonsList.push_back(addon.name);
        registry->addSoftEnum("AddonName", addonsList);

        // addons list
        registry->addEnum<Operation>(
            "Operation_Addons_List",
            {
                {"list", Operation::List}
        }
        );
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(
                &AddonsCommand::operation, "operation", "Operation_Addons_List"
            )
                .addOptions((CommandParameterOption)1),
            makeOptional<CommandParameterDataType::SOFT_ENUM>(
                &AddonsCommand::target, "addonName", "AddonName", &AddonsCommand::target_isSet
            )
        );
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(
                &AddonsCommand::operation, "operation", "Operation_Addons_List"
            )
                .addOptions((CommandParameterOption)1),
            makeOptional<CommandParameterDataType::NORMAL>(
                &AddonsCommand::index, "addonIndex", nullptr, &AddonsCommand::index_isSet
            )
        );

        // addons install
        registry->addEnum<Operation>(
            "Operation_Addons_Install",
            {
                {"install", Operation::Install}
        }
        );
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(
                &AddonsCommand::operation, "operation", "Operation_Addons_Install"
            )
                .addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::NORMAL>(&AddonsCommand::target, "addonName")
        );

        // addons uninstall

        registry->addEnum<Operation>(
            "Operation_Addons_Others",
            {
                {"uninstall", Operation::Uninstall},
                {"remove",    Operation::Uninstall},
                {"enable",    Operation::Enable   },
                {"disable",   Operation::Disable  },
        }
        );
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(
                &AddonsCommand::operation, "operation", "Operation_Addons_Others"
            )
                .addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::SOFT_ENUM>(
                &AddonsCommand::target, "addonName", "AddonName", &AddonsCommand::target_isSet
            )
        );
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(
                &AddonsCommand::operation, "operation", "Operation_Addons_Others"
            )
                .addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::NORMAL>(
                &AddonsCommand::index, "addonIndex", nullptr, &AddonsCommand::index_isSet
            )
        );
    }
};

void FindAddons(string jsonPath, string packsDir) {
    try {
        if (!filesystem::exists(str2wstr(jsonPath)) && !filesystem::exists(str2wstr(packsDir)))
            return;
        if (!filesystem::exists(str2wstr(jsonPath)))
            WriteAllFile(jsonPath, "[]");
        if (!filesystem::exists(str2wstr(packsDir)))
            filesystem::create_directories(str2wstr(packsDir));

        auto content = ReadAllFile(jsonPath);
        if (!content || content->empty()) {
            WriteAllFile(jsonPath, "[]");
            content = "[]";
        }
        std::set<string> validPackIDs;
        try {
            auto addonList = nlohmann::json::parse(*content, nullptr, true, true);
            for (auto addon : addonList) {
                std::string pktid = addon["pack_id"];
                validPackIDs.insert(pktid);
            }
        } catch (const std::exception&) {
            addonLogger.error(tr("ll.addonsHelper.error.parsingEnabledAddonsList"));
        }

        filesystem::directory_iterator ent(str2wstr(packsDir));
        for (auto& dir : ent) {
            if (!dir.is_directory())
                continue;
            auto addon = parseAddonFromPath(dir);
            if (!addon)
                continue;
            if (validPackIDs.find(addon->uuid) != validPackIDs.end())
                addon->enable = true;
            addons.emplace_back(std::move(*addon));
        }
    } catch (...) {
        return;
    }
}

void BuildAddonsList() {
    string levelPath = Level::getCurrentLevelPath();

    FindAddons(levelPath + "/world_behavior_packs.json", levelPath + "/behavior_packs");
    FindAddons(levelPath + "/world_resource_packs.json", levelPath + "/resource_packs");

    std::sort(addons.begin(), addons.end(), [](Addon const& _Left, Addon const& _Right) {
        if (_Left.enable && !_Right.enable)
            return true;
        if (_Left.type == Addon::Type::ResourcePack && _Right.type == Addon::Type::BehaviorPack)
            return true;
        return false;
    });
}

bool AutoInstallAddons(string path) {
    std::error_code ec;
    if (!filesystem::exists(str2wstr(path))) {
        filesystem::create_directories(str2wstr(path), ec);
        addonLogger.info(tr("ll.addonsHelper.autoInstall.tip.dirCreated", ll::globalConfig.addonsInstallPath));
        return false;
    }
    std::vector<string> toInstallList;

    filesystem::directory_iterator ent(str2wstr(path));
    for (auto& file : ent) {
        if (!file.is_regular_file())
            continue;

        if (VALID_ADDON_FILE_EXTENSION.count(UTF82String(file.path().extension().u8string())) > 0) {
            toInstallList.push_back(UTF82String(file.path().lexically_normal().u8string()));
        }
    }

    if (toInstallList.empty())
        return false;

    addonLogger.info(tr("ll.addonsHelper.autoInstall.working", toInstallList.size()));
    int cnt = 0;
    for (auto& addonPath : toInstallList) {
        addonLogger.debug("Installing \"{}\"...", addonPath);
        if (!AddonsManager::install(addonPath)) {
            // filesystem::remove_all(ADDON_INSTALL_TEMP_DIR, ec);
            break;
        } else {
            ++cnt;
            addonLogger.info(tr("ll.addonsHelper.autoInstall.installed", addonPath));
        }
    }

    if (cnt == 0) {
        addonLogger.error(tr("ll.addonsHelper.error.noAddonInstalled"));
    } else {
        addonLogger.info(tr("ll.addonsHelper.autoInstall.installedCount", cnt));
    }
    return true;
}

void InitAddonsHelper() {
    if (ll::isDebugMode())
        addonLogger.consoleLevel = addonLogger.debug.level;

    filesystem::remove_all(ADDON_INSTALL_TEMP_DIR);
    filesystem::create_directories(ADDON_INSTALL_TEMP_DIR);

    AutoInstallAddons(ll::globalConfig.addonsInstallPath);
    BuildAddonsList();

    filesystem::remove_all(ADDON_INSTALL_TEMP_DIR);
    using ll::event::server::RegisterCommandEvent;
    RegisterCommandEvent::subscribe([](const RegisterCommandEvent& ev) { // Register commands
        AddonsCommand::setup(ev.getRegistry());
        return true;
    });
}
