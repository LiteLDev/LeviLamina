#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptModuleStartupBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7edc14;
    ::ll::UntypedStorage<8, 32> mUnkd5888e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupBeforeEvent& operator=(ScriptModuleStartupBeforeEvent const&);
    ScriptModuleStartupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptModuleStartupBeforeEvent(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);

    MCAPI ~ScriptModuleStartupBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
