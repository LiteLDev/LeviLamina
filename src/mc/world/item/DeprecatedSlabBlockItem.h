#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DeprecatedSlabBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    DeprecatedSlabBlockItem& operator=(DeprecatedSlabBlockItem const&);
    DeprecatedSlabBlockItem(DeprecatedSlabBlockItem const&);
    DeprecatedSlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeprecatedSlabBlockItem();

    // vIndex: 116
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<int> _canConvertToDoubleSlab(
        class ItemStackBase& instance,
        class Actor const&,
        uchar const&       face,
        class Block const& block
    ) const;

    MCAPI bool _convertToDoubleSlab(
        class BlockSource&      region,
        class Level&            level,
        class BlockPos const&   pos,
        class ItemStack&        instance,
        class Actor&            entity,
        uchar                   face,
        class Vec3 const&       clickPos,
        class Block const&      doubleBlock,
        class BlockState const& slabStateType,
        int                     slabType
    ) const;

    MCAPI int _findSlabType(class Block const& block) const;

    MCAPI bool _trySetDoubleBlock(
        class BlockSource&                region,
        class Level&                      level,
        class BlockPos const&             pos,
        class Actor&                      entity,
        class ItemStack&                  instance,
        class Block const&                doubleBlock,
        gsl::not_null<class Block const*> newSlab
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool
    _calculatePlacePos$(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
