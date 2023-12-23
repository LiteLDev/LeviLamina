#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/server/commands/CommandRegistry.h"

namespace ll::event::inline command {

class SetupCommandEvent : public Event {
    CommandRegistry& mRegistry;

public:
    constexpr explicit SetupCommandEvent(CommandRegistry& reg) : mRegistry(reg) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI CommandRegistry& registry() const;
};
} // namespace ll::event::inline command
