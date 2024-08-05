#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockInventoryComponent& operator=(ScriptBlockInventoryComponent const&);
    ScriptBlockInventoryComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockInventoryComponent() = default;

    MCAPI ScriptBlockInventoryComponent(class ScriptModuleMinecraft::ScriptBlockInventoryComponent const&);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    MCAPI class Scripting::Result<std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockInventoryComponentContainer>>>
    getOrCreateContainerV010();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockInventoryComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
