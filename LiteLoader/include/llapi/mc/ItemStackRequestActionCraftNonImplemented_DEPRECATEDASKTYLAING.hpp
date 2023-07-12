/**
 * @file  ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING.
 *
 */
class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTNONIMPLEMENTED_DEPRECATEDASKTYLAING
public:
    class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING& operator=(class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
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
     * @symbol ?_write\@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING();

};
