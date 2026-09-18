#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/alchemy/PotionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class ThrownPotion;
class Vec3;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class PotionItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PotionType getPotionType() const;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const /*override*/;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool) const /*override*/;

    virtual bool uniqueAuxValues() const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& instance, ::Level* level, ::Player* player) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual bool isDestructive(int auxValue) const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static void applyEffect(::ThrownPotion* potion, ::ItemStack const& slotItem);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::PotionType $getPotionType() const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& instance, ::Level* level, ::Player* player) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isDestructive(int auxValue) const;

    MCAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
