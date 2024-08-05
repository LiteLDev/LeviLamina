#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/MinecartType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MinecartItem : public ::Item {
public:
    // prevent constructor by default
    MinecartItem& operator=(MinecartItem const&);
    MinecartItem(MinecartItem const&);
    MinecartItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecartItem() = default;

    // vIndex: 44
    virtual bool isDestructive(int) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& entity, class BlockPos pos, uchar, class Vec3 const&) const;

    MCAPI MinecartItem(std::string const& name, int id, ::MinecartType type);

    // NOLINTEND
};
