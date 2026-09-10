#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Objective;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard>>
                                             mScoreboardHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjective();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptScoreboardObjective(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle,
        ::std::string const&                                                          objectiveId
    );

    MCAPI ::Scripting::Result_deprecated<int> _modifyScore(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string>&      participant,
        ::PlayerScoreSetFunction setFunction,
        int                      score
    );

    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getObjectiveId() const;

    MCAPI ::Objective* tryGetObjective() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard> scoreboardHandle,
        ::std::string const&                                                          objectiveId
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
