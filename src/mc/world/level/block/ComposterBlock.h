#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ComposterBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ComposterBlock& operator=(ComposterBlock const&);
    ComposterBlock(ComposterBlock const&);
    ComposterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComposterBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 67
    virtual void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI ComposterBlock(std::string const& nameId, int id);

    MCAPI static bool addItem(
        class Container&      fromContainer,
        int                   slot,
        class ItemStack&      item,
        class BlockSource&    region,
        class Block const&    block,
        class BlockPos const& pos
    );

    MCAPI static bool addItems(
        class Container&      fromContainer,
        int                   slot,
        class ItemStack&      item,
        int                   amount,
        class BlockSource&    region,
        class Block const&    block,
        class BlockPos const& pos
    );

    MCAPI static int addItems(
        class ItemStack const& item,
        int                    amount,
        class BlockSource&     region,
        class Block const&     block,
        class BlockPos const&  pos
    );

    MCAPI static void empty(class BlockSource& region, class Block const& composter, class BlockPos const& pos);

    MCAPI static class ItemStack
    extractItem(class BlockSource& region, class Block const& composter, class BlockPos const& pos);

    MCAPI static class Block const* getComposterAt(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _emitBoneMeal(class Level&, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _notifyClientComposterUsed(
        class Player const&                          player,
        short                                        itemId,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    ) const;

    MCAPI static std::unordered_map<uint64, schar> const& _getCompostableItems();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    MCAPI static class Vec3 const PARTICLE_OFFSET;

    // NOLINTEND
};
