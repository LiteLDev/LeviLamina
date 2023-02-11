/**
 * @file  BoostItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct BoostItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTITEM
public:
    struct BoostItem& operator=(struct BoostItem const &) = delete;
    BoostItem(struct BoostItem const &) = delete;
    BoostItem() = delete;
#endif

public:
    /**
     * @symbol  ?setReplacementItemDescriptor\@BoostItem\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const &);
    /**
     * @symbol  ??1BoostItem\@\@QEAA\@XZ
     */
    MCAPI ~BoostItem();

};