#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BubbleColumnBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BubbleColumnBlock& operator=(BubbleColumnBlock const&);
    BubbleColumnBlock(BubbleColumnBlock const&);
    BubbleColumnBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BubbleColumnBlock@@UEAA@XZ
    virtual ~BubbleColumnBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BubbleColumnBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@BubbleColumnBlock@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@BubbleColumnBlock@@UEBAXAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 56, symbol: ?canContainLiquid@BubbleColumnBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 57, symbol: ?getRequiredMedium@BubbleColumnBlock@@UEBA?AV?$optional@VHashedString@@@std@@XZ
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 61, symbol: ?checkIsPathable@BubbleColumnBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 75, symbol: ?isPreservingMediumWhenPlaced@BubbleColumnBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 83, symbol: ?mayPick@BubbleColumnBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 92, symbol: ?neighborChanged@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@BubbleColumnBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145, symbol: ?onPlace@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146, symbol: ?shouldTickOnSetBlock@BubbleColumnBlock@@UEBA_NXZ
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 147, symbol: ?tick@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@BubbleColumnBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0BubbleColumnBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BubbleColumnBlock(std::string const& nameId, int id);

    // symbol: ?addBubbleColumnSegment@BubbleColumnBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool addBubbleColumnSegment(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?shouldDragDown@BubbleColumnBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool shouldDragDown(class Block const& block);

    // symbol: ?spawnBubbles@BubbleColumnBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void spawnBubbles(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createParticles@BubbleColumnBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI static void _createParticles(class BlockSource&, class BlockPos const&, class Random&, bool);

    // symbol: ?_getFlowDownward@BubbleColumnBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _getFlowDownward(class Block const&);

    // NOLINTEND
};
