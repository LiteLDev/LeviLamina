#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    BeehiveBlock& operator=(BeehiveBlock const&);
    BeehiveBlock(BeehiveBlock const&);
    BeehiveBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeehiveBlock() = default;

    // vIndex: 2
    virtual class Block const* getNextBlockPermutation(class Block const& currentBlock) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 106
    virtual void executeEvent(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&,
        std::string const& eventName,
        class Actor&       sourceEntity
    ) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const& block, uchar) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI BeehiveBlock(std::string const& nameId, int id);

    MCAPI void emitHoneyComb(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void evictAll(class BlockSource& region, class BlockPos const& pos, bool angry) const;

    MCAPI void onPlayerPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI static void deliverNectar(class BlockSource& region, class Block const& block, class BlockPos const& pos);

    MCAPI static class ItemStack
    getHiveItemWithOccupants(class Block const& block, class BeehiveBlockActor const* beehiveBlockActor);

    MCAPI static bool hasHoneyToHarvest(class Block const& block);

    MCAPI static void resetHoneyLevel(class BlockSource& region, class Block const& block, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _fillHoneyBottle(
        class Player&         player,
        class ItemStack&      emptyBottle,
        class ItemStack&      honeyBottle,
        class BlockSource&    region,
        class BlockPos const& pos
    ) const;

    MCAPI void _playBottleSound(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
