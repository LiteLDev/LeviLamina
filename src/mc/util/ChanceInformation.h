#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChanceInformation {

public:
    // prevent constructor by default
    ChanceInformation& operator=(ChanceInformation const&) = delete;
    ChanceInformation(ChanceInformation const&)            = delete;
    ChanceInformation()                                    = delete;

public:
    /**
     * @symbol ?isValid\@ChanceInformation\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?roll\@ChanceInformation\@\@QEBA_NAEAVRandom\@\@\@Z
     */
    MCAPI bool roll(class Random&) const; // NOLINT
    /**
     * @symbol ?set\@ChanceInformation\@\@QEAAXII\@Z
     */
    MCAPI void set(unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ?set\@ChanceInformation\@\@QEAAXM\@Z
     */
    MCAPI void set(float); // NOLINT
};
