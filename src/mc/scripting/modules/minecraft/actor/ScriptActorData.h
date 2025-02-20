#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6b736e;
    ::ll::UntypedStorage<4, 4>  mUnke1f5dd;
    ::ll::UntypedStorage<8, 8>  mUnkd706fe;
    ::ll::UntypedStorage<8, 48> mUnk90b71d;
    ::ll::UntypedStorage<8, 8>  mUnk4c52bc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorData& operator=(ScriptActorData const&);
    ScriptActorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorData(::ScriptModuleMinecraft::ScriptActorData const&);

    MCAPI explicit ScriptActorData(::Actor const& actor);

    MCAPI ::ScriptModuleMinecraft::ScriptActorData& operator=(::ScriptModuleMinecraft::ScriptActorData&&);

    MCAPI ~ScriptActorData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&);

    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
