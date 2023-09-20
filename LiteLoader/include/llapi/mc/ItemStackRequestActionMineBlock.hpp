/**
 * @file  ItemStackRequestActionMineBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ItemStackRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionMineBlock.
 *
 */
class ItemStackRequestActionMineBlock : public ItemStackRequestAction {

#define AFTER_EXTRA
// Add Member There
public:
enum class PreValidationStatus;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONMINEBLOCK
public:
    class ItemStackRequestActionMineBlock& operator=(class ItemStackRequestActionMineBlock const &) = delete;
    ItemStackRequestActionMineBlock(class ItemStackRequestActionMineBlock const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionMineBlock\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionMineBlock\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionMineBlock\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionMineBlock();
    /**
     * @symbol ?getSrc\@ItemStackRequestActionMineBlock\@\@QEBA?AUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    /**
     * @symbol ?setPreValidationStatus\@ItemStackRequestActionMineBlock\@\@QEBAXW4PreValidationStatus\@1\@\@Z
     */
    MCAPI void setPreValidationStatus(enum class ItemStackRequestActionMineBlock::PreValidationStatus) const;

};
