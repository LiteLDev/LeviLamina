#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk961aae;
    ::ll::UntypedStorage<1, 1>  mUnk98e5c4;
    ::ll::UntypedStorage<4, 12> mUnkc4c569;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent(ScriptItemUseOnAfterEvent const&);
    ScriptItemUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnAfterEvent(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI ::Scripting::Result_deprecated<::BlockPos> getBlockLocation_V010() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ItemUseOnEvent const&                                                        itemEvent,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
