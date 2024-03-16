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
    friend RuntimeOverload;

    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistrar& getRegistrar();

    void registerOverload(OverloadData&);

    void registerRuntimeOverload(RuntimeOverload&);

    char const* addText(std::string_view);

    char const* addPostfix(std::string_view);

public:
    CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned);
    ~CommandHandle();

    template <reflection::Reflectable Params = EmptyParam>
    [[nodiscard]] constexpr auto overload() -> Overload<Params> {
        return Overload<Params>{*this};
    }

    LLNDAPI RuntimeOverload runtimeOverload();

    LLAPI void alias(std::string_view alias);

    LLNDAPI std::vector<std::string> alias() const;
};
} // namespace ll::command
