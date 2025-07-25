#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelGameRuleChangeEvent;
struct ScriptingWorldInitializeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk207210;
    ::ll::UntypedStorage<8, 16> mUnk1938c0;
    ::ll::UntypedStorage<1, 1>  mUnk452ca9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLevelEventListener& operator=(ScriptLevelEventListener const&);
    ScriptLevelEventListener(ScriptLevelEventListener const&);
    ScriptLevelEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual ::EventResult onEvent(::LevelGameRuleChangeEvent const& event) /*override*/;

    // vIndex: 11
    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent) /*override*/;

    // vIndex: 5
    virtual ::EventResult onLevelTick(::Level&) /*override*/;

    // vIndex: 2
    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;

    // vIndex: 3
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;

    // vIndex: 8
    virtual ::EventResult onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    ) /*override*/;

    // vIndex: 4
    virtual ::EventResult onLevelRemovedActor(::Actor& actor) /*override*/;

    // vIndex: 0
    virtual ~ScriptLevelEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const& event);

    MCNAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent);

    MCNAPI ::EventResult $onLevelTick(::Level&);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    MCNAPI ::EventResult $onLevelRemovedActor(::Actor& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
