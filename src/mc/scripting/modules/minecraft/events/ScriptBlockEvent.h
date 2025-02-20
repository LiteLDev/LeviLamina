#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8d2e9;
    ::ll::UntypedStorage<8, 32> mUnkaeee50;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEvent& operator=(ScriptBlockEvent const&);
    ScriptBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockEvent(::ScriptModuleMinecraft::ScriptBlockEvent const&);

    MCAPI ~ScriptBlockEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
