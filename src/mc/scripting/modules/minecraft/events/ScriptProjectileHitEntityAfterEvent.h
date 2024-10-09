#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent& operator=(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation getEntityHit() const;

    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
