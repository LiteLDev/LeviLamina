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

class CherrySaplingBlock : public ::BushBlock {
public:
    // prevent constructor by default
    CherrySaplingBlock& operator=(CherrySaplingBlock const&);
    CherrySaplingBlock(CherrySaplingBlock const&);
    CherrySaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CherrySaplingBlock@@UEAA@XZ
    virtual ~CherrySaplingBlock() = default;

    // vIndex: 56, symbol: ?canContainLiquid@CherrySaplingBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@CherrySaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@CherrySaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 85, symbol: ?mayPlace@CherrySaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@CherrySaplingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154, symbol: ?getRenderLayer@CherrySaplingBlock@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@CherrySaplingBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // symbol: ??0CherrySaplingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CherrySaplingBlock(std::string const& nameId, int id);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?advanceTree@CherrySaplingBlock@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
    MCAPI bool
    advanceTree(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_growTree@CherrySaplingBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool
    _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random, bool useRandom) const;

    // NOLINTEND
};
