#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelGameRuleChangeEvent;
struct LevelNotificationEvent;
struct LevelStartLeaveGameEvent;
struct ScriptingInitializeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener {
public:
    // prevent constructor by default
    ScriptLevelEventListener& operator=(ScriptLevelEventListener const&);
    ScriptLevelEventListener(ScriptLevelEventListener const&);
    ScriptLevelEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLevelEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onLevelInitialized(class Level& level);

    // vIndex: 2
    virtual ::EventResult onLevelAddedPlayer(class Level&, class Player& player);

    // vIndex: 3
    virtual ::EventResult onLevelRemovedPlayer(class Level&, class Player& player);

    // vIndex: 4
    virtual ::EventResult onLevelRemovedActor(class Actor&);

    // vIndex: 5
    virtual ::EventResult onLevelTick(class Level&);

    // vIndex: 6
    virtual ::EventResult onLevelTickStart(class Level&);

    // vIndex: 7
    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    // vIndex: 8
    virtual ::EventResult onEvent(struct LevelNotificationEvent const& event);

    // vIndex: 9
    virtual void __unk_vfn_9();

    // vIndex: 10
    virtual ::EventResult onEvent(struct LevelStartLeaveGameEvent const&);

    // vIndex: 11
    virtual ::EventResult onEvent(struct LevelGameRuleChangeEvent const&);

    // vIndex: 12
    virtual ::EventResult onEvent(struct ScriptingInitializeEvent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
