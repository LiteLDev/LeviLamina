/**
 * @file  BoostItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostItem.
 *
 */
class BoostItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTITEM
public:
    class BoostItem& operator=(class BoostItem const &) = delete;
    BoostItem(class BoostItem const &) = delete;
    BoostItem() = delete;
#endif

public:
    /**
     * @hash   1742595776
     * @symbol ?setReplacementItemDescriptor@BoostItem@@QEAAXAEBVItemDescriptor@@@Z
     */
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const &);
    /**
     * @hash   -1678849070
     * @symbol ??1BoostItem@@QEAA@XZ
     */
    MCAPI ~BoostItem();

};