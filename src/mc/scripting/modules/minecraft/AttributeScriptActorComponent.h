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
    // vIndex: 0
    virtual ~AttributeScriptActorComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    // vIndex: 2
    virtual class Scripting::Result<float> getCurrent() const;

    // vIndex: 3
    virtual class Scripting::Result<bool> setCurrent(float const& value) const;

    // vIndex: 4
    virtual class Scripting::Result<float> getValue() const;

    // vIndex: 5
    virtual class Scripting::Result<float> getEffectiveMinValue() const;

    // vIndex: 6
    virtual class Scripting::Result<float> getEffectiveMaxValue() const;

    // vIndex: 7
    virtual class Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8
    virtual class Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9
    virtual class Scripting::Result<void> resetToDefaultValue() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::AttributeScriptActorComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
