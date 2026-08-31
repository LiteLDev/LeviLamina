#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptPlayerBreakBlockAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mBrokenBlockPermutation;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mAfterBreakItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeBreakItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCAPI ScriptPlayerBreakBlockAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
