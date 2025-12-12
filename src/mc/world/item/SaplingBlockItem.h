#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
// clang-format on

class SaplingBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ~SaplingBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
