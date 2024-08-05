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
    // vIndex: 0
    virtual ~StemBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 30
    virtual bool isStemBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType fType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    // vIndex: 122
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // vIndex: 123
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI StemBlock(std::string const& nameId, int id, class BlockLegacy const& fruit);

    MCAPI class BlockLegacy const& getFruitBlock() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float getGrowthSpeed(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
