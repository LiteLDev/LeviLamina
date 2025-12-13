#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStackBase;
class Player;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
    MCNAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCNAPI ScriptPlayerBreakBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCNAPI ScriptPlayerBreakBlockAfterEvent(
        ::Player&                             player,
        ::BlockPos const&                     pos,
        ::Block const&                        destroyedBlock,
        ::ItemStackBase const&                afterBreakItem,
        ::ItemStackBase const&                beforeBreakItem,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ~ScriptPlayerBreakBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
