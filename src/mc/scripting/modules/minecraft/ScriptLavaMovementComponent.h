#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLavaMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptLavaMovementComponent& operator=(ScriptLavaMovementComponent const&);
    ScriptLavaMovementComponent(ScriptLavaMovementComponent const&);
    ScriptLavaMovementComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptLavaMovementComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptLavaMovementComponent() = default;

    // symbol:
    // ?bind@ScriptLavaMovementComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptLavaMovementComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLavaMovementComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptLavaMovementComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
