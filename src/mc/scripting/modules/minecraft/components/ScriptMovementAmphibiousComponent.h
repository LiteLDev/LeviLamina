#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementAmphibiousComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;

    virtual ~ScriptMovementAmphibiousComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding _bind();

    MCAPI static ::Scripting::ClassBinding _bindV010();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
