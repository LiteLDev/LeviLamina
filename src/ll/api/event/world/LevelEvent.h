#pragma once

#include "ll/api/event/Event.h"

#include "mc/world/level/Level.h"

namespace ll::event::inline world {

class LevelEvent : public Event {
    Level& mLevel;

protected:
    constexpr explicit LevelEvent(Level& level) : mLevel(level) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Level& level() const;
};
} // namespace ll::event::inline world
