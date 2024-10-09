#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RespawnAnchorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RespawnAnchorBlock& operator=(RespawnAnchorBlock const&);
    RespawnAnchorBlock(RespawnAnchorBlock const&);
    RespawnAnchorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RespawnAnchorBlock() = default;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 115
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 116
    virtual void notifySpawnedAt(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& anchorBlockPos, uchar) const;

    MCAPI RespawnAnchorBlock(std::string const& nameId, int id);

    MCAPI static bool addItem(
        class Container&       fromContainer,
        int                    slot,
        class ItemStack const& item,
        class BlockSource&     region,
        class Block const&     block,
        class BlockPos const&  pos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _bumpCharge(class BlockSource& region, class BlockPos const& pos, class Player* source, short delta);

    MCAPI static void
    _explode(class Player& player, class BlockPos const& anchorBlockPos, class BlockSource& region, class Level& level);

    MCAPI static bool _trySetSpawn(
        class Player&         player,
        class BlockPos const& anchorBlockPos,
        class BlockSource&    region,
        class Level&          level
    );

    // NOLINTEND
};
