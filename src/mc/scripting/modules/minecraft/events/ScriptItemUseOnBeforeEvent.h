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
    ::ll::UntypedStorage<1, 1> mUnkd6a9de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnBeforeEvent& operator=(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnBeforeEvent(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);

    MCNAPI ScriptItemUseOnBeforeEvent(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCNAPI ScriptItemUseOnBeforeEvent(
        ::ItemUseOnEvent const&               itemEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCNAPI void*
    $ctor(::ItemUseOnEvent const& itemEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
