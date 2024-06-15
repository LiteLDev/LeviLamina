#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"
#include "mc/scripting/modules/minecraft/ScriptFluidType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CauldronBlockActor;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponent& operator=(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~BaseScriptBlockLiquidContainerComponent() = default;

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 2, symbol:
    // ?setFillLevel@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@H@Z
    virtual class Scripting::Result<void> setFillLevel(int level);

    // symbol:
    // ?getFillLevel@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getFillLevel();

    // symbol:
    // ?bind@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VBaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_tryGetCauldronBlockActor@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@IEAAPEAVCauldronBlockActor@@XZ
    MCAPI class CauldronBlockActor* _tryGetCauldronBlockActor();

    // symbol:
    // ?_getActualCauldronLiquidType@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@KA?AW4ScriptFluidType@2@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(class BlockSource& region, class BlockPos position);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
