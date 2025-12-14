#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptEventSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEvent {
public:
    // ScriptEventCommandMessageAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mId;
    ::ll::TypedStorage<8, 32, ::std::string>                             mMessage;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptEventSource> mSourceType;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mSourceEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mInitiatorEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mSourceBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEvent& operator=(ScriptEventCommandMessageAfterEvent const&);
    ScriptEventCommandMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCAPI ScriptEventCommandMessageAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI ~ScriptEventCommandMessageAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
