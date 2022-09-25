/**
 * @file  CommandIntegerRange.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandIntegerRange.
 *
 */
class CommandIntegerRange {

#define AFTER_EXTRA
public:
    int min, max;
    bool inverted;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDINTEGERRANGE
public:
    class CommandIntegerRange& operator=(class CommandIntegerRange const &) = delete;
    CommandIntegerRange(class CommandIntegerRange const &) = delete;
#endif

public:
    /**
     * @hash   -2077189482
     * @symbol ??0CommandIntegerRange@@QEAA@XZ
     */
    MCAPI CommandIntegerRange();
    /**
     * @hash   -697074593
     * @symbol ??0CommandIntegerRange@@QEAA@HH_N@Z
     */
    MCAPI CommandIntegerRange(int, int, bool);
    /**
     * @hash   1413957599
     * @symbol ?isWithinRange@CommandIntegerRange@@QEBA_NH@Z
     */
    MCAPI bool isWithinRange(int) const;

};