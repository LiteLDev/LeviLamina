#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ItemInstance;
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mBlockRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string> mUserDataBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptor& operator=(NetworkItemInstanceDescriptor const&);
    NetworkItemInstanceDescriptor(NetworkItemInstanceDescriptor const&);
    NetworkItemInstanceDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkItemInstanceDescriptor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkItemInstanceDescriptor(::NetworkItemInstanceDescriptor&&);

    MCAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const& item);

    MCAPI ::ItemInstance getItemInstance(::BlockPalette const& blockPalette) const;

    MCAPI_C ::NetworkItemInstanceDescriptor& operator=(::NetworkItemInstanceDescriptor&&);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkItemInstanceDescriptor&&);

    MCAPI void* $ctor(::ItemInstance const& item);
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
