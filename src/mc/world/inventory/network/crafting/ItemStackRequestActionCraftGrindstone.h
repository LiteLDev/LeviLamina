#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftGrindstone {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
public:
    ItemStackRequestActionCraftGrindstone& operator=(ItemStackRequestActionCraftGrindstone const&) = delete;
    ItemStackRequestActionCraftGrindstone(ItemStackRequestActionCraftGrindstone const&)            = delete;
#endif

public:
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
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCraftGrindstone\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCraftGrindstone\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 6
     * @symbol ?getRecipeNetId\@ItemStackRequestActionCraftGrindstone\@\@UEBAAEBUItemStackNetIdVariant\@\@XZ
     */
    virtual struct ItemStackNetIdVariant const& getRecipeNetId() const;
    /**
     * @symbol ??0ItemStackRequestActionCraftGrindstone\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftGrindstone();
};
