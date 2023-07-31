#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChanceInformation {

public:
    // prevent constructor by default
    ChanceInformation& operator=(ChanceInformation const&) = delete;
    ChanceInformation(ChanceInformation const&)            = delete;
    ChanceInformation()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isValid\@ChanceInformation\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?roll\@ChanceInformation\@\@QEBA_NAEAVRandom\@\@\@Z
     */
    MCAPI bool roll(class Random&) const;
    /**
     * @symbol ?set\@ChanceInformation\@\@QEAAXII\@Z
     */
    MCAPI void set(unsigned int, unsigned int);
    /**
     * @symbol ?set\@ChanceInformation\@\@QEAAXM\@Z
     */
    MCAPI void set(float);
    // NOLINTEND
};
