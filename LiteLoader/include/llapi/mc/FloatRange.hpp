/**
 * @file  FloatRange.hpp
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
 * @brief MC structure FloatRange.
 *
 */
struct FloatRange {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATRANGE
public:
    struct FloatRange& operator=(struct FloatRange const &) = delete;
    FloatRange(struct FloatRange const &) = delete;
    FloatRange() = delete;
#endif

public:
    /**
     * @symbol  ?getValue\@FloatRange\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getValue(class Random &) const;
    /**
     * @symbol  ?parseJson\@FloatRange\@\@QEAA_NAEBVValue\@Json\@\@MM\@Z
     */
    MCAPI bool parseJson(class Json::Value const &, float, float);

};