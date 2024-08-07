#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/WeakTypedObjectHandle.h"
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

    MCAPI explicit ScriptScoreboardListener(class Scripting::WeakTypedObjectHandle<
                                            class ScriptModuleMinecraft::ScriptScoreboard>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
