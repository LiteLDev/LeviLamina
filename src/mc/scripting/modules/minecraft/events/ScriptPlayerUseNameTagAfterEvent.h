#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerUseNameTagAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                                                                                          mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntityNamed;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                             mPreviousName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mNewName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerUseNameTagAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerUseNameTagAfterEvent(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCAPI ~ScriptPlayerUseNameTagAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
