#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/BigDripleafTilt.h"
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

class BigDripleafBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BigDripleafBlock& operator=(BigDripleafBlock const&);
    BigDripleafBlock(BigDripleafBlock const&);
    BigDripleafBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BigDripleafBlock@@UEAA@XZ
    virtual ~BigDripleafBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BigDripleafBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BigDripleafBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17, symbol: ?onProjectileHit@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

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

    // vIndex: 32, symbol: ?isWaterBlocking@BigDripleafBlock@@UEBA_NXZ
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

    // vIndex: 56, symbol: ?canContainLiquid@BigDripleafBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@BigDripleafBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 79, symbol:
    // ?onFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 86, symbol: ?mayPlaceOn@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

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

    // vIndex: 136, symbol: ?init@BigDripleafBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167, symbol: ?entityInside@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // symbol: ?canBeSilkTouched@BigDripleafBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?waterSpreadCausesSpawn@BigDripleafBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0BigDripleafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BigDripleafBlock(std::string const& nameId, int);

    // symbol: ?placeWithRandomHeight@BigDripleafBlock@@SAXAEAVBlockSource@@AEAVRandom@@VBlockPos@@H@Z
    MCAPI static void
    placeWithRandomHeight(class BlockSource& region, class Random& random, class BlockPos, int facing);

    // symbol: ?MAX_DRIPLEAF_GROWTH_HEIGHT@BigDripleafBlock@@2HB
    MCAPI static int const MAX_DRIPLEAF_GROWTH_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findHeadPos@BigDripleafBlock@@AEBA?AVBlockPos@@AEAVBlockSource@@V2@@Z
    MCAPI class BlockPos _findHeadPos(class BlockSource& region, class BlockPos pos) const;

    // symbol: ?_resetTilt@BigDripleafBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _resetTilt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_setTiltAndScheduleTick@BigDripleafBlock@@AEBAXW4BigDripleafTilt@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _setTiltAndScheduleTick(::BigDripleafTilt, class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
