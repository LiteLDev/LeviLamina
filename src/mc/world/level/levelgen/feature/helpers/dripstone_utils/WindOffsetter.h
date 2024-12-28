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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5b4900;
    ::ll::UntypedStorage<4, 16> mUnk688166;
    // NOLINTEND

public:
    // prevent constructor by default
    WindOffsetter& operator=(WindOffsetter const&);
    WindOffsetter(WindOffsetter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WindOffsetter();

    MCAPI WindOffsetter(int originY, ::Random& random, ::ValueProviders::UniformFloat const& windSpeedRange);

    MCAPI ::BlockPos offset(::BlockPos pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(int originY, ::Random& random, ::ValueProviders::UniformFloat const& windSpeedRange);
    // NOLINTEND
};

} // namespace DripstoneUtils
