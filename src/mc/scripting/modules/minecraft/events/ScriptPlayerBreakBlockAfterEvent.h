#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStackBase;
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka28136;
    ::ll::UntypedStorage<8, 32> mUnk4947a8;
    ::ll::UntypedStorage<8, 40> mUnka29e34;
    ::ll::UntypedStorage<8, 40> mUnk4f7293;
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent> bind();
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
