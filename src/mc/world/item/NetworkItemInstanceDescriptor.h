#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ItemInstance;
class ItemStackDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcdd6df;
    ::ll::UntypedStorage<8, 32> mUnka0ca51;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptor& operator=(NetworkItemInstanceDescriptor const&);
    NetworkItemInstanceDescriptor(NetworkItemInstanceDescriptor const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkItemInstanceDescriptor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkItemInstanceDescriptor();

    MCNAPI NetworkItemInstanceDescriptor(::NetworkItemInstanceDescriptor&&);

    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemStackDescriptor const& descriptor);

    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const& item);

    MCNAPI ::ItemInstance getItemInstance(::BlockPalette const& blockPalette) const;

    MCNAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::NetworkItemInstanceDescriptor&&);

    MCNAPI void* $ctor(::ItemStackDescriptor const& descriptor);

    MCNAPI void* $ctor(::ItemInstance const& item);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
