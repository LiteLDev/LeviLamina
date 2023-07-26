#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftLoom {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftLoom& operator=(ItemStackRequestActionCraftLoom const&) = delete;
    ItemStackRequestActionCraftLoom(ItemStackRequestActionCraftLoom const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCraftLoom\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCraftLoom\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0ItemStackRequestActionCraftLoom\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftLoom(); // NOLINT
};
