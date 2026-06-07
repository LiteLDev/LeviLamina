#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
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
        ::std::string const&                  id,
        ::std::string const&                  value,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
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
        ::std::string const&                  id,
        ::std::string const&                  value,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
