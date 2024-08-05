#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorType.h"
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

class BoatItem : public ::Item {
public:
    // prevent constructor by default
    BoatItem& operator=(BoatItem const&);
    BoatItem(BoatItem const&);
    BoatItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BoatItem() = default;

    // vIndex: 33
    virtual bool isStackedByData() const;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    // vIndex: 119
    virtual ::ActorType _getActorType() const;

    MCAPI BoatItem(std::string const& name, int id, int woodType);

    // NOLINTEND
};
