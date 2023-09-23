#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/actor/player/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Objective;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjective {
public:
    // prevent constructor by default
    ScriptScoreboardObjective& operator=(ScriptScoreboardObjective const&);
    ScriptScoreboardObjective(ScriptScoreboardObjective const&);
    ScriptScoreboardObjective();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addScore@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@AEAV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@H@Z
    MCAPI class Scripting::Result<int> addScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        int
    );

    // symbol:
    // ?getDisplayName@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getDisplayName() const;

    // symbol:
    // ?getObjectiveId@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getObjectiveId() const;

    // symbol:
    // ?getParticipants@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
    getParticipants() const;

    // symbol:
    // ?getScore@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@H@std@@$$V@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<std::optional<int>>
    getScore(std::variant<
             class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
             class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
             std::string> const&) const;

    // symbol:
    // ?getScores@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@VScriptScoreboardScoreInfo@ScriptModuleMinecraft@@V?$allocator@VScriptScoreboardScoreInfo@ScriptModuleMinecraft@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo>>
    getScores() const;

    // symbol:
    // ?hasParticipant@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    hasParticipant(std::variant<
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                   std::string> const&) const;

    // symbol: ??4ScriptScoreboardObjective@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptScoreboardObjective&
    operator=(class ScriptModuleMinecraft::ScriptScoreboardObjective&&);

    // symbol:
    // ?removeParticipant@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    removeParticipant(std::variant<
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                      std::string>&);

    // symbol:
    // ?setScore@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@H@Z
    MCAPI class Scripting::Result<void> setScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        int
    );

    // symbol: ?tryGetObjective@ScriptScoreboardObjective@ScriptModuleMinecraft@@QEBAPEAVObjective@@XZ
    MCAPI class Objective* tryGetObjective() const;

    // symbol: ??1ScriptScoreboardObjective@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptScoreboardObjective();

    // symbol:
    // ?bind@ScriptScoreboardObjective@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardObjective> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_modifyScore@ScriptScoreboardObjective@ScriptModuleMinecraft@@AEAA?AV?$Result@H$$V@Scripting@@AEAV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@W4PlayerScoreSetFunction@@H@Z
    MCAPI class Scripting::Result<int> _modifyScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        ::PlayerScoreSetFunction,
        int
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
