#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING&
    operator=(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&) = delete;
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING(ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const&) =
        delete;

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
     * @symbol ?_write\@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING(); // NOLINT
};
