#pragma once

#include <string_view>

#include "gsl/pointers"

#include "ll/api/command/Overload.h"
#include "ll/api/command/OverloadData.h"

#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
class CommandRegistrar;
class CommandHandle {
    friend OverloadData;

    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistrar& getRegistrar();

    void registerOverload(OverloadData&&);

    char const* addText(std::string_view);

public:
    CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned);
    ~CommandHandle();

    template <reflection::Reflectable Params = EmptyParam>
    constexpr auto overload() -> Overload<Params> {
        return Overload<Params>{*this};
    }
};
} // namespace ll::command
