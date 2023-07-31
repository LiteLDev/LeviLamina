#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Random;
namespace ValueProviders { struct UniformFloat; }
// clang-format on

namespace DripstoneUtils {

class WindOffsetter {

public:
    // prevent constructor by default
    WindOffsetter& operator=(WindOffsetter const&) = delete;
    WindOffsetter(WindOffsetter const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

}; // namespace DripstoneUtils
