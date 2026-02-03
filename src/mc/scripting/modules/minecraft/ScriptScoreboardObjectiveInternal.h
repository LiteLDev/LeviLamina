#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptScoreboardObjectiveInternal {
// functions
// NOLINTBEGIN
MCAPI ::std::string getErrorMessage(
    ::ScoreboardOperationResult result,
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::std::string> const& participant
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptScoreboardObjectiveInternal
