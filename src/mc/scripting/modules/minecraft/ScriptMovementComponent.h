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

class ScriptMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementComponent& operator=(ScriptMovementComponent const&);
    ScriptMovementComponent(ScriptMovementComponent const&);
    ScriptMovementComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMovementComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMovementComponent();

    // symbol:
    // ?bind@ScriptMovementComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementComponent> bind();

    // symbol: ?ComponentId@ScriptMovementComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
