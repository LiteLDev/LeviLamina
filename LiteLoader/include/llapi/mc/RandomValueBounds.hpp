/**
 * @file  RandomValueBounds.hpp
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
 * @brief MC class RandomValueBounds.
 *
 */
class RandomValueBounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMVALUEBOUNDS
public:
    class RandomValueBounds& operator=(class RandomValueBounds const &) = delete;
    RandomValueBounds(class RandomValueBounds const &) = delete;
    RandomValueBounds() = delete;
#endif

public:
    /**
     * @hash   -958484912
     * @symbol  ?deserialize\@RandomValueBounds\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const &);
    /**
     * @hash   -98294757
     * @symbol  ?getFloat\@RandomValueBounds\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getFloat(class Random &) const;
    /**
     * @hash   -115284669
     * @symbol  ?getInt\@RandomValueBounds\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getInt(class Random &) const;
    /**
     * @hash   1487371840
     * @symbol  ?getMax\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMax() const;
    /**
     * @hash   -838366196
     * @symbol  ?getMin\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMin() const;

};