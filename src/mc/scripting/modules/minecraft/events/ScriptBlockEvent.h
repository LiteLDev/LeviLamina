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
    MCNAPI ScriptBlockEvent(::ScriptModuleMinecraft::ScriptBlockEvent const&);

    MCNAPI ~ScriptBlockEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
