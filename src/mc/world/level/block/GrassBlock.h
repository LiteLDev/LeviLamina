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

class GrassBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    GrassBlock& operator=(GrassBlock const&);
    GrassBlock(GrassBlock const&);
    GrassBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrassBlock@@UEAA@XZ
    virtual ~GrassBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@GrassBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@GrassBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 79, symbol:
    // ?onFertilized@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 88, symbol: ?tryToTill@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 98, symbol: ?calcVariant@GrassBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVColor@mce@@@Z
    virtual int
    calcVariant(class BlockSource& region, class BlockPos const& pos, class mce::Color const& baseColor) const;

    // vIndex: 120, symbol: ?getColor@GrassBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 121, symbol: ?getColor@GrassBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 148, symbol: ?randomTick@GrassBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@GrassBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 159, symbol: ?getMapColor@GrassBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // symbol: ??0GrassBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GrassBlock(std::string const& nameId, int id);

    // symbol: ?fertilize@GrassBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@@Z
    MCAPI bool fertilize(class BlockSource& region, class BlockPos const& pos, class Randomize& randomize) const;

    // symbol: ?MIN_BRIGHTNESS@GrassBlock@@2UBrightness@@B
    MCAPI static struct Brightness const MIN_BRIGHTNESS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canBeGrass@GrassBlock@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canBeGrass(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?_plantGrass@GrassBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@@Z
    MCAPI bool _plantGrass(class BlockSource& region, class BlockPos const& abovePos, class Randomize& randomize) const;

    // NOLINTEND
};
