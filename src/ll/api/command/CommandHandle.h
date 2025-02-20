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

    size_t disableModOverloads(std::string_view modName);

public:
    CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned);
    ~CommandHandle();

    template <reflection::Reflectable Params = EmptyParam>
    [[nodiscard]] auto overload(std::weak_ptr<mod::Mod> mod = mod::NativeMod::current()) -> Overload<Params> {
        return Overload<Params>{*this, std::move(mod)};
    }
    LLNDAPI RuntimeOverload runtimeOverload(std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());

    LLNDAPI std::vector<std::string> alias() const;

    LLAPI CommandHandle& alias(std::string_view alias);
};
} // namespace ll::command
