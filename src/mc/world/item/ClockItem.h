#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 106
    virtual int getAnimationFrameFor(class Mob* holder, bool, class ItemStack const*, bool) const;

    MCAPI ClockItem(std::string const& name, int id);

    // NOLINTEND
};
