#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptBlockExplodedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mSource;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mExplodedBlockPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEvent& operator=(ScriptBlockExplodedAfterEvent const&);
    ScriptBlockExplodedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCAPI ScriptBlockExplodedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCAPI ~ScriptBlockExplodedAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
