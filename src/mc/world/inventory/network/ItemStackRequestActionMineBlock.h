#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionMineBlock {
public:
    // ItemStackRequestActionMineBlock inner types define
    enum class PreValidationStatus {};

public:
    // prevent constructor by default
    ItemStackRequestActionMineBlock& operator=(ItemStackRequestActionMineBlock const&) = delete;
    ItemStackRequestActionMineBlock(ItemStackRequestActionMineBlock const&)            = delete;
    ItemStackRequestActionMineBlock()                                                  = delete;

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
     * @symbol ?_write\@ItemStackRequestActionMineBlock\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionMineBlock\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?getSrc\@ItemStackRequestActionMineBlock\@\@QEBA?AUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    /**
     * @symbol ?setPreValidationStatus\@ItemStackRequestActionMineBlock\@\@QEBAXW4PreValidationStatus\@1\@\@Z
     */
    MCAPI void setPreValidationStatus(enum class ItemStackRequestActionMineBlock::PreValidationStatus) const;
    // NOLINTEND
};
