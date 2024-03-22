#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StemBlock : public ::BushBlock {
public:
    // prevent constructor by default
    StemBlock& operator=(StemBlock const&);
    StemBlock(StemBlock const&);
    StemBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StemBlock@@UEAA@XZ
    virtual ~StemBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@StemBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 29, symbol: ?isStemBlock@StemBlock@@UEBA_NXZ
    virtual bool isStemBlock() const;

    // vIndex: 56, symbol: ?canContainLiquid@StemBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol: ?onFertilized@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType fType) const;

    // vIndex: 81, symbol: ?canBeFertilized@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86, symbol: ?mayPlaceOn@StemBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@StemBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@StemBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 120, symbol: ?getColor@StemBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 121, symbol: ?getColor@StemBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // vIndex: 122, symbol: ?getColorAtPos@StemBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@StemBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0StemBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
    MCAPI StemBlock(std::string const& nameId, int id, class BlockLegacy const& fruit);

    // symbol: ?getFruitBlock@StemBlock@@QEBAAEBVBlockLegacy@@XZ
    MCAPI class BlockLegacy const& getFruitBlock() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getGrowthSpeed@StemBlock@@AEBAMAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI float getGrowthSpeed(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
