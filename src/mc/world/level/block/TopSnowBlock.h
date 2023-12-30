#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
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
    TopSnowBlock& operator=(TopSnowBlock const&);
    TopSnowBlock(TopSnowBlock const&);
    TopSnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TopSnowBlock@@UEAA@XZ
    virtual ~TopSnowBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@TopSnowBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@TopSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 11, symbol: ?getVisualShape@TopSnowBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

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

    // vIndex: 32, symbol: ?isWaterBlocking@TopSnowBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

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

    // vIndex: 56, symbol: ?canContainLiquid@TopSnowBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@TopSnowBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 75, symbol: ?isPreservingMediumWhenPlaced@TopSnowBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 85, symbol: ?mayPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 87, symbol:
    // ?tryToPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
    virtual bool tryToPlace(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@TopSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 92, symbol: ?neighborChanged@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 94, symbol: ?playerWillDestroy@TopSnowBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 98, symbol: ?getPlacementBlock@TopSnowBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 103, symbol: ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const&) const;

    // vIndex: 104, symbol: ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 108, symbol: ?shouldStopFalling@TopSnowBlock@@UEBA_NAEAVActor@@@Z
    virtual bool shouldStopFalling(class Actor& entity) const;

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

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 145, symbol: ?onExploded@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 147, symbol: ?onPlace@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?randomTick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 164, symbol: ?getResourceItem@TopSnowBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance
    getResourceItem(class Randomize& random, class Block const& block, int bonusLootLevel) const;

    // vIndex: 165, symbol: ?getResourceCount@TopSnowBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& random, class Block const& block, int bonusLootLevel) const;

    // vIndex: 168, symbol: ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 169, symbol:
    // ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: ?isFreeToFall@TopSnowBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 173, symbol: ?startFalling@TopSnowBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // symbol: ?canBeDestroyedByWaterSpread@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@TopSnowBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?canHaveExtraData@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool canHaveExtraData() const;

    // symbol: ?waterSpreadCausesSpawn@TopSnowBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0TopSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI TopSnowBlock(std::string const&, int, bool);

    // symbol: ?getResourceItemFromFalling@TopSnowBlock@@QEBA?AVItemInstance@@XZ
    MCAPI class ItemInstance getResourceItemFromFalling() const;

    // symbol: ?melt@TopSnowBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI bool melt(class BlockSource& region, class BlockPos const& pos, int meltHeight) const;

    // symbol: ?startFallingIfLostSupport@TopSnowBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void startFallingIfLostSupport(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ?buildSnowBlock@TopSnowBlock@@SAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@H_N@Z
    MCAPI static class Block const&
    buildSnowBlock(class BlockSource& region, class BlockPos const& pos, int height, bool additive);

    // symbol: ?getCoveredBlock@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class Block const& getCoveredBlock(class BlockSource const& region, class BlockPos const& pos);

    // symbol: ?getSnowBlockToBuild@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@H_N@Z
    MCAPI static class Block const& getSnowBlockToBuild(class BlockSource const&, class BlockPos const&, int, bool);

    // symbol: ?HALF_HEIGHT@TopSnowBlock@@2HB
    MCAPI static int const HALF_HEIGHT;

    // symbol: ?HEIGHT_IMPASSABLE@TopSnowBlock@@2HB
    MCAPI static int const HEIGHT_IMPASSABLE;

    // symbol: ?MAX_HEIGHT@TopSnowBlock@@2HB
    MCAPI static int const MAX_HEIGHT;

    // symbol: ?TOP_SNOW_JAVA_PARITY_VERSION@TopSnowBlock@@2VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const TOP_SNOW_JAVA_PARITY_VERSION;

    // symbol: ?TOP_SNOW_LAYER_HEIGHT@TopSnowBlock@@2MB
    MCAPI static float const TOP_SNOW_LAYER_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canBeBuiltOver@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBVBlockItem@@@Z
    MCAPI bool _canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const*) const;

    // symbol: ?_canSurvive@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSurvive(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND
};
