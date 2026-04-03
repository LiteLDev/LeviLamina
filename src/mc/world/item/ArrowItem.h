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
    // prevent constructor by default
    ArrowItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool) const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual ~ArrowItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArrowItem(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);

    MCAPI ::std::shared_ptr<::Potion const> _potionExistsOrContentError(int aux) const;

    MCAPI void applyEffect(::Arrow* arrow, ::ItemInstance const& slotItem) const;

    MCAPI ::std::vector<::MobEffectInstance> getMobEffects(int auxValue) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
