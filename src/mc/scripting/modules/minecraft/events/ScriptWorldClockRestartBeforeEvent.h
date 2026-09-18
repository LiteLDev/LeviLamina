#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
namespace ScriptModuleMinecraft { class ScriptWorldClock; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldClockRestartBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldClock>> mClock;
    ::ll::TypedStorage<4, 4, int>                                                                              mNewTime;
    ::ll::TypedStorage<1, 1, bool>                                                                             mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldClockRestartBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldClockRestartBeforeEvent(
        ::Bedrock::NotNullNonOwnerPtr<::WorldClock> clock,
        int                                         newTime,
        ::Scripting::WeakLifetimeScope const&       scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::WorldClock> clock, int newTime, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
