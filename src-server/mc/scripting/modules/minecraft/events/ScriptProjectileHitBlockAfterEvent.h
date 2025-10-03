#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf2c13c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const&);
    ScriptProjectileHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockHitInformation getBlockHit() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
