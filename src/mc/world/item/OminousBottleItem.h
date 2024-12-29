#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class OminousBottleItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk309557;
    ::ll::UntypedStorage<8, 136> mUnkdd77bf;
    // NOLINTEND

public:
    // prevent constructor by default
    OminousBottleItem& operator=(OminousBottleItem const&);
    OminousBottleItem(OminousBottleItem const&);
    OminousBottleItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 121
    virtual ::Potion::PotionType getPotionType() const;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 88
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 63
    virtual bool uniqueAuxValues() const /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 47
    virtual bool isDestructive(int) const /*override*/;

    // vIndex: 0
    virtual ~OminousBottleItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OminousBottleItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_AMPLIFIER();
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

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCAPI bool $uniqueAuxValues() const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isDestructive(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
