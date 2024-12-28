#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageByProjectileOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk5ccbb1;
    ::ll::UntypedStorage<8, 32> mUnk4e9c54;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorApplyDamageByProjectileOptions& operator=(ScriptActorApplyDamageByProjectileOptions const&);
    ScriptActorApplyDamageByProjectileOptions(ScriptActorApplyDamageByProjectileOptions const&);
    ScriptActorApplyDamageByProjectileOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& other) const;

    MCAPI ~ScriptActorApplyDamageByProjectileOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<
        ::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
