#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TopSnowBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    TopSnowBlock& operator=(TopSnowBlock const&) = delete;
    TopSnowBlock(TopSnowBlock const&)            = delete;
    TopSnowBlock()                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol:
    // ?getCollisionShape@TopSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    getCollisionShape(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?getAABB@TopSnowBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 12, symbol: ?getVisualShape@TopSnowBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

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

    // vIndex: 37, symbol: ?isWaterBlocking@TopSnowBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

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

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canContainLiquid@TopSnowBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 71, symbol: ?checkIsPathable@TopSnowBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 86, symbol: ?isPreservingMediumWhenPlaced@TopSnowBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 94, symbol: ?mayPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 96, symbol:
    // ?tryToPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
    virtual bool
    tryToPlace(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*)
        const;

    // vIndex: 98, symbol: ?breaksFallingBlocks@TopSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 101, symbol: ?neighborChanged@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 103, symbol: ?playerWillDestroy@TopSnowBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@TopSnowBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 114, symbol: ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const&) const;

    // vIndex: 115, symbol: ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const;

    // vIndex: 122, symbol: ?shouldStopFalling@TopSnowBlock@@UEBA_NAEAVActor@@@Z
    virtual bool shouldStopFalling(class Actor&) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 160, symbol: ?onExploded@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 169, symbol: ?randomTick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 184, symbol: ?playerDestroy@TopSnowBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 185, symbol: ?getResourceItem@TopSnowBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 186, symbol: ?getResourceCount@TopSnowBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;

    // vIndex: 192, symbol: ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 193, symbol:
    // ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 194, symbol: __unk_vfn_194
    virtual void __unk_vfn_194();

    // vIndex: 196, symbol: ?isFreeToFall@TopSnowBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isFreeToFall(class BlockSource&, class BlockPos const&) const;

    // vIndex: 197, symbol: ?startFalling@TopSnowBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void startFalling(class BlockSource&, class BlockPos const&, class Block const&, bool) const;

    // symbol: ?canBeDestroyedByWaterSpread@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@TopSnowBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?canHaveExtraData@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool canHaveExtraData() const;

    // symbol: ?waterSpreadCausesSpawn@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0TopSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TopSnowBlock(std::string const&, int);

    // symbol: ?getResourceItemFromFalling@TopSnowBlock@@QEBA?AVItemInstance@@XZ
    MCAPI class ItemInstance getResourceItemFromFalling() const;

    // symbol: ?melt@TopSnowBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI bool melt(class BlockSource&, class BlockPos const&, int) const;

    // symbol: ?startFallingIfLostSupport@TopSnowBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void startFallingIfLostSupport(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ?buildSnowBlock@TopSnowBlock@@SAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@H_N@Z
    MCAPI static class Block const& buildSnowBlock(class BlockSource&, class BlockPos const&, int, bool);

    // symbol: ?getCoveredBlock@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class Block const& getCoveredBlock(class BlockSource const&, class BlockPos const&);

    // symbol: ?getSnowBlockToBuild@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@H_N@Z
    MCAPI static class Block const& getSnowBlockToBuild(class BlockSource const&, class BlockPos const&, int, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canBeBuiltOver@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBVBlockItem@@@Z
    MCAPI bool _canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const*) const;

    // symbol: ?_canSurvive@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSurvive(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND
};
