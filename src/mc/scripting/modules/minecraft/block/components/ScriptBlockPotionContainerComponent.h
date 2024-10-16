#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPotionContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockPotionContainerComponent& operator=(ScriptBlockPotionContainerComponent const&);
    ScriptBlockPotionContainerComponent(ScriptBlockPotionContainerComponent const&);
    ScriptBlockPotionContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockPotionContainerComponent() = default;

    MCAPI class Scripting::Result<void> setPotionType(class ScriptModuleMinecraft::ScriptItemStack const& item);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
