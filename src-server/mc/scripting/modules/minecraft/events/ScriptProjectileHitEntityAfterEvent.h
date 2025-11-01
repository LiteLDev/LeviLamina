#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptEntityHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptEntityHitInformation> mEntityHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent& operator=(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCAPI ::ScriptModuleMinecraft::ScriptEntityHitInformation getEntityHit() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
    // NOLINTEND

};

}
