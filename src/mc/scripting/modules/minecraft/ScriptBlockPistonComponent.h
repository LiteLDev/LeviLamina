#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {

public:
    // prevent constructor by default
    ScriptBlockPistonComponent& operator=(ScriptBlockPistonComponent const&) = delete;
    ScriptBlockPistonComponent(ScriptBlockPistonComponent const&)            = delete;
    ScriptBlockPistonComponent()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKPISTONCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockPistonComponent();
#endif
    /**
     * @symbol
     * ?getAttachedBlocks\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<class Vec3>> getAttachedBlocks();
    /**
     * @symbol
     * ?getAttachedBlocks_V010\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<class BlockPos>> getAttachedBlocks_V010();
    /**
     * @symbol ?isExpanded\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isExpanded();
    /**
     * @symbol ?isExpanding\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isExpanding();
    /**
     * @symbol ?isMoving\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isMoving();
    /**
     * @symbol ?isRetracted\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isRetracted();
    /**
     * @symbol ?isRetracting\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isRetracting();
    /**
     * @symbol
     * ?bind\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPistonComponent> bind();
    /**
     * @symbol
     * ?tryCreate\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPistonComponent>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ?ComponentId\@ScriptBlockPistonComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
