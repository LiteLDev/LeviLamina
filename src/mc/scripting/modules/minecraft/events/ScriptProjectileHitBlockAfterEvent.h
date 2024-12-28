#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkf2c13c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const&);
    ScriptProjectileHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockHitInformation getBlockHit() const;

    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
