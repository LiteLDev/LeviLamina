#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptHealthComponent& operator=(ScriptHealthComponent const&);
    ScriptHealthComponent(ScriptHealthComponent const&);
    ScriptHealthComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptHealthComponent() = default;

    // vIndex: 3
    virtual class Scripting::Result<bool> setCurrent(float const& value) const;

    // vIndex: 7
    virtual class Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8
    virtual class Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9
    virtual class Scripting::Result<void> resetToDefaultValue() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealthComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCAPI static char const* ComponentId;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void notifyHealthChange(float oldValue, float newValue) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
