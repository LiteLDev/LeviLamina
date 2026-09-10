#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/modules/minecraft/Listener.h"

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
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelGlobalEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::LevelGameRuleChangeEvent const& eventData) /*override*/;

    virtual ::EventResult onLevelTick(::Level& level) /*override*/;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& eventData);

    MCAPI ::EventResult $onEvent(::LevelGameRuleChangeEvent const& eventData);

    MCAPI ::EventResult $onLevelTick(::Level& level);

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
};

} // namespace ScriptModuleMinecraft
