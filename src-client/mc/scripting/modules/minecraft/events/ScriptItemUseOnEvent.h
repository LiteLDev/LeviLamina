#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptBlock; }
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
                                                                    mScriptItem;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationRelative;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnEvent& operator=(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnEvent(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCAPI ScriptItemUseOnEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> scriptItem,
        uchar                                                                          face,
        ::Vec3                                                                         faceLocation,
        ::BlockPos                                                                     blockPosition,
        ::BlockSource&                                                                 region,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCAPI ~ScriptItemUseOnEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> scriptItem,
        uchar                                                                          face,
        ::Vec3                                                                         faceLocation,
        ::BlockPos                                                                     blockPosition,
        ::BlockSource&                                                                 region,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
