#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf3ab55;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityHitInformation& operator=(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptEntityHitInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptEntityHitInformation> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
