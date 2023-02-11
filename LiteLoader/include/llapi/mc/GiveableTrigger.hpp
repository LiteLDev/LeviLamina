/**
 * @file  GiveableTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GiveableTrigger.
 *
 */
struct GiveableTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLETRIGGER
public:
    struct GiveableTrigger& operator=(struct GiveableTrigger const &) = delete;
    GiveableTrigger() = delete;
#endif

public:
    /**
     * @hash   -734895195
     * @symbol  ??0GiveableTrigger\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GiveableTrigger(struct GiveableTrigger const &);
    /**
     * @hash   1992769984
     * @symbol  ?addItem\@GiveableTrigger\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addItem(class ItemDescriptor const &);
    /**
     * @hash   407602009
     * @symbol  ??1GiveableTrigger\@\@QEAA\@XZ
     */
    MCAPI ~GiveableTrigger();

};