#pragma once

#include "ll/api/event/world/LevelEvent.h"

namespace ll::event::inline world {

class ServerLevelTickEvent final : public LevelEvent {
public:
    constexpr ServerLevelTickEvent(Level& level) : LevelEvent(level) {}
};
} // namespace ll::event::inline world
