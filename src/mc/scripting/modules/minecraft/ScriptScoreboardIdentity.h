#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {
public:
    // prevent constructor by default
    ScriptScoreboardIdentity& operator=(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity();

public:
    // NOLINTBEGIN
    MCAPI ScriptScoreboardIdentity(
        class IdentityDefinition const&           identity,
        class Level const&                        level,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getActor() const;

    MCAPI std::string getName() const;

    MCAPI struct ScoreboardId const& getScoreboardId() const;

    MCAPI bool isValid() const;

    MCAPI ~ScriptScoreboardIdentity();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardIdentity> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
