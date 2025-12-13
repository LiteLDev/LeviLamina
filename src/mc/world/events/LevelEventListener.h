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
    MCNAPI ::EventResult $onLevelInitialized(::Level& level);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedActor(::Actor& actor);

    MCNAPI ::EventResult $onLevelTick(::Level&);

    MCNAPI ::EventResult $onLevelTickStart(::Level&);

    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI ::EventResult $onLevelWeatherChange(::std::string const&, bool, bool, bool, bool);

    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const& event);


    // NOLINTEND
};
