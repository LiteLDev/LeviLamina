#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
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

class ClockItem : public ::Item {
public:
    // prevent constructor by default
    ClockItem& operator=(ClockItem const&);
    ClockItem(ClockItem const&);
    ClockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClockItem() = default;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    MCAPI ClockItem(std::string const& name, int id);

    // NOLINTEND
};
