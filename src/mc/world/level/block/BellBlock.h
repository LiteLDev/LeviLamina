#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BellBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BellBlock& operator=(BellBlock const&);
    BellBlock(BellBlock const&);
    BellBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BellBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 69
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& actor) const;

    MCAPI BellBlock(std::string const& nameId, int id);

    MCAPI bool hasValidAttachment(class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Block const&
    _determineAttachment(class Actor const& by, class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI short _getItemId(class BlockSource const& region, std::string_view itemName) const;

    MCAPI void _sendBellUsedEventToClient(class BlockSource const& region, class Actor const& sourceActor) const;

    MCAPI void _tryAttachToNeighbors(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& neighborPos,
        int                   updateFlags
    ) const;

    // NOLINTEND
};
