/**
 * @file  SlotDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SlotDescriptor.
 *
 */
struct SlotDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDESCRIPTOR
public:
    struct SlotDescriptor& operator=(struct SlotDescriptor const &) = delete;
#endif

public:
    /**
     * @hash   -644223783
     * @symbol  ??0SlotDescriptor\@\@QEAA\@XZ
     */
    MCAPI SlotDescriptor();
    /**
     * @hash   -1557108449
     * @symbol  ??0SlotDescriptor\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SlotDescriptor(struct SlotDescriptor const &);
    /**
     * @hash   -2131771640
     * @symbol  ?addAcceptedItem\@SlotDescriptor\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addAcceptedItem(class ItemDescriptor const &);
    /**
     * @hash   483079511
     * @symbol  ??1SlotDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~SlotDescriptor();

};