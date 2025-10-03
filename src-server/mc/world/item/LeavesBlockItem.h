#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ILevel;
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class LeavesBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> m_parentBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 33
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    // vIndex: 89
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 99
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 98
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const /*override*/;

    // vIndex: 0
    virtual ~LeavesBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;

    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
