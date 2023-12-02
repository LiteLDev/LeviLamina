#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {

class PlayerSprintEvent : public Event {
public:
    Player& player;

protected:
    constexpr explicit PlayerSprintEvent(Player& player) : player(player) {}
};

/**
 * @brief Player start sprint event.
 */
class PlayerStartSprintEvent : public PlayerSprintEvent {
public:
    constexpr explicit PlayerStartSprintEvent(Player& player) : PlayerSprintEvent(player) {}
};

/**
 * @brief Player stop sprint event.
 */
class PlayerStopSprintEvent : public PlayerSprintEvent {
public:
    constexpr explicit PlayerStopSprintEvent(Player& player) : PlayerSprintEvent(player) {}
};

class PlayerSneakEvent : public Cancellable<Event> {
public:
    Player& player;

protected:
    constexpr explicit PlayerSneakEvent(Player& player) : player(player) {}
};

/**
 * @brief Player start sneak event.
 */
class PlayerStartSneakEvent : public PlayerSneakEvent {
public:
    constexpr explicit PlayerStartSneakEvent(Player& player) : PlayerSneakEvent(player) {}
};

/**
 * @brief Player stop sneak event.
 */
class PlayerStopSneakEvent : public PlayerSneakEvent {
public:
    constexpr explicit PlayerStopSneakEvent(Player& player) : PlayerSneakEvent(player) {}
};

} // namespace ll::event::inline player
