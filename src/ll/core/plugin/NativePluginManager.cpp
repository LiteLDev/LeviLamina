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

#include "ll/api/i18n/I18n.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/PluginManager.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/LeviLamina.h"

#include "errhandlingapi.h"
#include "libloaderapi.h"
#include "minwindef.h"
#include "processenv.h"
#include "winerror.h"

namespace ll::plugin {
using namespace i18n_literals;

NativePluginManager::NativePluginManager() : PluginManager(NativePluginManagerName) {
    handleMap[win_utils::getCurrentModuleHandle()] = NativePlugin::current();
}
NativePluginManager::~NativePluginManager() = default;

static std::shared_ptr<NativePlugin> currentLoadingPlugin;

std::shared_ptr<NativePlugin> NativePluginManager::getPluginByHandle(Handle handle) {
    auto l(lock());
    if (currentLoadingPlugin) { // for getCurrent before main
        return currentLoadingPlugin;
    }
    if (handleMap.contains(handle)) {
        return handleMap.at(handle);
    }
    return {};
}
static void
formatDependencyError(pl::dependency_walker::DependencyIssueItem const& item, std::ostream& stream, size_t depth = 0) {
    std::string indent(depth * 3 + 3, ' ');
    if (item.mContainsError) {
        stream << indent << "module: "_tr() << string_utils::u8str2str(item.mPath.u8string()) << '\n';
        if (!item.mMissingModule.empty()) {
            stream << indent << "missing module:"_tr() << '\n';
            for (const auto& missingModule : item.mMissingModule) {
                stream << indent << "|- " << missingModule << '\n';
            }
        }
        if (!item.mMissingProcedure.empty()) {
            stream << indent << "missing procedure:"_tr() << '\n';
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
                formatDependencyError(*subItem, stream, depth + 1);
            }
        }
    }
}

static std::string diagnosticDependency(std::filesystem::path const& path) {
    auto              result = pl::dependency_walker::pl_diagnostic_dependency_new(path);
    std::stringstream stream;
    stream << "Dependency diagnostic:"_tr() << '\n';
    formatDependencyError(*result, stream);
    return stream.str();
}

Expected<> NativePluginManager::load(Manifest manifest) {
    auto l(lock());
    currentLoadingPlugin = std::make_shared<NativePlugin>(std::move(manifest));
    struct Remover {
        ~Remover() { currentLoadingPlugin = nullptr; };
    } r;

    auto pluginDir =
        std::filesystem::canonical(getPluginsRoot() / string_utils::sv2u8sv(currentLoadingPlugin->getManifest().name));

    if (auto res = win_utils::adaptFixedSizeToAllocatedResult(
            [](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                ::SetLastError(ERROR_SUCCESS);
                valueLengthNeededWithNul = ::GetEnvironmentVariableW(L"PATH", value, static_cast<DWORD>(valueLength));
                if (valueLengthNeededWithNul == 0 && ::GetLastError() != ERROR_SUCCESS) {
                    return false;
                }
                if (valueLengthNeededWithNul < valueLength) {
                    valueLengthNeededWithNul++; // It fit, account for the null.
                }
                return true;
            }
        );
        res) {
        if (!res->empty()) {
            *res += L";";
        }
        *res += pluginDir.wstring();
        SetEnvironmentVariableW(L"PATH", res->c_str());
    }
    auto entry = pluginDir / string_utils::sv2u8sv(currentLoadingPlugin->getManifest().entry);
    auto lib   = LoadLibraryW(entry.c_str());
    if (!lib) {
        auto       e = error_utils::getWinLastError();
        Expected<> error{makeExceptionError(std::make_exception_ptr(e))};
        if (e.code().value() == 126 || e.code().value() == 127) {
            error.error().join(makeStringError(diagnosticDependency(entry)));
        }
        return error;
    }
    if (!GetProcAddress(lib, "ll_memory_operator_overrided")) {
        // TODO: change to error before release
        using namespace i18n_literals;
        logger.error(
            "The plugin is not using the unified memory allocation operator, will not be loaded in next version."_tr()
        );
        // return false;
    }
    currentLoadingPlugin->setHandle(lib);
    currentLoadingPlugin->onLoad(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_load")));
    currentLoadingPlugin->onUnload(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_unload")));
    currentLoadingPlugin->onEnable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_enable")));
    currentLoadingPlugin->onDisable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_disable")));

    return currentLoadingPlugin->onLoad().transform([&, this] {
        addPlugin(currentLoadingPlugin->getManifest().name, currentLoadingPlugin);
        handleMap[lib] = currentLoadingPlugin;
    });
}

Expected<> NativePluginManager::unload(std::string_view name) {
    auto l(lock());
    auto ptr = std::static_pointer_cast<NativePlugin>(getPlugin(name));
    if (!ptr->hasOnUnload()) {
        return makeStringError("The plugin does not register an unload function"_tr());
    }
    if (auto res = ptr->onDisable().and_then([&] { return ptr->onUnload(); }); !res) {
        return res;
    }
    if (!FreeLibrary((HMODULE)ptr->getHandle())) {
        return makeExceptionError(std::make_exception_ptr(error_utils::getWinLastError()));
    }
    handleMap.erase(ptr->getHandle());
    erasePlugin(name);
    return {};
}
} // namespace ll::plugin
