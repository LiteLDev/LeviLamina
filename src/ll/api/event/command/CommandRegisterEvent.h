#pragma once

#include "ll/api/event/Event.h"

#include "mc/server/commands/CommandRegistry.h"

namespace ll::event::inline command {

class CommandRegisterEvent : public Event {
    CommandRegistry& mCommandRegistry;

protected:
    constexpr explicit CommandRegisterEvent(CommandRegistry& commandRegistry) : mCommandRegistry(commandRegistry) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI CommandRegistry& commandRegistry() const;
};

} // namespace ll::event::inline command
