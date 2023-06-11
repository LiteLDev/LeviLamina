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
public:
    /**
     * @symbol ??0SlotDescriptor\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SlotDescriptor(struct SlotDescriptor const &);
    /**
     * @symbol ??0SlotDescriptor\@\@QEAA\@XZ
     */
    MCAPI SlotDescriptor();
    /**
     * @symbol ?addAcceptedItem\@SlotDescriptor\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addAcceptedItem(class ItemDescriptor const &);
    /**
     * @symbol ??4SlotDescriptor\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SlotDescriptor & operator=(struct SlotDescriptor const &);
    /**
     * @symbol ??1SlotDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~SlotDescriptor();

};