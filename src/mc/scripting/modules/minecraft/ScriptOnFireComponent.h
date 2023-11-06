#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptOnFireComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptOnFireComponent& operator=(ScriptOnFireComponent const&);
    ScriptOnFireComponent(ScriptOnFireComponent const&);
    ScriptOnFireComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptOnFireComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptOnFireComponent();

    // symbol: ?getOnFireTicksRemaining@ScriptOnFireComponent@ScriptModuleMinecraft@@QEBAHXZ
    MCAPI int getOnFireTicksRemaining() const;

    // symbol:
    // ?bind@ScriptOnFireComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptOnFireComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptOnFireComponent> bind();

    // symbol: ?ComponentId@ScriptOnFireComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
