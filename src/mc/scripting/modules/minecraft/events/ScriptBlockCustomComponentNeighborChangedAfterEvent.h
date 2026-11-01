#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
struct NeighborChange;
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentNeighborChangedAfterEventIntermediateStorage; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentNeighborChangedAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentNeighborChangedAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNeighborChangedAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::Bedrock::small_vector<::NeighborChange, 6>> mChanges;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentNeighborChangedAfterEvent&
    operator=(ScriptBlockCustomComponentNeighborChangedAfterEvent const&);
    ScriptBlockCustomComponentNeighborChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentNeighborChangedAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNeighborChangedAfterEvent const&
    );

    MCNAPI ScriptBlockCustomComponentNeighborChangedAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNeighborChangedAfterEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                                  scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentNeighborChangedAfterEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNeighborChangedAfterEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
