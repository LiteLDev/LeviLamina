#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCooldownComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemCooldownComponent& operator=(ScriptItemCooldownComponent const&);
    ScriptItemCooldownComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCooldownComponent() = default;

    MCAPI ScriptItemCooldownComponent(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&);

    MCAPI class Scripting::Result<std::string> getCooldownCategory();

    MCAPI class Scripting::Result<int> getCooldownTicks();

    MCAPI class Scripting::Result<int> getCooldownTicksRemaining(class ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCAPI class Scripting::Result<bool> isCooldownCategory(std::string const& category);

    MCAPI class Scripting::Result<void> startCooldown(class ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemCooldownComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
