#pragma once

#include "ll/api/event/world/LevelEvent.h"

namespace ll::event::inline world {

class LevelTickEvent final : public LevelEvent {
public:
    constexpr LevelTickEvent(Level& level) : LevelEvent(level) {}
};
} // namespace ll::event::inline world
