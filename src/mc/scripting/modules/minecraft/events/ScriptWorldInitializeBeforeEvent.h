#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc173d4;
    ::ll::UntypedStorage<8, 32> mUnk72c335;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeBeforeEvent& operator=(ScriptWorldInitializeBeforeEvent const&);
    ScriptWorldInitializeBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldInitializeBeforeEvent(::ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent const&);

    MCAPI ~ScriptWorldInitializeBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
