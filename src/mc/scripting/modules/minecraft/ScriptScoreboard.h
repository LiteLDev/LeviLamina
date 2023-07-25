#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace ScriptModuleMinecraft { enum class ScriptDisplayObjectiveSlotId; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARD
public:
    ScriptScoreboard& operator=(ScriptScoreboard const&) = delete;
    ScriptScoreboard(ScriptScoreboard const&)            = delete;
    ScriptScoreboard()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARD
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptScoreboard();
#endif
    /**
     * @symbol
     * ??0ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA\@AEAVScoreboard\@\@AEAVLevel\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptScoreboard(class Scoreboard&, class Level&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?addObjective\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    addObjective(std::string const&, std::string const&);
    /**
     * @symbol
     * ?clearObjectiveAtDisplaySlot\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@W4ScriptDisplayObjectiveSlotId\@2\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
        clearObjectiveAtDisplaySlot(enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId);
    /**
     * @symbol
     * ?getObjective\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    getObjective(std::string const&);
    /**
     * @symbol
     * ?getObjectiveAtDisplaySlot\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@VScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@W4ScriptDisplayObjectiveSlotId\@2\@\@Z
     */
    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
        getObjectiveAtDisplaySlot(enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId);
    /**
     * @symbol
     * ?getObjectives\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>>
    getObjectives();
    /**
     * @symbol
     * ?getOrCreateScoreboardIdentity\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVIdentityDefinition\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(class IdentityDefinition const&);
    /**
     * @symbol
     * ?getParticipants\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
    getParticipants();
    /**
     * @symbol ?removeIdentityById\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void removeIdentityById(struct ScoreboardId const&);
    /**
     * @symbol
     * ?removeObjective\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<bool>
    removeObjective(class std::variant<
                    class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>,
                    std::string> const&);
    /**
     * @symbol
     * ?removeObjectiveByName\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeObjectiveByName(std::string const&);
    /**
     * @symbol
     * ?setObjectiveAtDisplaySlot\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@W4ScriptDisplayObjectiveSlotId\@2\@AEBVScriptScoreboardObjectiveDisplayOptions\@2\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    setObjectiveAtDisplaySlot(enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId, class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions const&);
    /**
     * @symbol
     * ?tryGetScoreboardParticipantIdentityRef\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEBAPEAVScoreboardIdentityRef\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef*
    tryGetScoreboardParticipantIdentityRef(class std::variant<
                                           class Scripting::StrongTypedObjectHandle<
                                               class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                           class Scripting::StrongTypedObjectHandle<
                                               class ScriptModuleMinecraft::ScriptActor>,
                                           std::string> const&) const;
    /**
     * @symbol
     * ?tryGetScoreboardParticipantScoreboardId\@ScriptScoreboard\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UScoreboardId\@\@\@std\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@4\@\@Z
     */
    MCAPI class std::optional<struct ScoreboardId>
    tryGetScoreboardParticipantScoreboardId(class std::variant<
                                            class Scripting::StrongTypedObjectHandle<
                                                class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                            class Scripting::StrongTypedObjectHandle<
                                                class ScriptModuleMinecraft::ScriptActor>,
                                            std::string> const&) const;
    /**
     * @symbol
     * ?bind\@ScriptScoreboard\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptScoreboard\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboard> bind();

    // private:
    /**
     * @symbol
     * ?_getOrCreateScoreboardObjective\@ScriptScoreboard\@ScriptModuleMinecraft\@\@AEAA?AV?$StrongTypedObjectHandle\@VScriptScoreboardObjective\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVObjective\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(class Objective const&);

private:
};

}; // namespace ScriptModuleMinecraft
