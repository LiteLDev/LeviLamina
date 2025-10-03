#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ProjectileHitEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkeac8ea;
    ::ll::UntypedStorage<8, 32> mUnk8207ea;
    ::ll::UntypedStorage<4, 12> mUnk8e87ee;
    ::ll::UntypedStorage<4, 12> mUnkd1970c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockHitInformation& operator=(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockHitInformation(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ~ScriptBlockHitInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ProjectileHitEvent const& projectileHitEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
