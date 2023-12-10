#pragma once

#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerClickEvent : public PlayerEvent {
public:
    constexpr explicit PlayerClickEvent(Player& player) : PlayerEvent(player) {}
};
class PlayerRightClickEvent : public PlayerClickEvent {
public:
    constexpr explicit PlayerRightClickEvent(Player& player) : PlayerClickEvent(player) {}
};
class PlayerLeftClickEvent : public PlayerClickEvent {
public:
    constexpr explicit PlayerLeftClickEvent(Player& player) : PlayerClickEvent(player) {}
};
} // namespace ll::event::inline player
