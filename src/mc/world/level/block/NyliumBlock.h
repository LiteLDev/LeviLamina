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
    // vIndex: 0
    virtual ~NyliumBlock() = default;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI NyliumBlock(std::string const& nameId, int id);

    MCAPI bool canBeNylium(class BlockSource const& region, class BlockPos const& pos) const;

    MCAPI static class Block const& crimsonBlockProvider(class Randomize const& randomize);

    MCAPI static class Block const& netherSproutBlockProvider(class Randomize const& randomize);

    MCAPI static class Block const& warpedBlockProvider(class Randomize const& randomize);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _scatterVegetation(class BlockSource& region, class BlockPos const& pos, class Random& random, std::function<class Block const&(class Randomize const&)>)
        const;

    // NOLINTEND
};
