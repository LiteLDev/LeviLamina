#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8112da;
    ::ll::UntypedStorage<4, 4>  mUnk44f2d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityRaycastHit& operator=(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptEntityRaycastHit();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptEntityRaycastHit> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
