#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/server/commands/CommandRegistry.h"

namespace ll::event::inline command {
class SetupCommandEvent : public Event {
public:
    CommandRegistry& commandRegistry;

    constexpr explicit SetupCommandEvent(CommandRegistry& reg) : commandRegistry(reg) {}

};
} // namespace ll::event::inline command
