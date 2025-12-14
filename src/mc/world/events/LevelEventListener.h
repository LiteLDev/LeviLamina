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

    virtual ::EventResult onLevelRemovedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedActor(::Actor& actor);

    virtual ::EventResult onLevelTick(::Level&);

    virtual ::EventResult onLevelTickStart(::Level&);

    virtual ::EventResult onLevelTickEnd(::Level&);

    virtual ::EventResult onLevelWeatherChange(::std::string const&, bool, bool, bool, bool);

    virtual ::EventResult onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onLevelInitialized(::Level& level);

    MCFOLD ::EventResult $onLevelAddedPlayer(::Player& player);

    MCFOLD ::EventResult $onLevelRemovedPlayer(::Player&);

    MCFOLD ::EventResult $onLevelRemovedActor(::Actor& actor);

    MCFOLD ::EventResult $onLevelTick(::Level&);

    MCFOLD ::EventResult $onLevelTickStart(::Level&);

    MCFOLD ::EventResult $onLevelTickEnd(::Level&);

    MCFOLD ::EventResult $onLevelWeatherChange(::std::string const&, bool, bool, bool, bool);

    MCFOLD ::EventResult $onEvent(::LevelNotificationEvent const& event);


    // NOLINTEND
};
