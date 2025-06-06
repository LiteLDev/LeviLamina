#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7381f4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent& operator=(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptEntityHitInformation getEntityHit() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
