#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4432bc;
    ::ll::UntypedStorage<8, 40> mUnkbfc0ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorApplyDamageOptions(ScriptActorApplyDamageOptions const&);
    ScriptActorApplyDamageOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(::ScriptModuleMinecraft::ScriptActorApplyDamageOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(::ScriptModuleMinecraft::ScriptActorApplyDamageOptions&&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptActorApplyDamageOptions const& other) const;

    MCAPI ~ScriptActorApplyDamageOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptActorApplyDamageOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
