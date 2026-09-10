#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {
public:
    // ScriptItemStopUseOnAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSource;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>  mBlock;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mScriptItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemStopUseOnAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
