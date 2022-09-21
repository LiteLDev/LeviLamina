/**
 * @file  MC/RandomValueBounds.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1637273808
     * @symbol ?deserialize@RandomValueBounds@@QEAAXAEBVValue@Json@@@Z
     */
    MCAPI void deserialize(class Json::Value const &);
    /**
     * @hash   545160091
     * @symbol ?getFloat@RandomValueBounds@@QEBAMAEAVRandom@@@Z
     */
    MCAPI float getFloat(class Random &) const;
    /**
     * @hash   -794073565
     * @symbol ?getInt@RandomValueBounds@@QEBAHAEAVRandom@@@Z
     */
    MCAPI int getInt(class Random &) const;
    /**
     * @hash   1221843696
     * @symbol ?getMax@RandomValueBounds@@QEBAMXZ
     */
    MCAPI float getMax() const;
    /**
     * @hash   -1103894340
     * @symbol ?getMin@RandomValueBounds@@QEBAMXZ
     */
    MCAPI float getMin() const;

};