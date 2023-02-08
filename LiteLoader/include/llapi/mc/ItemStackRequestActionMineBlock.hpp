/**
 * @file  ItemStackRequestActionMineBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionMineBlock.
 *
 */
class ItemStackRequestActionMineBlock {

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestActionMineBlock();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1203473636
     * @vftbl  4
     * @symbol  ?_write\@ItemStackRequestActionMineBlock\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   1739903988
     * @vftbl  5
     * @symbol  ?_read\@ItemStackRequestActionMineBlock\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -2134412042
     * @symbol  ??0ItemStackRequestActionMineBlock\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionMineBlock();
    /**
     * @hash   -1006214129
     * @symbol  ?getPreValidationStatus\@ItemStackRequestActionMineBlock\@\@QEBA?AW4PreValidationStatus\@1\@XZ
     */
    MCAPI enum class ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;
    /**
     * @hash   1164227628
     * @symbol  ?getPredictedDurability\@ItemStackRequestActionMineBlock\@\@QEBAHXZ
     */
    MCAPI int getPredictedDurability() const;
    /**
     * @hash   2000617228
     * @symbol  ?getSrc\@ItemStackRequestActionMineBlock\@\@QEBA?AUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    /**
     * @hash   547646243
     * @symbol  ?setPreValidationStatus\@ItemStackRequestActionMineBlock\@\@QEBAXW4PreValidationStatus\@1\@\@Z
     */
    MCAPI void setPreValidationStatus(enum class ItemStackRequestActionMineBlock::PreValidationStatus) const;

};