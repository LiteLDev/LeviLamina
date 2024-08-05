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

class ShearsItem : public ::Item {
public:
    // prevent constructor by default
    ShearsItem& operator=(ShearsItem const&);
    ShearsItem(ShearsItem const&);
    ShearsItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShearsItem() = default;

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 81
    virtual bool mineBlock(class ItemStack& item, class Block const& block, int, int, int, class Actor* owner) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _tryShearActor(class BlockSource&, class Actor&);

    // NOLINTEND
};
