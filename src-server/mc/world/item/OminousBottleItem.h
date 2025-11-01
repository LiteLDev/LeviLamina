#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffectInstance.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class OminousBottleItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ResolvedItemIconInfo> mIconInfo;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance>   mMobEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    OminousBottleItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 124
    virtual ::Potion::PotionType getPotionType() const;

    // vIndex: 90
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 53
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 91
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& item, bool) const /*override*/;

    // vIndex: 64
    virtual bool uniqueAuxValues() const /*override*/;

    // vIndex: 111
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    // vIndex: 77
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 82
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 61
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 48
    virtual bool isDestructive(int) const /*override*/;

    // vIndex: 0
    virtual ~OminousBottleItem() /*override*/ = default;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Potion::PotionType $getPotionType() const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& item, bool) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCFOLD bool $isDestructive(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
