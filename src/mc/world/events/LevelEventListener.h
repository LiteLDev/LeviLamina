#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelNotificationEvent;
// clang-format on

class LevelEventListener {
public:
    // prevent constructor by default
    LevelEventListener& operator=(LevelEventListener const&);
    LevelEventListener(LevelEventListener const&);
    LevelEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onLevelInitialized(::Level& level);

    // vIndex: 2
    virtual ::EventResult onLevelAddedPlayer(::Player& player);

    // vIndex: 3
    virtual ::EventResult onLevelRemovedPlayer(::Player&);

    // vIndex: 4
    virtual ::EventResult onLevelRemovedActor(::Actor& actor);

    // vIndex: 5
    virtual ::EventResult onLevelTick(::Level&);

    // vIndex: 6
    virtual ::EventResult onLevelTickStart(::Level&);

    // vIndex: 7
    virtual ::EventResult onLevelTickEnd(::Level&);

    // vIndex: 8
    virtual ::EventResult onLevelWeatherChange(::std::string const&, bool, bool, bool, bool);

    // vIndex: 9
    virtual ::EventResult onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onLevelInitialized(::Level& level);

    MCAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCAPI ::EventResult $onLevelRemovedPlayer(::Player&);

    MCAPI ::EventResult $onLevelRemovedActor(::Actor& actor);

    MCAPI ::EventResult $onLevelTick(::Level&);

    MCAPI ::EventResult $onLevelTickStart(::Level&);

    MCAPI ::EventResult $onLevelTickEnd(::Level&);

    MCAPI ::EventResult $onLevelWeatherChange(::std::string const&, bool, bool, bool, bool);

    MCAPI ::EventResult $onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND
};
