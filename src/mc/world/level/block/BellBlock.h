#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 17
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

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
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar face, class Vec3 const&, int) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 161
    virtual void
    _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void
    _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    MCAPI bool canConnect$(class Block const&, uchar, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const& pos, class Actor& actor) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar face, class Vec3 const&, int) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void movedByPiston$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onProjectileHit$(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
