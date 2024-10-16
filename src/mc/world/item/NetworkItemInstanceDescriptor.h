#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    NetworkItemInstanceDescriptor& operator=(NetworkItemInstanceDescriptor const&);
    NetworkItemInstanceDescriptor(NetworkItemInstanceDescriptor const&);
    NetworkItemInstanceDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkItemInstanceDescriptor();

    MCAPI explicit NetworkItemInstanceDescriptor(class ItemInstance const& item);

    MCAPI explicit NetworkItemInstanceDescriptor(class ItemStackDescriptor const& descriptor);

    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor&&);

    MCAPI class ItemInstance getItemInstance(class BlockPalette const& blockPalette) const;

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI void write(class BinaryStream& stream) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ItemStackDescriptor const& descriptor);

    MCAPI void* ctor$(class ItemInstance const& item);

    MCAPI void* ctor$(class NetworkItemInstanceDescriptor&&);

    MCAPI void dtor$();

    // NOLINTEND
};
