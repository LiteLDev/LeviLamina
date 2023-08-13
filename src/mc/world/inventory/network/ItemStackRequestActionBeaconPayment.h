#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionBeaconPayment : public ::ItemStackRequestAction {

public:
    // prevent constructor by default
    ItemStackRequestActionBeaconPayment& operator=(ItemStackRequestActionBeaconPayment const&) = delete;
    ItemStackRequestActionBeaconPayment(ItemStackRequestActionBeaconPayment const&)            = delete;
    ItemStackRequestActionBeaconPayment()                                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionBeaconPayment\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionBeaconPayment\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    // NOLINTEND
};
