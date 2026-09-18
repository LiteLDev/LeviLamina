#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEquippableComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidActorError> getTotalArmor();

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidActorError> getTotalToughness();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
