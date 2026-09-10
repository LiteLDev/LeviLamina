#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
public:
    // ScriptServerMessageAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptServerMessageIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 32, ::std::string> mValue;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
        mPlayerHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent& operator=(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptServerMessageAfterEvent(::ScriptModuleMinecraft::ScriptServerMessageAfterEvent const&);

    MCAPI ScriptServerMessageAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptServerMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    MCAPI ~ScriptServerMessageAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptServerMessageAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
