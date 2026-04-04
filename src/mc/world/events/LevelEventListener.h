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
    // LevelEventListener inner types define
    using EventType = ::LevelNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelEventListener() = default;

    virtual ::EventResult onLevelInitialized(::Level& level);

    virtual ::EventResult onLevelAddedPlayer(::Player& player);

    virtual ::EventResult onLevelRemovedPlayer(::Player& player);

    virtual ::EventResult onLevelRemovedActor(::Actor& actor);

    virtual ::EventResult onLevelTick(::Level& level);

    virtual ::EventResult onLevelTickStart(::Level& level);

    virtual ::EventResult onLevelTickEnd(::Level&);

    virtual ::EventResult onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    virtual ::EventResult onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onLevelInitialized(::Level& level);

    MCFOLD ::EventResult $onLevelAddedPlayer(::Player& player);

    MCFOLD ::EventResult $onLevelRemovedPlayer(::Player& player);

    MCFOLD ::EventResult $onLevelRemovedActor(::Actor& actor);

    MCFOLD ::EventResult $onLevelTick(::Level& level);

    MCFOLD ::EventResult $onLevelTickStart(::Level& level);

    MCFOLD ::EventResult $onLevelTickEnd(::Level&);

    MCFOLD ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    MCFOLD ::EventResult $onEvent(::LevelNotificationEvent const& event);


    // NOLINTEND
};
