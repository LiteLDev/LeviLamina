#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // ScriptItemUseOnAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSource;
    ::ll::TypedStorage<1, 1, bool>    mIsFirstEvent;
    ::ll::TypedStorage<4, 12, ::Vec3> mBlockPositionV010;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                              scope
    );

    MCAPI ScriptItemUseOnAfterEvent(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                              scope
    );

    MCAPI void* $ctor(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
