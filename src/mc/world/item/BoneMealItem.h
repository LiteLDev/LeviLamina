#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerItem.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
class ItemDescriptor;
// clang-format on

class BoneMealItem : public ::FertilizerItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mAllowLegacyUseAsDye;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 109
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    // vIndex: 89
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 16
    virtual bool isDye() const /*override*/;

    // vIndex: 17
    virtual ::ItemColor getItemColor() const /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 0
    virtual ~BoneMealItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isDye() const;

    MCFOLD ::ItemColor $getItemColor() const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
