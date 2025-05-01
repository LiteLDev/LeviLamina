#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk232874;
    ::ll::UntypedStorage<8, 40> mUnkbfc0ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorApplyDamageOptions& operator=(ScriptActorApplyDamageOptions const&);
    ScriptActorApplyDamageOptions(ScriptActorApplyDamageOptions const&);
    ScriptActorApplyDamageOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorApplyDamageOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptActorApplyDamageOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
