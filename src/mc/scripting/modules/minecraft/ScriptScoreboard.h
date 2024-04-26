#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptDisplayObjectiveSlotId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
class Objective;
class Scoreboard;
class ScoreboardIdentityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace Scripting { class WeakLifetimeScope; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard {
public:
    // prevent constructor by default
    ScriptScoreboard& operator=(ScriptScoreboard const&);
    ScriptScoreboard(ScriptScoreboard const&);
    ScriptScoreboard();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptScoreboard@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptScoreboard() = default;

    // symbol:
    // ??0ScriptScoreboard@ScriptModuleMinecraft@@QEAA@AEAVScoreboard@@AEAVLevel@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptScoreboard(class Scoreboard& scoreboard, class Level& level, class Scripting::WeakLifetimeScope const& scope);

    // symbol:
    // ?addObjective@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    addObjective(std::string const&, std::optional<std::string> const& displayName);

    // symbol:
    // ?clearObjectiveAtDisplaySlot@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@@std@@W4ScriptDisplayObjectiveSlotId@2@@Z
    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
        clearObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId);

    // symbol:
    // ?getObjective@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    getObjective(std::string const&);

    // symbol:
    // ?getObjectiveAtDisplaySlot@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$optional@VScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@@std@@W4ScriptDisplayObjectiveSlotId@2@@Z
    MCAPI std::optional<class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
          getObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId);

    // symbol:
    // ?getObjectives@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$vector@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@XZ
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
          getObjectives();

    // symbol:
    // ?getOrCreateScoreboardIdentity@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@AEBVIdentityDefinition@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(class IdentityDefinition const& identity);

    // symbol:
    // ?getParticipants@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$vector@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@XZ
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>
          getParticipants();

    // symbol:
    // ?removeObjective@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    removeObjective(std::variant<
                    class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>,
                    std::string> const&);

    // symbol:
    // ?setObjectiveAtDisplaySlot@ScriptScoreboard@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@W4ScriptDisplayObjectiveSlotId@2@AEBVScriptScoreboardObjectiveDisplayOptions@2@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>>
    setObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId, class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions const&);

    // symbol:
    // ?tryGetScoreboardParticipantIdentityRef@ScriptScoreboard@ScriptModuleMinecraft@@QEBAPEAVScoreboardIdentityRef@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class ScoreboardIdentityRef*
    tryGetScoreboardParticipantIdentityRef(std::variant<
                                           class Scripting::StrongTypedObjectHandle<
                                               class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                           class Scripting::StrongTypedObjectHandle<
                                               class ScriptModuleMinecraft::ScriptActor>,
                                           std::string> const&) const;

    // symbol:
    // ?tryGetScoreboardParticipantScoreboardId@ScriptScoreboard@ScriptModuleMinecraft@@QEBA?AV?$optional@UScoreboardId@@@std@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@Z
    MCAPI std::optional<struct ScoreboardId>
          tryGetScoreboardParticipantScoreboardId(std::variant<
                                                  class Scripting::StrongTypedObjectHandle<
                                                      class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                                  class Scripting::StrongTypedObjectHandle<
                                                      class ScriptModuleMinecraft::ScriptActor>,
                                                  std::string> const&) const;

    // symbol:
    // ?bind@ScriptScoreboard@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptScoreboard@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboard> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getOrCreateScoreboardObjective@ScriptScoreboard@ScriptModuleMinecraft@@AEAA?AV?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@AEBVObjective@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(class Objective const& objective);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
