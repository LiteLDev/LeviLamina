#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {
public:
    // ScriptBlockHitInformation inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing>                                       mFace;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationRelative;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockHitInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockHitInformation(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
