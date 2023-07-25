#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChanceInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANCEINFORMATION
public:
    ChanceInformation& operator=(ChanceInformation const&) = delete;
    ChanceInformation(ChanceInformation const&)            = delete;
    ChanceInformation()                                    = delete;
#endif

public:
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
};
