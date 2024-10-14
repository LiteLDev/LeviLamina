#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Objective;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
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
    MCAPI ScriptScoreboardObjective(
        class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle,
        std::string const&                                                                    objectiveId
    );

    MCAPI class Scripting::Result<int> addScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>& participant,
        int               scoreToAdd
    );

    MCAPI class Scripting::Result<std::string> getDisplayName() const;

    MCAPI class Scripting::Result<std::string> getObjectiveId() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
    getParticipants() const;

    MCAPI class Scripting::Result<std::optional<int>>
    getScore(std::variant<
             class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
             class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
             std::string> const& participant) const;

    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo>>
    getScores() const;

    MCAPI class Scripting::Result<bool>
    hasParticipant(std::variant<
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                   std::string> const& participant) const;

    MCAPI class Scripting::Result<bool>
    removeParticipant(std::variant<
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                      std::string>& participant);

    MCAPI class Scripting::Result<void> setScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>& participant,
        int               score
    );

    MCAPI class Objective* tryGetObjective() const;

    MCAPI ~ScriptScoreboardObjective();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardObjective> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<int> _modifyScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&        participant,
        ::PlayerScoreSetFunction setFunction,
        int                      score
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
