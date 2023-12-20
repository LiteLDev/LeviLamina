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
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
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
    // vIndex: 0, symbol: ??1ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockPotionContainerComponent();

    // symbol: ??4ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent&&);

    // symbol:
    // ?setPotionType@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<void> setPotionType(class ScriptModuleMinecraft::ScriptItemStack const&);

    // symbol:
    // ?bind@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol:
    // ?tryCreate@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent>>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

    // symbol: ?ComponentId@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
