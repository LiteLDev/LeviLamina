#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

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
    NetworkItemStackDescriptor() = delete;

    bool                  mIncludeNetIds;  // this+0x18
    ItemStackNetIdVariant mNetIdVariant;   // this+0x20
    uint                  mBlockRuntimeId; // this+0x38
    std::string           mUserDataBuffer; // this+0x40
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetworkItemStackDescriptor@@UEAA@XZ
    virtual ~NetworkItemStackDescriptor();

    // symbol: ??0NetworkItemStackDescriptor@@QEAA@AEBVItemStack@@@Z
    MCAPI explicit NetworkItemStackDescriptor(class ItemStack const&);

    // symbol: ??0NetworkItemStackDescriptor@@QEAA@AEBVItemStackDescriptor@@@Z
    MCAPI explicit NetworkItemStackDescriptor(class ItemStackDescriptor const&);

    // symbol: ??0NetworkItemStackDescriptor@@QEAA@$$QEAV0@@Z
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor&&);

    // symbol: ??0NetworkItemStackDescriptor@@QEAA@AEBV0@@Z
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor const&);

    // symbol:
    // ?read@NetworkItemStackDescriptor@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // symbol: ?setIncludeNetIds@NetworkItemStackDescriptor@@QEBAX_N@Z
    MCAPI void setIncludeNetIds(bool) const;

    // symbol: ?tryGetServerNetId@NetworkItemStackDescriptor@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
    MCAPI ItemStackNetId const* tryGetServerNetId() const;

    // symbol: ?write@NetworkItemStackDescriptor@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // NOLINTEND
};
