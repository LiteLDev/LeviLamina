#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTeleportOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>>
                                                       mDimension;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mRotation;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mKeepVelocity;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mFacingLocation;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mCheckForBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTeleportOptions& operator=(ScriptTeleportOptions const&);
    ScriptTeleportOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTeleportOptions(::ScriptModuleMinecraft::ScriptTeleportOptions const&);

    MCAPI ~ScriptTeleportOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTeleportOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
