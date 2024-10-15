#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"

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
    // vIndex: 0
    virtual ~ScriptScoreboard() = default;

    MCAPI
    ScriptScoreboard(class Scoreboard& scoreboard, class Level& level, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    addObjective(std::string const& objectiveId, std::optional<std::string> const& displayName);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    clearObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
    getObjective(std::string const& objectiveId);

    MCAPI std::optional<class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
          getObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>
          getObjectives();

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(class IdentityDefinition const& identity);

    MCAPI class ScoreboardIdentityRef* getOrCreateScoreboardIdentityRef(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string> const& participant
    );

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>
          getParticipants();

    MCAPI class Scoreboard& getScoreboard();

    MCAPI void removeIdentityById(struct ScoreboardId const& id);

    MCAPI class Scripting::Result<bool>
    removeObjective(std::variant<
                    class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>,
                    std::string> const& objectiveId);

    MCAPI void removeObjectiveByName(std::string const& objective);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>>>
    setObjectiveAtDisplaySlot(
        ::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId                       displaySlotId,
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions const& displaySetting
    );

    MCAPI class Objective* tryGetObjective(std::string const& objectiveId) const;

    MCAPI class ScoreboardIdentityRef* tryGetScoreboardParticipantIdentityRef(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string> const& participant
    ) const;

    MCAPI std::optional<struct ScoreboardId> tryGetScoreboardParticipantScoreboardId(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string> const& participant
    ) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboard> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(class Objective const& objective);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(class Scoreboard& scoreboard, class Level& level, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
