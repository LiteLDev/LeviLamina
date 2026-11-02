#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemUseAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseBeforeEvent(
        ::Player const&                       player,
        ::ItemUseEvent const&                 itemEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );
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
    MCNAPI void*
    $ctor(::Player const& player, ::ItemUseEvent const& itemEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
