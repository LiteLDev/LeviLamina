#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/PotionItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class Container;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class LingeringPotionItem : public ::PotionItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1344, ::ResolvedItemIconInfo[21]> mLingeringIcons;
    ::ll::TypedStorage<4, 84, ::Potion::PotionVariant[21]>  mLingeringPotionVariants;
    // NOLINTEND

public:
    // prevent constructor by default
    LingeringPotionItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Potion::PotionType getPotionType() const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    virtual bool isThrowable() const /*override*/;

    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LingeringPotionItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Potion::PotionType $getPotionType() const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;

    MCFOLD bool $isThrowable() const;

    MCAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const;

    MCFOLD bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
