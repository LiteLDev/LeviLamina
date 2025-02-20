#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6adf29;
    ::ll::UntypedStorage<8, 40> mUnk9a9c16;
    ::ll::UntypedStorage<8, 40> mUnkafa60d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorDamageSource& operator=(ScriptActorDamageSource const&);
    ScriptActorDamageSource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorDamageSource(::ScriptModuleMinecraft::ScriptActorDamageSource const&);

    MCAPI ~ScriptActorDamageSource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptActorDamageSource> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorDamageSource const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
