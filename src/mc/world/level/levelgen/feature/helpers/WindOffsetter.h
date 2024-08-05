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
    WindOffsetter& operator=(WindOffsetter const&);
    WindOffsetter(WindOffsetter const&);

public:
    // NOLINTBEGIN
    MCAPI WindOffsetter();

    MCAPI WindOffsetter(int originY, class Random& random, struct ValueProviders::UniformFloat const&);

    MCAPI class BlockPos offset(class BlockPos pos) const;

    // NOLINTEND
};

}; // namespace DripstoneUtils
