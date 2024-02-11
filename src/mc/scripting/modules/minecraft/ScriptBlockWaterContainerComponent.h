#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockWaterContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockWaterContainerComponent& operator=(ScriptBlockWaterContainerComponent const&);
    ScriptBlockWaterContainerComponent(ScriptBlockWaterContainerComponent const&);
    ScriptBlockWaterContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockWaterContainerComponent() = default;

    // symbol:
    // ?addDye@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVScriptItemType@2@@Z
    MCAPI class Scripting::Result<void> addDye(class ScriptModuleMinecraft::ScriptItemType const&);

    // symbol:
    // ?getCustomColor@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@VScriptRGBA@ScriptModuleMinecraft@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptRGBA> getCustomColor();

    // symbol:
    // ?setCustomColor@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVScriptRGBA@2@@Z
    MCAPI class Scripting::Result<void> setCustomColor(class ScriptModuleMinecraft::ScriptRGBA const& color);

    // symbol:
    // ?bind@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol:
    // ?tryCreate@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockWaterContainerComponent>>
    tryCreate(class BlockSource& region, class BlockPos position, class Scripting::WeakLifetimeScope const& scope);

    // symbol: ?ComponentId@ScriptBlockWaterContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
