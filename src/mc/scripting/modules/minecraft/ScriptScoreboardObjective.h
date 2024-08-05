#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/world/actor/player/PlayerScoreSetFunction.h"

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
    MCAPI
    ScriptScoreboardObjective(class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard>, std::string const&);

    MCAPI class Scripting::Result<int> addScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        int
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
             std::string> const&) const;

    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo>>
    getScores() const;

    MCAPI class Scripting::Result<bool>
    hasParticipant(std::variant<
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                   std::string> const&) const;

    MCAPI class Scripting::Result<bool>
    removeParticipant(std::variant<
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                      class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                      std::string>&);

    MCAPI class Scripting::Result<void> setScore(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
            std::string>&,
        int
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
            std::string>&,
        ::PlayerScoreSetFunction,
        int
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
