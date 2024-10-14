#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

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
    // vIndex: 0
    virtual ~BaseScriptBlockLiquidContainerComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    // vIndex: 2
    virtual class Scripting::Result<void> setFillLevel(int level);

    MCAPI class Scripting::Result<int> getFillLevel();

    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class CauldronBlockActor* _tryGetCauldronBlockActor();

    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(class BlockSource& region, class BlockPos position);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _isValid$() const;

    MCAPI class Scripting::Result<void> setFillLevel$(int level);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
