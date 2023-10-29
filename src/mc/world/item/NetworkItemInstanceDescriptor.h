#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1NetworkItemInstanceDescriptor@@UEAA@XZ
    MCVAPI ~NetworkItemInstanceDescriptor();

    // symbol: ??0NetworkItemInstanceDescriptor@@QEAA@AEBVItemInstance@@@Z
    MCAPI explicit NetworkItemInstanceDescriptor(class ItemInstance const&);

    // symbol: ??0NetworkItemInstanceDescriptor@@QEAA@AEBVItemStackDescriptor@@@Z
    MCAPI explicit NetworkItemInstanceDescriptor(class ItemStackDescriptor const&);

    // symbol: ??0NetworkItemInstanceDescriptor@@QEAA@$$QEAV0@@Z
    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor&&);

    // symbol: ?getItemInstance@NetworkItemInstanceDescriptor@@QEBA?AVItemInstance@@AEBVBlockPalette@@@Z
    MCAPI class ItemInstance getItemInstance(class BlockPalette const&) const;

    // symbol:
    // ?read@NetworkItemInstanceDescriptor@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // symbol: ?write@NetworkItemInstanceDescriptor@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // NOLINTEND
};
