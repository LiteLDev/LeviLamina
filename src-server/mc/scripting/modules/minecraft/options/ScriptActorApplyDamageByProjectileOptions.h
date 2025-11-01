#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    ScriptActorApplyDamageByProjectileOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorApplyDamageByProjectileOptions(::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& other) const;

    MCNAPI ~ScriptActorApplyDamageByProjectileOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
