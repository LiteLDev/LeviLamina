#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptTimeMarker; }
namespace ScriptModuleMinecraft { class ScriptWorldClock; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockTimeMarkerAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldClockTimeMarkerAfterEvent {
public:
    // ScriptWorldClockTimeMarkerAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldClock>> mClock;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTimeMarker>>
        mTimeMarker;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldClockTimeMarkerAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldClockTimeMarkerAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
