/**
 * @file  ChanceInformation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChanceInformation.
 *
 */
class ChanceInformation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANCEINFORMATION
public:
    class ChanceInformation& operator=(class ChanceInformation const &) = delete;
    ChanceInformation(class ChanceInformation const &) = delete;
    ChanceInformation() = delete;
#endif

public:
    /**
     * @hash   -2088757858
     * @symbol ?isValid@ChanceInformation@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -542747997
     * @symbol ?roll@ChanceInformation@@QEBA_NAEAVRandom@@@Z
     */
    MCAPI bool roll(class Random &) const;
    /**
     * @hash   -801443887
     * @symbol ?set@ChanceInformation@@QEAAXII@Z
     */
    MCAPI void set(unsigned int, unsigned int);
    /**
     * @hash   1996620064
     * @symbol ?set@ChanceInformation@@QEAAXM@Z
     */
    MCAPI void set(float);

};