#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftGrindstone {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftGrindstone& operator=(ItemStackRequestActionCraftGrindstone const&) = delete;
    ItemStackRequestActionCraftGrindstone(ItemStackRequestActionCraftGrindstone const&)            = delete;

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
     * @symbol ?_write\@ItemStackRequestActionCraftGrindstone\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCraftGrindstone\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getRecipeNetId\@ItemStackRequestActionCraftGrindstone\@\@UEBAAEBUItemStackNetIdVariant\@\@XZ
     */
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const; // NOLINT
    /**
     * @symbol ??0ItemStackRequestActionCraftGrindstone\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftGrindstone(); // NOLINT
};
