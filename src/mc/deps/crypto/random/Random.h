#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {

public:
    // prevent constructor by default
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;

public:
    /**
     * @symbol ??0Random\@0Crypto\@\@QEAA\@XZ
     */
    MCAPI Random(); // NOLINT
    /**
     * @symbol ?fillData\@Random\@1Crypto\@\@QEAAXPEADI\@Z
     */
    MCAPI void fillData(char*, unsigned int); // NOLINT
    /**
     * @symbol
     * ?getBytes\@Random\@1Crypto\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI std::string getBytes(unsigned int); // NOLINT
};

}; // namespace Crypto::Random
