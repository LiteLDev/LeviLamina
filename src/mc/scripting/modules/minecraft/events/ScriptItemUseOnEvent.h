#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke9534a;
    ::ll::UntypedStorage<4, 4>  mUnk90638f;
    ::ll::UntypedStorage<4, 12> mUnkc66f2e;
    ::ll::UntypedStorage<4, 12> mUnka5a2cb;
    ::ll::UntypedStorage<8, 32> mUnk259048;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnEvent& operator=(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnEvent(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCNAPI ScriptItemUseOnEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> scriptItem,
        uchar                                                                          face,
        ::Vec3                                                                         faceLocation,
        ::BlockPos                                                                     blockPosition,
        ::BlockSource&                                                                 region,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI ~ScriptItemUseOnEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
