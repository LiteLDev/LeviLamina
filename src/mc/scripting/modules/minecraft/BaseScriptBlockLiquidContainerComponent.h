#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CauldronLiquidType.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"
#include "mc/scripting/modules/minecraft/ScriptFluidType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CauldronBlock;
class CauldronBlockActor;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponent(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseScriptBlockLiquidContainerComponent@@@UEAA@XZ
    virtual ~BaseScriptBlockLiquidContainerComponent();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 2, symbol:
    // ?setFillLevel@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@H@Z
    virtual class Scripting::Result<void> setFillLevel(int);

    // symbol:
    // ??0BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@QEAA@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@W4CauldronLiquidType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptFluidType@1@@Z
    MCAPI BaseScriptBlockLiquidContainerComponent(
        class BlockSource&,
        class BlockPos,
        class Scripting::WeakLifetimeScope const&,
        ::CauldronLiquidType,
        std::string const&,
        ::ScriptModuleMinecraft::ScriptFluidType
    );

    // symbol:
    // ?getFillLevel@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getFillLevel();

    // symbol: ??4BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&
    operator=(class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&&);

    // symbol: ??4BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&
    operator=(class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent const&);

    // symbol:
    // ?bind@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VBaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_isValidLiquid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@IEBA_NXZ
    MCAPI bool _isValidLiquid() const;

    // symbol:
    // ?_tryGetCauldronBlock@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@IEBAPEBVCauldronBlock@@XZ
    MCAPI class CauldronBlock const* _tryGetCauldronBlock() const;

    // symbol:
    // ?_tryGetCauldronBlockActor@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@IEAAPEAVCauldronBlockActor@@XZ
    MCAPI class CauldronBlockActor* _tryGetCauldronBlockActor();

    // symbol:
    // ?_getActualCauldronLiquidType@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@KA?AW4ScriptFluidType@2@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(class BlockSource&, class BlockPos);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
