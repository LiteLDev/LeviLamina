#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Random;
namespace ValueProviders { struct UniformFloat; }
// clang-format on

namespace SpeleothemUtils {

class WindOffsetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      originY;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> windSpeed;
    // NOLINTEND

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
    MCFOLD void* $ctor();

    MCAPI void* $ctor(int originY, ::Random& random, ::ValueProviders::UniformFloat const& windSpeedRange);
    // NOLINTEND
};

} // namespace SpeleothemUtils
