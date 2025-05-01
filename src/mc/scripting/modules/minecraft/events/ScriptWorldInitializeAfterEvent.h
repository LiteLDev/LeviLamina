#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk525d87;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEvent& operator=(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptWorldInitializeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bind();

    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV010();

    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV1();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
