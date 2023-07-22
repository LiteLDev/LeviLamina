/**
 * @file  RandomValueBounds.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ?deserialize\@RandomValueBounds\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const &);
    /**
     * @symbol  ?getFloat\@RandomValueBounds\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getFloat(class Random &) const;
    /**
     * @symbol  ?getInt\@RandomValueBounds\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getInt(class Random &) const;
    /**
     * @symbol  ?getMax\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMax() const;
    /**
     * @symbol  ?getMin\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMin() const;

};