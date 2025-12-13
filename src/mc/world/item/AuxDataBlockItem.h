#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ItemDescriptor;
// clang-format on

class AuxDataBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mParentBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ~AuxDataBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
