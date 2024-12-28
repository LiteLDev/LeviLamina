#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/PotionItem.h"
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
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class LingeringPotionItem : public ::PotionItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1344> mUnk293b80;
    ::ll::UntypedStorage<4, 84>   mUnk49b312;
    // NOLINTEND

public:
    // prevent constructor by default
    LingeringPotionItem& operator=(LingeringPotionItem const&);
    LingeringPotionItem(LingeringPotionItem const&);
    LingeringPotionItem();

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
    virtual ~LingeringPotionItem() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Potion::PotionType $getPotionType() const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI bool $isThrowable() const;

    MCAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
