#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class Container;
class ItemDescriptor;
class ItemStackBase;
class Level;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types define
    enum class Tier : int {
        None      = 0,
        Leather   = 1,
        Iron      = 2,
        Gold      = 3,
        Diamond   = 4,
        Copper    = 5,
        Netherite = 6,
        Count     = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>              mDefense;
    ::ll::TypedStorage<4, 4, ::HorseArmorItem::Tier> mTier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isBodyArmor() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual int getToughnessValue() const /*override*/;

    virtual float getKnockbackResistanceValue() const /*override*/;

    virtual bool hasCustomColor(::CompoundTag const* userData) const /*override*/;

    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;

    virtual void clearColor(::ItemStackBase& item) const /*override*/;

    virtual void setColor(::ItemStackBase& item, ::mce::Color const& color) const /*override*/;

    virtual bool isDyeable() const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBodyArmor() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getToughnessValue() const;

    MCNAPI float $getKnockbackResistanceValue() const;

    MCNAPI bool $hasCustomColor(::CompoundTag const* userData) const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCNAPI void $clearColor(::ItemStackBase& item) const;

    MCNAPI void $setColor(::ItemStackBase& item, ::mce::Color const& color) const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
