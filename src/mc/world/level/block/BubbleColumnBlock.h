#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol:
    // ?getCollisionShape@BubbleColumnBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?addCollisionShapes@BubbleColumnBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?addAABBs@BubbleColumnBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: ?canContainLiquid@BubbleColumnBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 64, symbol: ?getRequiredMedium@BubbleColumnBlock@@UEBA?AV?$optional@VHashedString@@@std@@XZ
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 70, symbol: ?checkIsPathable@BubbleColumnBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 85, symbol: ?isPreservingMediumWhenPlaced@BubbleColumnBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 91, symbol: ?mayPick@BubbleColumnBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;

    // vIndex: 100, symbol: ?neighborChanged@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 139, symbol: ?onGraphicsModeChanged@BubbleColumnBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);

    // vIndex: 147, symbol:
    // ?animateTickBedrockLegacy@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@BubbleColumnBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@BubbleColumnBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 186, symbol: ?getResourceCount@BubbleColumnBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;

    // symbol: ?shouldTickOnSetBlock@BubbleColumnBlock@@UEBA_NXZ
    MCVAPI bool shouldTickOnSetBlock() const;

    // symbol: ??0BubbleColumnBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BubbleColumnBlock(std::string const&, int);

    // symbol: ?addBubbleColumnSegment@BubbleColumnBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool addBubbleColumnSegment(class BlockSource&, class BlockPos const&);

    // symbol: ?shouldDragDown@BubbleColumnBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool shouldDragDown(class Block const&);

    // symbol: ?spawnBubbles@BubbleColumnBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void spawnBubbles(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createParticles@BubbleColumnBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI static void _createParticles(class BlockSource&, class BlockPos const&, class Random&, bool);

    // symbol: ?_getFlowDownward@BubbleColumnBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _getFlowDownward(class Block const&);

    // NOLINTEND
};
