#include "ll/core/plugin/NativePluginManager.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include <demangler/Demangle.h>
#include <pl/dependency/DependencyWalker.h>

#include "windows.h"

namespace ll::plugin {

NativePluginManager::NativePluginManager() : PluginManager(NativePluginManagerName) {}
NativePluginManager::~NativePluginManager() = default;

static void printDependencyError(
    const std::unique_ptr<pl::dependency_walker::DependencyIssueItem>& item,
    std::ostream&                                                      stream,
    size_t                                                             depth = 0
) {
    std::string indent(depth * 3 + 3, ' ');
    if (item->mContainsError) {
        stream << indent << fmt::format("module: {}", string_utils::u8str2str(item->mPath.u8string())) << std::endl;
        if (!item->mMissingModule.empty()) {
            stream << indent << "missing module:" << std::endl;
            for (const auto& missingModule : item->mMissingModule) {
                stream << indent << "|- " << missingModule << std::endl;
            }
        }
        if (!item->mMissingProcedure.empty()) {
            stream << indent << "missing procedure:" << std::endl;
            for (const auto& [module, missingProcedure] : item->mMissingProcedure) {
                stream << indent << "|- " << module << std::endl;
                for (const auto& procedure : missingProcedure) {
                    stream << indent << "|---- " << procedure << std::endl;

                    auto de = demangler::demangle(procedure);
                    if (de != procedure) stream << indent << "|     " << de << std::endl;
                }
            }
        }
        if (!item->mDependencies.empty()) {
            for (const auto& [module, subItem] : item->mDependencies) {
                printDependencyError(subItem, stream, depth + 1);
            }
        }
    }
}

std::string diagnosticDependency(const std::filesystem::path& path) {
    auto              result = pl::dependency_walker::pl_diagnostic_dependency(path);
    std::stringstream stream;
    printDependencyError(result, stream);
    return stream.str();
}

bool NativePluginManager::load(Manifest manifest) {
    auto l(lock());
    if (hasPlugin(manifest.name)) {
        return false;
    }
    auto entry = getPluginsRoot() / manifest.name / manifest.entry;
    auto lib   = LoadLibrary(entry.c_str());
    if (!lib) {
        auto e = error_utils::getWinLastError();
        error_utils::printException(logger, e);
        if (e.code().value() == 126 || e.code().value() == 127) {
            logger.error("Dependency diagnostic:\n{}", diagnosticDependency(entry));
        }
        return false;
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
