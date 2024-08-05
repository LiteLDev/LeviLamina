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

class FlintAndSteelItem : public ::Item {
public:
    // prevent constructor by default
    FlintAndSteelItem& operator=(FlintAndSteelItem const&);
    FlintAndSteelItem(FlintAndSteelItem const&);
    FlintAndSteelItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlintAndSteelItem() = default;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 116
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI FlintAndSteelItem(std::string const& name, int id);

    // NOLINTEND
};
