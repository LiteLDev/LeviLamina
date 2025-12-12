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
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual bool isDye() const /*override*/;

    virtual ::ItemColor getItemColor() const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ~BoneMealItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isDye() const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

#ifdef LL_PLAT_C
    MCFOLD ::ItemColor $getItemColor() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
