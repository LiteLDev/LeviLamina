#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Arrow;
class BlockSource;
class CompoundTag;
class Container;
class Item;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class MobEffectInstance;
class Potion;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ArrowItem : public ::ComponentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1344, ::ResolvedItemIconInfo[21]> mArrowIcons;
    ::ll::TypedStorage<4, 84, ::Potion::PotionVariant[21]>  mArrowVariants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 77
    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

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

    // vIndex: 88
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 0
    virtual ~ArrowItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArrowItem(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);

    MCNAPI ::std::shared_ptr<::Potion const> _potionExistsOrContentError(int aux) const;

    MCNAPI void applyEffect(::Arrow* arrow, ::ItemInstance const& slotItem) const;

    MCNAPI ::std::vector<::MobEffectInstance> getMobEffects(int auxValue) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCNAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
