#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6b736e;
    ::ll::UntypedStorage<4, 4>  mUnke1f5dd;
    ::ll::UntypedStorage<8, 8>  mUnkd706fe;
    ::ll::UntypedStorage<8, 32> mUnk28175c;
    ::ll::UntypedStorage<8, 8>  mUnk4c52bc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorData& operator=(ScriptActorData const&);
    ScriptActorData(ScriptActorData const&);
    ScriptActorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptActorData(::Actor const& actor);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>
    getActor(::Scripting::WeakLifetimeScope const& scope) const;

    MCAPI ~ScriptActorData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
