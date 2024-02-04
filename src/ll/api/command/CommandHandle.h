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
    gsl::not_null<CommandRegistrar*>           registrar;
    gsl::not_null<CommandRegistry::Signature*> signature;
    bool                                       owned;

    void registerOverload(OverloadData&&);

    char const* addText(std::string_view);

public:
    CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature* signature, bool owned)
    : registrar(&registrar),
      signature(signature),
      owned(owned) {}

    template <reflection::Reflectable Params>
    constexpr auto overload() -> Overload<Params> {
        return Overload<Params>{*this};
    }
};
} // namespace ll::command
