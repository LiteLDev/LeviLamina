#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
struct Brightness;
// clang-format on

class GlowStickItem : public ::ChemistryStickItem {
public:
    // prevent constructor by default
    GlowStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Brightness getLightEmission(int auxValue) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GlowStickItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::ItemColor const[]> COLORS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Brightness $getLightEmission(int auxValue) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
