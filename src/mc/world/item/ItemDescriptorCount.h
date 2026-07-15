#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescriptorCount();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void serialize(::BinaryStream& stream) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemDescriptorCount(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::BinaryStream& stream) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
