#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {
public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const&);
    ScriptBlock(ScriptBlock const&);
    ScriptBlock();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlock@ScriptModuleMinecraft@@QEAA@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptBlock(class BlockSource& region, class BlockPos pos, class Scripting::WeakLifetimeScope const& scope);

    // symbol:
    // ?above@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    above(int) const;

    // symbol:
    // ?below@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    below(int) const;

    // symbol: ?bottomCenter@ScriptBlock@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 bottomCenter() const;

    // symbol:
    // ?canPlace@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@4@@std@@V?$optional@W4ScriptFacing@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    canPlace(std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const& blockToPlace, std::optional<::ScriptModuleMinecraft::ScriptFacing>)
        const;

    // symbol: ?center@ScriptBlock@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 center() const;

    // symbol:
    // ?east@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    east(int) const;

    // symbol: ?getBlock@ScriptBlock@ScriptModuleMinecraft@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getBlock() const;

    // symbol:
    // ?getComponent@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VBaseScriptBlockComponent@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent(std::string const& componentName);

    // symbol:
    // ?getComponent_010@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VBaseScriptBlockComponent@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>>
    getComponent_010(std::string const& componentName);

    // symbol:
    // ?getDimension@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    // symbol:
    // ?getId_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId_010() const;

    // symbol:
    // ?getItemStack@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H_N@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getItemStack(int amount, bool withData) const;

    // symbol: ?getLocation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec3> getLocation() const;

    // symbol:
    // ?getLocation_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VBlockPos@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class BlockPos> getLocation_010() const;

    // symbol:
    // ?getPermutation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPermutation() const;

    // symbol:
    // ?getPermutation_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>
    getPermutation_010() const;

    // symbol:
    // ?getRedstonePower@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@H@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<int>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getRedstonePower() const;

    // symbol:
    // ?getTags@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<std::string>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTags() const;

    // symbol:
    // ?getTags_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getTags_010() const;

    // symbol:
    // ?getType@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getType() const;

    // symbol:
    // ?getTypeId@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::string,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTypeId() const;

    // symbol:
    // ?getType_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    // symbol:
    // ?getWaterlogged@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getWaterlogged() const;

    // symbol:
    // ?hasTag@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    hasTag(std::string const& tag) const;

    // symbol:
    // ?hasTag_010@ScriptBlock@ScriptModuleMinecraft@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasTag_010(std::string const& tag) const;

    // symbol:
    // ?isAir@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isAir() const;

    // symbol:
    // ?isLiquid@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isLiquid() const;

    // symbol:
    // ?isSolid@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSolid() const;

    // symbol:
    // ?matches@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@2@@std@@@2@@std@@@6@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
        matches(std::string, std::optional<std::unordered_map<std::string, std::variant<int, std::string, bool>>>)
            const;

    // symbol:
    // ?north@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    north(int) const;

    // symbol:
    // ?offset@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    offset(class Vec3 const&) const;

    // symbol:
    // ?setPermutation@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVScriptBlockPermutation@2@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&);

    // symbol: ?setPermutation_010@ScriptBlock@ScriptModuleMinecraft@@QEAAXAEBVScriptBlockPermutation@2@@Z
    MCAPI void setPermutation_010(class ScriptModuleMinecraft::ScriptBlockPermutation const&);

    // symbol:
    // ?setType@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setType(std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const&);

    // symbol: ?setType_010@ScriptBlock@ScriptModuleMinecraft@@QEAAXAEBVScriptBlockType@2@@Z
    MCAPI void setType_010(class ScriptModuleMinecraft::ScriptBlockType const& blockType);

    // symbol:
    // ?setWaterlogged@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@_N@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setWaterlogged(bool);

    // symbol: ?setWaterlogged_010@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setWaterlogged_010(bool);

    // symbol:
    // ?south@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    south(int) const;

    // symbol:
    // ?trySetPermutation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVScriptBlockPermutation@2@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    trySetPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&) const;

    // symbol:
    // ?west@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    west(int) const;

    // symbol:
    // ?bind@ScriptBlock@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlock> bind();

    // symbol:
    // ?setTypeStatic@ScriptBlock@ScriptModuleMinecraft@@SA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEAVBlockSource@@AEBVBlockPos@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI static class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setTypeStatic(class BlockSource&, class BlockPos const&, std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_collectTags@ScriptBlock@ScriptModuleMinecraft@@AEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlock@@@Z
    MCAPI std::vector<std::string> _collectTags(class Block const&) const;

    // symbol: ?_isValid@ScriptBlock@ScriptModuleMinecraft@@AEBA_NXZ
    MCAPI bool _isValid() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
