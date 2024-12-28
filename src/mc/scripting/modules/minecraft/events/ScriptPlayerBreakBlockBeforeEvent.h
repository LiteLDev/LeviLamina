#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd27cf2;
    ::ll::UntypedStorage<8, 40> mUnkc70836;
    ::ll::UntypedStorage<1, 1>  mUnkbd6f95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockBeforeEvent& operator=(ScriptPlayerBreakBlockBeforeEvent const&);
    ScriptPlayerBreakBlockBeforeEvent(ScriptPlayerBreakBlockBeforeEvent const&);
    ScriptPlayerBreakBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockBeforeEvent(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        ::ItemStackBase const&                item,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        ::ItemStackBase const&                item,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
