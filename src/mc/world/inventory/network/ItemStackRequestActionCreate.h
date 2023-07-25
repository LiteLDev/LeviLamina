#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCreate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCREATE
public:
    ItemStackRequestActionCreate& operator=(ItemStackRequestActionCreate const&) = delete;
    ItemStackRequestActionCreate(ItemStackRequestActionCreate const&)            = delete;
    ItemStackRequestActionCreate()                                               = delete;
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
     * @symbol ?_write\@ItemStackRequestActionCreate\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream&) const;
    /**
     * @vftbl 5
     * @symbol
     * ?_read\@ItemStackRequestActionCreate\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?getResultsIndex\@ItemStackRequestActionCreate\@\@QEBAEXZ
     */
    MCAPI unsigned char getResultsIndex() const;
};
