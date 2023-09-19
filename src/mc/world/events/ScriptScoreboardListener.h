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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol:
    // ?onObjectiveRemoved@ScriptScoreboardListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult onObjectiveRemoved(std::string const&);

    // vIndex: 3, symbol:
    // ?onScoreboardIdentityRemoved@ScriptScoreboardListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScoreboardId@@@Z
    virtual ::EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);

    // symbol:
    // ??0ScriptScoreboardListener@ScriptModuleMinecraft@@QEAA@V?$WeakTypedObjectHandle@VScriptScoreboard@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI explicit ScriptScoreboardListener(class Scripting::WeakTypedObjectHandle<
                                            class ScriptModuleMinecraft::ScriptScoreboard>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
