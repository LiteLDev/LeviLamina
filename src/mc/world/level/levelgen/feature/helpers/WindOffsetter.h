#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ValueProviders { struct UniformFloat; }
// clang-format on

namespace DripstoneUtils {

class WindOffsetter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRIPSTONEUTILS_WINDOFFSETTER
public:
    WindOffsetter& operator=(WindOffsetter const&) = delete;
    WindOffsetter(WindOffsetter const&)            = delete;
#endif

public:
    /**
     * @symbol ??0WindOffsetter\@DripstoneUtils\@\@QEAA\@XZ
     */
    MCAPI WindOffsetter();
    /**
     * @symbol ??0WindOffsetter\@DripstoneUtils\@\@QEAA\@HAEAVRandom\@\@AEBUUniformFloat\@ValueProviders\@\@\@Z
     */
    MCAPI WindOffsetter(int, class Random&, struct ValueProviders::UniformFloat const&);
    /**
     * @symbol ?offset\@WindOffsetter\@DripstoneUtils\@\@QEBA?AVBlockPos\@\@V3\@\@Z
     */
    MCAPI class BlockPos offset(class BlockPos) const;
};

}; // namespace DripstoneUtils
