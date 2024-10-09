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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BedBlock& operator=(BedBlock const&);
    BedBlock(BedBlock const&);
    BedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BedBlock() = default;

    // vIndex: 2
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

    // vIndex: 51
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 52
    virtual class Block const& sanitizeFillBlock(class Block const& block) const;

    // vIndex: 53
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 74
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 75
    virtual bool isBounceBlock() const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 94
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 115
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 128
    virtual int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    MCAPI BedBlock(std::string const& nameId, int id);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI static std::optional<class BlockPos> findWakeupPosition(
        class BlockSource&               region,
        class BlockPos const&            pos,
        std::optional<class Vec3> const& enteredBedPos
    );

    MCAPI static bool isValidStandUpPosition(class BlockSource& region, class BlockPos const& pos);

    MCAPI static void setOccupied(class BlockSource& region, class BlockPos const& pos, bool occupied);

    MCAPI static ushort const HEAD_PIECE_DATA;

    MCAPI static ushort const OCCUPIED_DATA;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _isDangerousSpawnBlock(class Block const& block);

    // NOLINTEND
};
