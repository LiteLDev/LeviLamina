#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
class ScoreboardEventListener;
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener : public ::ScoreboardEventListener {
public:
    // prevent constructor by default
    ScriptScoreboardListener& operator=(ScriptScoreboardListener const&);
    ScriptScoreboardListener(ScriptScoreboardListener const&);
    ScriptScoreboardListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptScoreboardListener() = default;

    // vIndex: 2
    virtual ::EventResult onObjectiveRemoved(std::string const& objective);

    // vIndex: 3
    virtual ::EventResult onScoreboardIdentityRemoved(struct ScoreboardId const& id);

    MCAPI explicit ScriptScoreboardListener(
        class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void*
    ctor$(class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle);

    MCAPI ::EventResult onObjectiveRemoved$(std::string const& objective);

    MCAPI ::EventResult onScoreboardIdentityRemoved$(struct ScoreboardId const& id);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
