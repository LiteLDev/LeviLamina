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

class CocoaBeanItem : public ::Item {
public:
    // prevent constructor by default
    CocoaBeanItem& operator=(CocoaBeanItem const&);
    CocoaBeanItem(CocoaBeanItem const&);
    CocoaBeanItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CocoaBeanItem() = default;

    // vIndex: 15
    virtual bool isDye() const;

    // vIndex: 16
    virtual ::ItemColor getItemColor() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    MCAPI CocoaBeanItem(std::string const&, int, bool);

    // NOLINTEND
};
