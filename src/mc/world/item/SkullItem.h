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

class SkullItem : public ::Item {
public:
    // prevent constructor by default
    SkullItem& operator=(SkullItem const&);
    SkullItem(SkullItem const&);
    SkullItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkullItem() = default;

    // vIndex: 29
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 113
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 116
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
