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

class StairBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StairBlock& operator=(StairBlock const&);
    StairBlock(StairBlock const&);
    StairBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StairBlock@@UEAA@XZ
    virtual ~StairBlock();

    // vIndex: 4, symbol:
    // ?clip@StairBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@StairBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@StairBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&       block,
        class BlockSource const& region,
        class BlockPos const&    blockPos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 9, symbol: ?getOutline@StairBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol: ?getLiquidClipVolume@StairBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@StairBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@StairBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@StairBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 72, symbol: ?getRedstoneProperty@StairBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 82, symbol: ?mayPick@StairBlock@@UEBA_NXZ
    virtual bool mayPick() const;

    // vIndex: 83, symbol: ?mayPick@StairBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 84, symbol: ?mayPlace@StairBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@StairBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 90, symbol: ?destroy@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 98, symbol: ?getPlacementBlock@StairBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 101, symbol: ?attack@StairBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@StairBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 134, symbol: ?animateTickBedrockLegacy@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 135, symbol: ?animateTick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 144, symbol: ?onRemove@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onExploded@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 146, symbol: ?onStandOn@StairBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?onPlace@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@StairBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // symbol: ?canBeSilkTouched@StairBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isStairBlock@StairBlock@@UEBA_NXZ
    MCVAPI bool isStairBlock() const;

    // symbol: ??0StairBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
    MCAPI StairBlock(std::string const&, int, class BlockLegacy const&);

    // symbol: ?setInnerPieceShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
    MCAPI bool setInnerPieceShape(
        class Block const&       block,
        class BlockSource const& region,
        class BlockPos const&    pos,
        class AABB&              shape,
        bool                     shrink
    ) const;

    // symbol: ?setStepShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
    MCAPI bool setStepShape(
        class Block const&       block,
        class BlockSource const& region,
        class BlockPos const&    pos,
        class AABB&              shape,
        bool                     shrink
    ) const;

    // symbol: ?stairDirectionToFacing@StairBlock@@SAEH@Z
    MCAPI static uchar stairDirectionToFacing(int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?shapeZFightShrink@StairBlock@@IEBAXAEAVAABB@@@Z
    MCAPI void shapeZFightShrink(class AABB& shape) const;

    // NOLINTEND
};
