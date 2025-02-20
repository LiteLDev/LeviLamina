#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkeac8ea;
    ::ll::UntypedStorage<8, 32> mUnk8207ea;
    ::ll::UntypedStorage<4, 12> mUnk26eb4e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockHitInformation& operator=(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockHitInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockHitInformation> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
