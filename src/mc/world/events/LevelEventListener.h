#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
class WorldClock;
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

    virtual ::EventResult onRealmsStory(::std::string const& storyData);

    virtual ::EventResult onWorldClockTimeModified(::gsl::not_null<::WorldClock*> clock);

    virtual ::EventResult onWorldClockPaused(::gsl::not_null<::WorldClock*> clock);

    virtual ::EventResult onWorldClockResumed(::gsl::not_null<::WorldClock*> clock);

    virtual ::EventResult
    onWorldClockTimeMarker(::gsl::not_null<::WorldClock*> clock, ::std::string const& timeMarkerName);

    virtual ::EventResult onEvent(::LevelNotificationEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelInitialized(::Level& level);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelRemovedActor(::Actor& actor);

    MCNAPI ::EventResult $onLevelTick(::Level& level);

    MCNAPI ::EventResult $onLevelTickStart(::Level& level);

    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    MCNAPI ::EventResult $onRealmsStory(::std::string const& storyData);

    MCNAPI ::EventResult $onWorldClockTimeModified(::gsl::not_null<::WorldClock*> clock);

    MCNAPI ::EventResult $onWorldClockPaused(::gsl::not_null<::WorldClock*> clock);

    MCNAPI ::EventResult $onWorldClockResumed(::gsl::not_null<::WorldClock*> clock);

    MCNAPI ::EventResult
    $onWorldClockTimeMarker(::gsl::not_null<::WorldClock*> clock, ::std::string const& timeMarkerName);

    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const& event);


    // NOLINTEND
};
