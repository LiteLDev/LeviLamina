#pragma once

#include "mc/server/commands/CommandRegistry.h"

class CommandRegistry;

namespace ll::command {
class CommandRegistrar {
    struct Impl;
    std::unique_ptr<Impl> impl;

    

public:
    LLNDAPI CommandRegistrar(CommandRegistry&);
    LLAPI ~CommandRegistrar();

    LLNDAPI CommandRegistry* operator->() const;

    LLNDAPI CommandRegistry& getRegistry() const;

    template <class Params, class Callable>
    constexpr void registerOverload(std::string_view description, Callable&& executor) {

    }
};
} // namespace ll::command
