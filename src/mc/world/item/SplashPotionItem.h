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

class SplashPotionItem : public ::PotionItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1920, ::ResolvedItemIconInfo[30]> mSplashIcons;
    ::ll::TypedStorage<4, 120, ::Potion::PotionVariant[30]> mSplashPotionVariants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 121
    virtual ::Potion::PotionType getPotionType() const /*override*/;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 20
    virtual bool isThrowable() const /*override*/;

    // vIndex: 77
    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 0
    virtual ~SplashPotionItem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Potion::PotionType $getPotionType() const;

    MCNAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCNAPI bool $isThrowable() const;

    MCNAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
