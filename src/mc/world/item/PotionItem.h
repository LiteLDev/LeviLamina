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

class PotionItem : public ::Item {
public:
    // prevent constructor by default
    PotionItem& operator=(PotionItem const&);
    PotionItem(PotionItem const&);
    PotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PotionItem();

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 75
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack& instance, class Level* level, class Player* player) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const& stack) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const& clickPos) const;

    // vIndex: 119
    virtual ::Potion::PotionType getPotionType() const;

    MCAPI PotionItem(std::string const& name, int id);

    MCAPI static void applyEffect(class ThrownPotion* potion, class ItemStack const& slotItem);

    MCAPI static bool isDestructivePotion(::Potion::PotionVariant potionVariant);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool const _isBlockConvertibleToMud(class BlockLegacy const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI void dtor$();

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const& clickPos)
        const;

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    MCAPI std::string buildEffectDescriptionName$(class ItemStackBase const& stack) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const& item, int, bool) const;

    MCAPI ::Potion::PotionType getPotionType$() const;

    MCAPI bool isDestructive$(int auxValue) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI bool uniqueAuxValues$() const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    MCAPI ::ItemUseMethod useTimeDepleted$(class ItemStack& instance, class Level* level, class Player* player) const;

    // NOLINTEND
};
