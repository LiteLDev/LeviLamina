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

class PinkPetalsBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PinkPetalsBlock& operator=(PinkPetalsBlock const&);
    PinkPetalsBlock(PinkPetalsBlock const&);
    PinkPetalsBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PinkPetalsBlock@@UEAA@XZ
    virtual ~PinkPetalsBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@PinkPetalsBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 54, symbol: ?canBeDestroyedByWaterSpread@PinkPetalsBlock@@UEBA_NXZ
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@PinkPetalsBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 79, symbol:
    // ?onFertilized@PinkPetalsBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType) const;

    // vIndex: 81, symbol: ?canBeFertilized@PinkPetalsBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86, symbol: ?mayPlaceOn@PinkPetalsBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@PinkPetalsBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 128, symbol: ?getVariant@PinkPetalsBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 147, symbol: ?tick@PinkPetalsBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@PinkPetalsBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@PinkPetalsBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0PinkPetalsBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PinkPetalsBlock(std::string const& nameId, int id);

    // symbol: ?tryGrow@PinkPetalsBlock@@SA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool tryGrow(class BlockSource& region, class BlockPos pos);

    // NOLINTEND
};
