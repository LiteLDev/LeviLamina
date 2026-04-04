#pragma once

#include "ll/api/event/world/LevelEvent.h"

namespace ll::event::inline world {

class ClientLevelTickEvent final : public LevelEvent {
public:
    constexpr ClientLevelTickEvent(Level& level) : LevelEvent(level) {}
};
} // namespace ll::event::inline world
