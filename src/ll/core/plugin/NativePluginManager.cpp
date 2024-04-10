#include "ll/core/plugin/NativePluginManager.h"

#include <cstddef>
#include <filesystem>
#include <memory>
#include <ostream>
#include <sstream>
#include <string>
#include <string_view>
#include <utility>

#include "demangler/Demangle.h"
#include "fmt/core.h"
#include "pl/dependency/DependencyWalker.h"

#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/PluginManager.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/LeviLamina.h"

#include <libloaderapi.h>
#include <minwindef.h>
#include <processenv.h>

namespace ll::plugin {

NativePluginManager::NativePluginManager() : PluginManager(NativePluginManagerName) {
    handleMap[win_utils::getCurrentModuleHandle()] = std::make_shared<NativePlugin>(
        Manifest{"./../../LeviLamina.dll", "LeviLamina", getType()},
        win_utils::getCurrentModuleHandle()
    );
}

NativePluginManager::~NativePluginManager() = default;

static void
printDependencyError(pl::dependency_walker::DependencyIssueItem const& item, std::ostream& stream, size_t depth = 0) {
    std::string indent(depth * 3 + 3, ' ');
    if (item.mContainsError) {
        stream << indent << "module: " << string_utils::u8str2str(item.mPath.u8string()) << '\n';
        if (!item.mMissingModule.empty()) {
            stream << indent << "missing module:" << '\n';
            for (const auto& missingModule : item.mMissingModule) {
                stream << indent << "|- " << missingModule << '\n';
            }
        }
        if (!item.mMissingProcedure.empty()) {
            stream << indent << "missing procedure:" << '\n';
            for (const auto& [module, missingProcedure] : item.mMissingProcedure) {
                stream << indent << "|- " << module << '\n';
                for (const auto& procedure : missingProcedure) {
                    stream << indent << "|---- " << procedure << '\n';

                    auto de = demangler::demangle(procedure);
                    if (de != procedure) stream << indent << "|     " << de << '\n';
                }
            }
        }
        if (!item.mDependencies.empty()) {
            for (auto const& [module, subItem] : item.mDependencies) {
                printDependencyError(*subItem, stream, depth + 1);
            }
        }
    }
}

static std::string diagnosticDependency(std::filesystem::path const& path) {
    auto              result = pl::dependency_walker::pl_diagnostic_dependency_new(path);
    std::stringstream stream;
    printDependencyError(*result, stream);
    return stream.str();
}

bool NativePluginManager::load(Manifest manifest) {
    auto l(lock());
    if (hasPlugin(manifest.name)) {
        return false;
    }
    auto pluginDir = std::filesystem::canonical(getPluginsRoot() / manifest.name);

    std::wstring buffer(32767, '\0');

    if (auto res = GetEnvironmentVariable(L"PATH", buffer.data(), 32767); res != 0 && res != 32767) {
        buffer.resize(res);
        if (!buffer.empty()) {
            buffer += L";";
        }
        buffer += pluginDir.wstring();
        SetEnvironmentVariable(L"PATH", buffer.c_str());
    }
    auto entry = pluginDir / manifest.entry;
    auto lib   = LoadLibrary(entry.c_str());
    if (!lib) {
        auto e = error_utils::getWinLastError();
        error_utils::printException(logger, e);
        if (e.code().value() == 126 || e.code().value() == 127) {
            logger.error("Dependency diagnostic:\n{}", diagnosticDependency(entry));
        }
        return false;
    }
    if (!GetProcAddress(lib, "ll_memory_operator_overrided")) {
        // TODO: change to error
        logger.debug("The plugin is not using the unified memory allocation operator, will not be loaded.");
        // return false;
    }
    auto plugin = std::make_shared<NativePlugin>(std::move(manifest), lib);
    plugin->onLoad(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_load")));
    plugin->onUnload(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_unload")));
    plugin->onEnable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_enable")));
    plugin->onDisable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_disable")));
    if (!plugin->onLoad()) {
        return false;
    }
    if (!addPlugin(plugin->getManifest().name, plugin)) {
        return false;
    }
    handleMap[lib] = plugin;
    return true;
}

bool NativePluginManager::unload(std::string_view name) {
    auto l(lock());
    if (!hasPlugin(name)) {
        return false;
    }
    auto ptr = std::static_pointer_cast<NativePlugin>(getPlugin(name));
    if (!ptr->hasOnUnload()) {
        return false;
    }
    ptr->onDisable();
    if (!ptr->onUnload()) {
        return false;
    }
    if (!FreeLibrary((HMODULE)ptr->getHandle())) {
        error_utils::printException(logger, error_utils::getWinLastError());
        return false;
    }
    erasePlugin(name);
    handleMap.erase(ptr->getHandle());
    return true;
}

} // namespace ll::plugin
