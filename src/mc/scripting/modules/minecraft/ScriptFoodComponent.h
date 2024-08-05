#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFoodComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptFoodComponent& operator=(ScriptFoodComponent const&);
    ScriptFoodComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptFoodComponent() = default;

    MCAPI ScriptFoodComponent(class ScriptModuleMinecraft::ScriptFoodComponent const&);

    MCAPI class Scripting::Result<bool> getCanAlwaysEat();

    MCAPI class Scripting::Result<int> getNutrition();

    MCAPI class Scripting::Result<float> getSaturationModifier();

    MCAPI class Scripting::Result<std::string> getUsingConvertsToItem();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptFoodComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
