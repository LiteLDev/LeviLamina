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
    // vIndex: 0
    virtual ~GrassBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 89
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 99
    virtual int
    calcVariant(class BlockSource& region, class BlockPos const& pos, class mce::Color const& baseColor) const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI GrassBlock(std::string const& nameId, int id);

    MCAPI bool fertilize(class BlockSource& region, class BlockPos const& pos, class Randomize& randomize) const;

    MCAPI static struct Brightness const MIN_BRIGHTNESS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canBeGrass(class BlockSource const& region, class BlockPos const& pos) const;

    // NOLINTEND
};
