#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionCreate : public ::ItemStackRequestAction {

public:
    // prevent constructor by default
    ItemStackRequestActionCreate& operator=(ItemStackRequestActionCreate const&) = delete;
    ItemStackRequestActionCreate(ItemStackRequestActionCreate const&)            = delete;
    ItemStackRequestActionCreate()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCreate\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCreate\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?getResultsIndex\@ItemStackRequestActionCreate\@\@QEBAEXZ
     */
    MCAPI unsigned char getResultsIndex() const;
    // NOLINTEND
};
