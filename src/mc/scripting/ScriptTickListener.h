#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
// clang-format on

class ScriptTickListener {
public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onLevelRemovedPlayer(class Level&, class Player& player);

    MCVAPI void onLevelTickEnd();

    MCVAPI void onRunAsyncJobs();

    MCAPI ScriptTickListener(
        class Scripting::ScriptEngine&   scriptEngine,
        class ScriptAsyncJobCoordinator& asyncJobCoordinator,
        class ScriptFormPromiseTracker&  formPromiseTracker
    );

    // NOLINTEND
};
