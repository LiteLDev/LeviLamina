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

class SaddleItem : public ::Item {
public:
    // prevent constructor by default
    SaddleItem& operator=(SaddleItem const&);
    SaddleItem(SaddleItem const&);
    SaddleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaddleItem() = default;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI SaddleItem(std::string const& nameId, short id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _tryEquipSaddleViaComponents(class Actor& actor, class ItemStack const& saddle);

    // NOLINTEND
};
