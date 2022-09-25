/**
 * @file  RelativeFloat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RelativeFloat.
 *
 */
class RelativeFloat {

#define AFTER_EXTRA
// Add Member There
public:
    float value;
    bool is_relative;

    RelativeFloat(float value)
        : value(value)
        , is_relative(true) {
    }

    inline float getFloat(float center) const {
        if (is_relative)
            return center + value;
        return value;
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELATIVEFLOAT
public:
    class RelativeFloat& operator=(class RelativeFloat const &) = delete;
    RelativeFloat(class RelativeFloat const &) = delete;
#endif

public:
    /**
     * @hash   1491997340
     * @symbol ??0RelativeFloat@@QEAA@XZ
     */
    MCAPI RelativeFloat();
    /**
     * @hash   -528987998
     * @symbol ??0RelativeFloat@@QEAA@M_N@Z
     */
    MCAPI RelativeFloat(float, bool);
    /**
     * @hash   -802423667
     * @symbol ?getValue@RelativeFloat@@QEBAMM@Z
     */
    MCAPI float getValue(float) const;

};