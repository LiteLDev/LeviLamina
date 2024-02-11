#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockPistonComponent& operator=(ScriptBlockPistonComponent const&);
    ScriptBlockPistonComponent(ScriptBlockPistonComponent const&);
    ScriptBlockPistonComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockPistonComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockPistonComponent() = default;

    // symbol:
    // ?getAttachedBlocks@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getAttachedBlocks();

    // symbol:
    // ?getAttachedBlocksLocations@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<class Vec3>> getAttachedBlocksLocations();

    // symbol:
    // ?getAttachedBlocks_V010@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<class BlockPos>> getAttachedBlocks_V010();

    // symbol: ?isExpanded@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isExpanded();

    // symbol: ?isExpanding@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isExpanding();

    // symbol: ?isMoving@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isMoving();

    // symbol: ?isRetracted@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isRetracted();

    // symbol: ?isRetracting@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isRetracting();

    // symbol: ?state@ScriptBlockPistonComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@W4PistonState@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<::PistonState> state();

    // symbol:
    // ?bind@ScriptBlockPistonComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockPistonComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPistonComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol:
    // ?tryCreate@ScriptBlockPistonComponent@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockPistonComponent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPistonComponent>>
    tryCreate(class BlockSource& region, class BlockPos position, class Scripting::WeakLifetimeScope const& scope);

    // symbol: ?ComponentId@ScriptBlockPistonComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
