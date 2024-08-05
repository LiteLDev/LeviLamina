#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    NetworkItemStackDescriptor& operator=(NetworkItemStackDescriptor const&);
    NetworkItemStackDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkItemStackDescriptor();

    MCAPI explicit NetworkItemStackDescriptor(class ItemStack const& item);

    MCAPI explicit NetworkItemStackDescriptor(class ItemStackDescriptor const& descriptor);

    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor&&);

    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor const&);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI void setIncludeNetIds(bool) const;

    MCAPI ItemStackNetId const* tryGetServerNetId() const;

    MCAPI void write(class BinaryStream& stream) const;

    // NOLINTEND
};
