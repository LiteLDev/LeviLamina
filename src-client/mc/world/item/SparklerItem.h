#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
struct Brightness;
struct ResolvedItemIconInfo;
// clang-format on

class SparklerItem : public ::ChemistryStickItem {
public:
    // SparklerItem inner types declare
    // clang-format off
    struct ColorInfo;
    // clang-format on

    // SparklerItem inner types define
    struct ColorInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ItemColor>    mDyeId;
        ::ll::TypedStorage<1, 1, ::CompoundType> mColorCompound;
        ::ll::TypedStorage<4, 4, int>            mVariantIndex;
        ::ll::TypedStorage<4, 4, int>            mRGB;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 90
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 111
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 95
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    // vIndex: 110
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 115
    virtual ::Brightness getLightEmission(int auxValue) const /*override*/;

    // vIndex: 0
    virtual ~SparklerItem() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::SparklerItem::ColorInfo const[]> COLORS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD bool $isHandEquipped() const;

    MCFOLD ::Brightness $getLightEmission(int auxValue) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
