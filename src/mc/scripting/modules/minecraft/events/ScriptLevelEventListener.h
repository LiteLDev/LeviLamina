#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
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
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                   mScriptEventsHandle;
    ::ll::TypedStorage<1, 1, bool> mAfterListener;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::LevelGameRuleChangeEvent const& event) /*override*/;

    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent) /*override*/;

    virtual ::EventResult onLevelTick(::Level&) /*override*/;

    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;

    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;

    virtual ::EventResult onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    ) /*override*/;

    virtual ::EventResult onLevelRemovedActor(::Actor& actor) /*override*/;

    virtual ~ScriptLevelEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const& event);

    MCAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent);

    MCAPI ::EventResult $onLevelTick(::Level&);

    MCAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCAPI ::EventResult $onLevelRemovedPlayer(::Player& player);

    MCAPI ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    MCAPI ::EventResult $onLevelRemovedActor(::Actor& actor);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
