#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockLegacy;
class Item;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescriptorCount& operator=(ItemDescriptorCount const&);
    ItemDescriptorCount(ItemDescriptorCount const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void serialize(::BinaryStream& stream) const /*override*/;

    // vIndex: 0
    virtual ~ItemDescriptorCount() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDescriptorCount();

    MCAPI explicit ItemDescriptorCount(::ReadOnlyBinaryStream& stream);

    MCAPI ItemDescriptorCount(::Block const& block, ushort stackSize);

    MCAPI ItemDescriptorCount(::BlockLegacy const& block, ushort stackSize);

    MCAPI ItemDescriptorCount(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI ItemDescriptorCount(::ItemTag const& itemTag, ushort stackSize);

    MCAPI ItemDescriptorCount(::Item const& item, int auxValue, ushort stackSize);

    MCAPI ItemDescriptorCount(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI short getStackSize() const;

    MCAPI void setStackSize(short size);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);

    MCAPI void* $ctor(::Block const& block, ushort stackSize);

    MCAPI void* $ctor(::BlockLegacy const& block, ushort stackSize);

    MCAPI void* $ctor(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI void* $ctor(::ItemTag const& itemTag, ushort stackSize);

    MCAPI void* $ctor(::Item const& item, int auxValue, ushort stackSize);

    MCAPI void* $ctor(::std::string_view item, int auxValue, ushort stackSize);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
