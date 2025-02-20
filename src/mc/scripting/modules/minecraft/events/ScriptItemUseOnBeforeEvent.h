#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseOnEvent;
namespace Scripting { class WeakLifetimeScope; }
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
    ScriptItemUseOnBeforeEvent(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnBeforeEvent(
        ::ItemUseOnEvent const&               itemEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ItemUseOnEvent const& itemEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
