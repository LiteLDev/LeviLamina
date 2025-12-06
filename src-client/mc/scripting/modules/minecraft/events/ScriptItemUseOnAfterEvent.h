#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSource;
    ::ll::TypedStorage<1, 1, bool>    mIsFirstEvent;
    ::ll::TypedStorage<4, 12, ::Vec3> mBlockPositionV010;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent(ScriptItemUseOnAfterEvent const&);
    ScriptItemUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnAfterEvent(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCAPI ::Scripting::Result_deprecated<::BlockPos> getBlockLocation_V010() const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
