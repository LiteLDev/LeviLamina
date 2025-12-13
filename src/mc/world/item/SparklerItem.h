#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"

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
        ::ll::UntypedStorage<1, 1> mUnk2e1fb2;
        ::ll::UntypedStorage<1, 1> mUnkb0e483;
        ::ll::UntypedStorage<4, 4> mUnka60ccd;
        ::ll::UntypedStorage<4, 4> mUnk6e75e8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorInfo& operator=(ColorInfo const&);
        ColorInfo(ColorInfo const&);
        ColorInfo();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual bool isHandEquipped() const /*override*/;

    virtual ::Brightness getLightEmission(int auxValue) const /*override*/;

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
