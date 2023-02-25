/**
 * @file  IntRange.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure IntRange.
 *
 */
struct IntRange {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTRANGE
public:
    struct IntRange& operator=(struct IntRange const &) = delete;
    IntRange(struct IntRange const &) = delete;
    IntRange() = delete;
#endif

public:
    /**
     * @symbol  ??0IntRange\@\@QEAA\@H\@Z
     */
    MCAPI IntRange(int);
    /**
     * @symbol  ??0IntRange\@\@QEAA\@HH\@Z
     */
    MCAPI IntRange(int, int);
    /**
     * @symbol  ?getValue\@IntRange\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getValue(class Random &) const;
    /**
     * @symbol  ?getValueInclusive\@IntRange\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getValueInclusive(class Random &) const;
    /**
     * @symbol  ?isInRangeInclusive\@IntRange\@\@QEBA_NH\@Z
     */
    MCAPI bool isInRangeInclusive(int) const;
    /**
     * @symbol  ?parseJson\@IntRange\@\@QEAA_NVValue\@Json\@\@HH\@Z
     */
    MCAPI bool parseJson(class Json::Value, int, int);
    /**
     * @symbol  ?ZERO\@IntRange\@\@2U1\@B
     */
    MCAPI static struct IntRange const ZERO;

};