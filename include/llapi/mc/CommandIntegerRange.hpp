/**
 * @file  CommandIntegerRange.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandIntegerRange.
 *
 */
class CommandIntegerRange {

#define AFTER_EXTRA
public:
    int mMinValue;
    int mMaxValue;
    bool mInvert;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDINTEGERRANGE
public:
    class CommandIntegerRange& operator=(class CommandIntegerRange const &) = delete;
    CommandIntegerRange(class CommandIntegerRange const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CommandIntegerRange\@\@QEAA\@XZ
     */
    MCAPI CommandIntegerRange();
    /**
     * @symbol  ??0CommandIntegerRange\@\@QEAA\@HH_N\@Z
     */
    MCAPI CommandIntegerRange(int, int, bool);
    /**
     * @symbol  ?isWithinRange\@CommandIntegerRange\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinRange(int) const;

};