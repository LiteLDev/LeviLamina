#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent {
public:
    // ScriptPlayerInteractWithBlockAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mAfterItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptPlayerInteractWithBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCNAPI ScriptPlayerInteractWithBlockAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope&                                                                  scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope&                                                                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
