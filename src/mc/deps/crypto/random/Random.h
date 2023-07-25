#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_RANDOM_RANDOM
public:
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Random\@0Crypto\@\@QEAA\@XZ
     */
    MCAPI Random();
    /**
     * @symbol ?fillData\@Random\@1Crypto\@\@QEAAXPEADI\@Z
     */
    MCAPI void fillData(char*, unsigned int);
    /**
     * @symbol
     * ?getBytes\@Random\@1Crypto\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI std::string getBytes(unsigned int);
};

}; // namespace Crypto::Random
