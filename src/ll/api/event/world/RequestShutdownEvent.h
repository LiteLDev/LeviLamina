#pragma once

#include "ll/api/event/Event.h"

#include "mc/world/Minecraft.h"

namespace ll::event::inline world {
class RequestShutdownEvent : public Event {
    Minecraft&         mMinecraft;
    std::string const& mMessage;

public:
    constexpr explicit RequestShutdownEvent(Minecraft& minecraft, std::string const& message)
    : mMinecraft(minecraft),
      mMessage(message) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI Minecraft& minecraft() const;
    LLNDAPI std::string const& message() const;
};
} // namespace ll::event::inline world
