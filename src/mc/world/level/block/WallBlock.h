#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WallConnectionType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WallBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WallBlock& operator=(WallBlock const&);
    WallBlock(WallBlock const&);
    WallBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WallBlock@@UEAA@XZ
    virtual ~WallBlock();

    // vIndex: 4, symbol:
    // ?clip@WallBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@WallBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol: ?getLiquidClipVolume@WallBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@WallBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@WallBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar, class Block const&) const;

    // vIndex: 36, symbol: ?isWallBlock@WallBlock@@UEBA_NXZ
    virtual bool isWallBlock() const;

    // vIndex: 56, symbol: ?canContainLiquid@WallBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 69, symbol: ?onStructureBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 70, symbol: ?onStructureNeighborBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@WallBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 92, symbol: ?neighborChanged@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@WallBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@WallBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@WallBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@WallBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@WallBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 159, symbol: ?getMapColor@WallBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
    MCAPI WallBlock(std::string const& nameId, int id, class BlockLegacy const& baseBlock);

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI WallBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?tryFixWallStates@WallBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void tryFixWallStates(class BlockSource& region, class BlockPos const& pos, int updateFlags) const;

    // symbol: ?POST_HEIGHT@WallBlock@@2MB
    MCAPI static float const POST_HEIGHT;

    // symbol: ?POST_WIDTH@WallBlock@@2MB
    MCAPI static float const POST_WIDTH;

    // symbol: ?WALL_HEIGHT@WallBlock@@2MB
    MCAPI static float const WALL_HEIGHT;

    // symbol:
    // ?WALL_NAMES@WallBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0O@@std@@B
    MCAPI static std::array<std::string, 14> const WALL_NAMES;

    // symbol: ?WALL_WIDTH@WallBlock@@2MB
    MCAPI static float const WALL_WIDTH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_desiredConnectionState@WallBlock@@AEBA?AW4WallConnectionType@@AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI ::WallConnectionType
    _desiredConnectionState(class BlockSource& region, class BlockPos const& pos, uchar neighbor) const;

    // symbol: ?_isCovered@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVAABB@@@Z
    MCAPI bool _isCovered(class BlockSource& region, class BlockPos const& pos, class AABB const& testAABB) const;

    // symbol: ?_shouldBePost@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool _shouldBePost(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol: ?_tryAddToTickingQueue@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _tryAddToTickingQueue(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION@WallBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
