#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class OminousBottleItem : public ::Item {
public:
    // prevent constructor by default
    OminousBottleItem& operator=(OminousBottleItem const&);
    OminousBottleItem(OminousBottleItem const&);
    OminousBottleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OminousBottleItem() = default;

    // vIndex: 44
    virtual bool isDestructive(int) const;

    // vIndex: 48
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int) const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 75
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 119
    virtual ::Potion::PotionType getPotionType() const;

    MCAPI OminousBottleItem(std::string const&, int);

    MCAPI static class MobEffectInstance getAppliedMobEffect(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const MAX_AMPLIFIER;

    // NOLINTEND
};
