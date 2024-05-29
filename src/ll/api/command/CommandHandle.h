#pragma once

#include <string_view>

#include "ll/api/command/Overload.h"
#include "ll/api/command/OverloadData.h"

#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
class CommandRegistrar;
class RuntimeOverload;
class CommandHandle {
    friend OverloadData;
    friend CommandRegistrar;

    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistrar& getRegistrar();

    void registerOverload(OverloadData&);

    char const* addText(std::string_view);

    char const* storeStr(std::string_view);

    size_t disablePluginOverloads(std::string_view pluginName);

public:
    CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned);
    ~CommandHandle();

    template <reflection::Reflectable Params = EmptyParam>
    [[nodiscard]] auto
    overload(std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()) -> Overload<Params> {
        return Overload<Params>{*this, std::move(plugin)};
    }

    LLNDAPI RuntimeOverload runtimeOverload(std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current());

    LLAPI void alias(std::string_view alias);

    LLNDAPI std::vector<std::string> alias() const;
};
} // namespace ll::command
