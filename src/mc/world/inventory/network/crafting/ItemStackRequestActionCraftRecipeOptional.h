#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftRecipeOptional {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeOptional& operator=(ItemStackRequestActionCraftRecipeOptional const&) = delete;
    ItemStackRequestActionCraftRecipeOptional(ItemStackRequestActionCraftRecipeOptional const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?getFilteredStringIndex\@ItemStackRequestActionCraftRecipeOptional\@\@UEBAHXZ
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCraftRecipeOptional\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCraftRecipeOptional\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0ItemStackRequestActionCraftRecipeOptional\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftRecipeOptional();
    // NOLINTEND
};
