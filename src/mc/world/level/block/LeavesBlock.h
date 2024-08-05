#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
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

class LeavesBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LeavesBlock();

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 24
    virtual bool canProvideMultifaceSupport(class Block const&, uchar) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 125
    virtual bool isSeasonTinted(class Block const& block, class BlockSource& region, class BlockPos const& p) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI LeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    MCAPI class mce::Color
    getSeasonsColor(class BlockSource& region, class BlockPos const& pos, int startColumn, int endColumn) const;

    MCAPI static void runDecay(class BlockSource& region, class BlockPos const& pos, int range);

    // NOLINTEND
};
