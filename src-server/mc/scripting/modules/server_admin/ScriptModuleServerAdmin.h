#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/Future.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
// clang-format on

namespace ScriptModuleServerAdmin {
// functions
// NOLINTBEGIN
MCNAPI bool OnTickCallback(::Scripting::Future<void()> future, ::std::shared_ptr<::AsyncVerdictPromise> networkPromisePtr);
// NOLINTEND

}
