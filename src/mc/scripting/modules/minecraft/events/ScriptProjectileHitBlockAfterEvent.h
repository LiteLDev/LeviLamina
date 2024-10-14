#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const&);
    ScriptProjectileHitBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitBlockAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation getBlockHit() const;

    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
