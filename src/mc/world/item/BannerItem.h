#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/Rarity.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BannerPattern;
class Block;
class BlockPos;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class BannerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mWallBanner;
    ::ll::TypedStorage<8, 8, ::Block const&> mStandingBanner;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerItem& operator=(BannerItem const&);
    BannerItem(BannerItem const&);
    BannerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::Rarity getRarity(::ItemStackBase const& stack) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual bool isWearableThroughLootTable(::CompoundTag const* userData) const /*override*/;

    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    virtual ~BannerItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::gsl::not_null<::BannerPattern const*>, ::ItemColor>>
    getPatternAndColorPairsFromItemStack(::ItemStackBase const& item);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

#ifdef LL_PLAT_S
    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;
#endif

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isWearableThroughLootTable(::CompoundTag const* userData) const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
