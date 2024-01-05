#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    AttributeScriptActorComponent& operator=(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AttributeScriptActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~AttributeScriptActorComponent() = default;

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 2, symbol:
    // ?getCurrent@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getCurrent() const;

    // vIndex: 3, symbol:
    // ?setCurrent@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@AEBM@Z
    virtual class Scripting::Result<bool> setCurrent(float const& value) const;

    // vIndex: 4, symbol:
    // ?getValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getValue() const;

    // vIndex: 5, symbol:
    // ?getEffectiveMinValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getEffectiveMinValue() const;

    // vIndex: 6, symbol:
    // ?getEffectiveMaxValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getEffectiveMaxValue() const;

    // vIndex: 7, symbol:
    // ?resetToMinValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8, symbol:
    // ?resetToMaxValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9, symbol:
    // ?resetToDefaultValue@AttributeScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> resetToDefaultValue() const;

    // symbol:
    // ?bind@AttributeScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VAttributeScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::AttributeScriptActorComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
