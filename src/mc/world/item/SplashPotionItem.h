#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/PotionItem.h"
#include "mc/world/item/alchemy/PotionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class Item;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SplashPotionItem : public ::PotionItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PotionType getPotionType() const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::PotionType $getPotionType() const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCFOLD bool $isThrowable() const;

    MCAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
