#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class ItemStackDescriptor;
class ReadOnlyBinaryStream;
struct ItemStackNetIdTag;
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mIncludeNetIds;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    ::ll::TypedStorage<4, 4, uint>                     mBlockRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>           mUserDataBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemStackDescriptor& operator=(NetworkItemStackDescriptor const&);
    NetworkItemStackDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkItemStackDescriptor(::NetworkItemStackDescriptor const&);

    MCAPI explicit NetworkItemStackDescriptor(::ItemStackDescriptor const& descriptor);

    MCAPI explicit NetworkItemStackDescriptor(::ItemStack const& item);

    MCAPI ::ItemStack getItemStack(::BlockPalette const& blockPalette) const;

    MCAPI bool operator==(::NetworkItemStackDescriptor const& rhs) const;

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCFOLD void setIncludeNetIds(bool includeNetIds) const;

    MCAPI ::ItemStackNetId const* tryGetServerNetId() const;

    MCAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkItemStackDescriptor const&);

    MCAPI void* $ctor(::ItemStackDescriptor const& descriptor);

    MCAPI void* $ctor(::ItemStack const& item);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
