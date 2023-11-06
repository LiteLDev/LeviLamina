#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptUnderwaterMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptUnderwaterMovementComponent& operator=(ScriptUnderwaterMovementComponent const&);
    ScriptUnderwaterMovementComponent(ScriptUnderwaterMovementComponent const&);
    ScriptUnderwaterMovementComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptUnderwaterMovementComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptUnderwaterMovementComponent();

    // symbol:
    // ?bind@ScriptUnderwaterMovementComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptUnderwaterMovementComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptUnderwaterMovementComponent>
    bind();

    // symbol: ?ComponentId@ScriptUnderwaterMovementComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
