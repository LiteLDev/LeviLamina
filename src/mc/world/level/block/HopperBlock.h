#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HopperBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    HopperBlock& operator=(HopperBlock const&);
    HopperBlock(HopperBlock const&);
    HopperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HopperBlock@@UEAA@XZ
    virtual ~HopperBlock() = default;

    // vIndex: 4, symbol:
    // ?clip@HopperBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@HopperBlock@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@HopperBlock@@UEBAXAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 23, symbol: ?canProvideSupport@HopperBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 30, symbol: ?isContainerBlock@HopperBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 72, symbol: ?getRedstoneProperty@HopperBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@HopperBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95, symbol: ?asItemInstance@HopperBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@HopperBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@HopperBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@HopperBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 142, symbol: ?onRemove@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@HopperBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@HopperBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 152, symbol: ?allowStateMismatchOnPlacement@HopperBlock@@UEBA_NAEBVBlock@@0@Z
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ??0HopperBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI HopperBlock(std::string const& nameId, int id);

    // symbol: ?getAttachedOffset@HopperBlock@@SA?AVBlockPos@@E@Z
    MCAPI static class BlockPos getAttachedOffset(uchar facing);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getSpoutAABB@HopperBlock@@AEBA?AVAABB@@AEBVBlock@@@Z
    MCAPI class AABB _getSpoutAABB(class Block const&) const;

    // symbol: ?_installCircuit@HopperBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION@HopperBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
