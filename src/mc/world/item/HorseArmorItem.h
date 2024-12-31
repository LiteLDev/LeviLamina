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
        None    = 0,
        Leather = 1,
        Iron    = 2,
        Gold    = 3,
        Diamond = 4,
        Count   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbc1e43;
    ::ll::UntypedStorage<4, 4> mUnk58d2fe;
    ::ll::UntypedStorage<4, 4> mUnk6e799e;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseArmorItem& operator=(HorseArmorItem const&);
    HorseArmorItem(HorseArmorItem const&);
    HorseArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 56
    virtual int getArmorValue() const /*override*/;

    // vIndex: 67
    virtual bool hasCustomColor(::CompoundTag const* userData) const /*override*/;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;

    // vIndex: 69
    virtual void clearColor(::ItemStackBase& item) const /*override*/;

    // vIndex: 70
    virtual void setColor(::ItemStackBase& item, ::mce::Color const& color) const /*override*/;

    // vIndex: 15
    virtual bool isDyeable() const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 0
    virtual ~HorseArmorItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HorseArmorItem(::std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);

    MCAPI ::HorseArmorItem::Tier getTier() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void ResetDefaultHorseLeatherColor();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color& DEFAULT_HORSE_LEATHER_COLOR();

    MCAPI static ::std::add_lvalue_reference_t<int const[]> mHealthPerTier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getArmorValue() const;

    MCAPI bool $hasCustomColor(::CompoundTag const* userData) const;

    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCAPI void $clearColor(::ItemStackBase& item) const;

    MCAPI void $setColor(::ItemStackBase& item, ::mce::Color const& color) const;

    MCAPI bool $isDyeable() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
