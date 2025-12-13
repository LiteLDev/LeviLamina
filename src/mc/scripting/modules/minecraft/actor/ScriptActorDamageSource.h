#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    MCNAPI ScriptActorDamageSource(::ScriptModuleMinecraft::ScriptActorDamageSource const&);

    MCNAPI ~ScriptActorDamageSource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorDamageSource const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
