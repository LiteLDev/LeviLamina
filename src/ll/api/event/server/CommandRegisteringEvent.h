#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

class CommandRegistry;

namespace ll::event {
class CommandRegisteringEvent : public Event {
public:
    CommandRegistry& commandRegistry;

    constexpr explicit CommandRegisteringEvent(CommandRegistry& reg) : commandRegistry(reg) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event
