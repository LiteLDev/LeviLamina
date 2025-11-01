#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ItemStack;
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIncludeNetIds;
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    ::ll::TypedStorage<4, 4, uint> mBlockRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string> mUserDataBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemStackDescriptor(NetworkItemStackDescriptor const&);
    NetworkItemStackDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkItemStackDescriptor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkItemStackDescriptor(::NetworkItemStackDescriptor&&);

    MCAPI explicit NetworkItemStackDescriptor(::ItemStack const& item);

    MCAPI ::ItemStack getItemStack(::BlockPalette const& blockPalette) const;

    MCAPI ::NetworkItemStackDescriptor& operator=(::NetworkItemStackDescriptor&&);

    MCAPI ::NetworkItemStackDescriptor& operator=(::NetworkItemStackDescriptor const&);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkItemStackDescriptor&&);

    MCAPI void* $ctor(::ItemStack const& item);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
