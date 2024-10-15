#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual void appendFormattedHovertext(
        class ItemStackBase const& item,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 75
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack& item, class Level* level, class Player* player) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const& item) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 119
    virtual ::Potion::PotionType getPotionType() const;

    MCAPI OminousBottleItem(std::string const& name, int id);

    MCAPI static class MobEffectInstance getAppliedMobEffect(int auxValue);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& item,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI std::string buildEffectDescriptionName$(class ItemStackBase const& item) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const&, int, bool) const;

    MCAPI ::Potion::PotionType getPotionType$() const;

    MCAPI bool isDestructive$(int) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI bool uniqueAuxValues$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI ::ItemUseMethod useTimeDepleted$(class ItemStack& item, class Level* level, class Player* player) const;

    MCAPI static int const& MAX_AMPLIFIER();

    // NOLINTEND
};
