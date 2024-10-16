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

class FrogSpawnBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    FrogSpawnBlockItem& operator=(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrogSpawnBlockItem() = default;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 116
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI FrogSpawnBlockItem(std::string const& name, int blockId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int blockId);

    MCAPI bool _calculatePlacePos$(class ItemStackBase&, class Actor&, uchar& face, class BlockPos& pos) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI bool isLiquidClipItem$() const;

    // NOLINTEND
};
