#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CauldronBlockActor;
enum class CauldronLiquidType;
namespace ScriptModuleMinecraft { enum class ScriptFluidType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent {

public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponent(BaseScriptBlockLiquidContainerComponent const&) = delete;
    BaseScriptBlockLiquidContainerComponent()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?_isValid\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?setFillLevel\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@UEAA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    virtual class Scripting::Result<void> setFillLevel(int); // NOLINT
    /**
     * @symbol
     * ??0BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@QEAA\@AEAVBlockSource\@\@VBlockPos\@\@AEBVWeakLifetimeScope\@Scripting\@\@W4CauldronLiquidType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptFluidType\@1\@\@Z
     */
    MCAPI BaseScriptBlockLiquidContainerComponent(
        class BlockSource&,
        class BlockPos,
        class Scripting::WeakLifetimeScope const&,
        enum class CauldronLiquidType,
        std::string const&,
        enum class ScriptModuleMinecraft::ScriptFluidType
    ); // NOLINT
    /**
     * @symbol
     * ?getFillLevel\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getFillLevel(); // NOLINT
    /**
     * @symbol ??4BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&
    operator=(class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent const&); // NOLINT
    /**
     * @symbol ??4BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&
    operator=(class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent&&); // NOLINT
    /**
     * @symbol
     * ?bind\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VBaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind(); // NOLINT

    // protected:
    /**
     * @symbol ?_isValidLiquid\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@IEBA_NXZ
     */
    MCAPI bool _isValidLiquid() const; // NOLINT
    /**
     * @symbol
     * ?_tryGetCauldronBlockActor\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@IEAAPEAVCauldronBlockActor\@\@XZ
     */
    MCAPI class CauldronBlockActor* _tryGetCauldronBlockActor(); // NOLINT
    /**
     * @symbol
     * ?_getActualCauldronLiquidType\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@KA?AW4ScriptFluidType\@2\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static enum class ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(class BlockSource&, class BlockPos); // NOLINT

protected:
};

}; // namespace ScriptModuleMinecraft
