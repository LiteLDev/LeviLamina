#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Dimension;
class Player;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing>                                        mFace;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocation;
    ::ll::TypedStorage<1, 1, bool>    mCancel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockBeforeEvent& operator=(ScriptPlayerPlaceBlockBeforeEvent const&);
    ScriptPlayerPlaceBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerPlaceBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&&);

    MCAPI ScriptPlayerPlaceBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent const&);

    MCAPI ScriptPlayerPlaceBlockBeforeEvent(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        uchar                                 face,
        ::Vec3 const&                         faceLocation,
        ::Block const&                        permutationToPlace,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptPlayerPlaceBlockBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent const&);

    MCAPI void* $ctor(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        uchar                                 face,
        ::Vec3 const&                         faceLocation,
        ::Block const&                        permutationToPlace,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
