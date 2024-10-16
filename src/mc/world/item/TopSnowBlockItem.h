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

class TopSnowBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    TopSnowBlockItem& operator=(TopSnowBlockItem const&);
    TopSnowBlockItem(TopSnowBlockItem const&);
    TopSnowBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TopSnowBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI int getLevelDataForAuxValue$(int auxValue) const;

    // NOLINTEND
};
