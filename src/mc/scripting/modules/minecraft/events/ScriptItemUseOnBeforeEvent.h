#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseOnEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnBeforeEvent : public ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnBeforeEvent& operator=(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnBeforeEvent(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCAPI ScriptItemUseOnBeforeEvent(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);

    MCAPI ScriptItemUseOnBeforeEvent(
        ::ItemUseOnEvent const&               itemEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);

    MCAPI void*
    $ctor(::ItemUseOnEvent const& itemEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
