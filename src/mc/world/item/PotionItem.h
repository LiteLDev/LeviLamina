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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PotionType $getPotionType() const;

    MCNAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCNAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& instance, ::Level* level, ::Player* player) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI bool $isDestructive(int auxValue) const;

    MCNAPI ::InteractionResult $_useOn(
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
