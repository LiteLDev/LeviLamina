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

class NyliumBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    NyliumBlock& operator=(NyliumBlock const&);
    NyliumBlock(NyliumBlock const&);
    NyliumBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NyliumBlock@@UEAA@XZ
    virtual ~NyliumBlock() = default;

    // vIndex: 79, symbol:
    // ?onFertilized@NyliumBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@NyliumBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 148, symbol: ?randomTick@NyliumBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0NyliumBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI NyliumBlock(std::string const& nameId, int id);

    // symbol: ?canBeNylium@NyliumBlock@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool canBeNylium(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?crimsonBlockProvider@NyliumBlock@@SAAEBVBlock@@AEBVRandomize@@@Z
    MCAPI static class Block const& crimsonBlockProvider(class Randomize const& randomize);

    // symbol: ?netherSproutBlockProvider@NyliumBlock@@SAAEBVBlock@@AEBVRandomize@@@Z
    MCAPI static class Block const& netherSproutBlockProvider(class Randomize const& randomize);

    // symbol: ?warpedBlockProvider@NyliumBlock@@SAAEBVBlock@@AEBVRandomize@@@Z
    MCAPI static class Block const& warpedBlockProvider(class Randomize const& randomize);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_scatterVegetation@NyliumBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@V?$function@$$A6AAEBVBlock@@AEBVRandomize@@@Z@std@@@Z
    MCAPI bool
    _scatterVegetation(class BlockSource& region, class BlockPos const& pos, class Random& random, std::function<class Block const&(class Randomize const&)>)
        const;

    // NOLINTEND
};
