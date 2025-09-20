#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class PotionItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1984, ::ResolvedItemIconInfo[31]> mPotionIcons;
    ::ll::TypedStorage<4, 124, ::Potion::PotionVariant[31]> mPotionVariants;
    // NOLINTEND

public:
    // prevent constructor by default
    PotionItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 121
    virtual ::Potion::PotionType getPotionType() const;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

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
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 47
    virtual bool isDestructive(int auxValue) const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~PotionItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PotionItem(::std::string const& name, int id);

    MCAPI bool const _isBlockConvertibleToMud(::BlockType const& block) const;
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
    MCFOLD ::Potion::PotionType $getPotionType() const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isDestructive(int auxValue) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
