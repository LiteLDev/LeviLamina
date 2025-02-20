#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Dimension;
class Player;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk61e710;
    ::ll::UntypedStorage<4, 4>  mUnkacb8dc;
    ::ll::UntypedStorage<4, 12> mUnk8bfeb8;
    ::ll::UntypedStorage<1, 1>  mUnk272646;
    ::ll::UntypedStorage<8, 32> mUnk2632b2;
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent> bind();
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
