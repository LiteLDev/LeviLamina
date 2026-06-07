#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {
public:
    // ScriptWorldInitializeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPropertyRegistry>>
        mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldInitializeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::ClassBinding bindV1();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
