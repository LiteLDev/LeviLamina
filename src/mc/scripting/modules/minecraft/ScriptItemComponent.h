#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    ScriptItemComponent& operator=(ScriptItemComponent const&);
    ScriptItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptItemComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemComponent();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptItemComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemComponent(class ScriptModuleMinecraft::ScriptItemComponent const&);

    // symbol:
    // ?bind@ScriptItemComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemComponent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
