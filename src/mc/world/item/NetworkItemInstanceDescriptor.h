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
    MCAPI NetworkItemInstanceDescriptor();

    MCAPI NetworkItemInstanceDescriptor(::NetworkItemInstanceDescriptor&&);

    MCAPI explicit NetworkItemInstanceDescriptor(::ItemStackDescriptor const& descriptor);

    MCAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const& item);

    MCAPI ::ItemInstance getItemInstance(::BlockPalette const& blockPalette) const;

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::NetworkItemInstanceDescriptor&&);

    MCAPI void* $ctor(::ItemStackDescriptor const& descriptor);

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
