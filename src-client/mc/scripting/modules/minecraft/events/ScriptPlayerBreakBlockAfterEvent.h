#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { struct ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mBrokenBlockPermutation;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mAfterBreakItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeBreakItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEvent& operator=(ScriptPlayerBreakBlockAfterEvent const&);
    ScriptPlayerBreakBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCAPI ScriptPlayerBreakBlockAfterEvent(
        ::Player&                             player,
        ::BlockPos const&                     pos,
        ::Block const&                        destroyedBlock,
        ::ItemStackBase const&                afterBreakItem,
        ::ItemStackBase const&                beforeBreakItem,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptPlayerBreakBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCAPI void* $ctor(
        ::Player&                             player,
        ::BlockPos const&                     pos,
        ::Block const&                        destroyedBlock,
        ::ItemStackBase const&                afterBreakItem,
        ::ItemStackBase const&                beforeBreakItem,
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
