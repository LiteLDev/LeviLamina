#pragma once

#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
class CommandRegistrar {
    CommandRegistry* registry;

public:
    LLNDAPI CommandRegistrar(CommandRegistry&);
    LLAPI ~CommandRegistrar();

    CommandRegistry* operator->() const { return registry; }
};
} // namespace ll::command
