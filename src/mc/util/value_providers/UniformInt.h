#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct UniformInt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk46db93;
    ::ll::UntypedStorage<4, 4> mUnk769dc1;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformInt& operator=(UniformInt const&);
    UniformInt(UniformInt const&);
    UniformInt();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int generateNext(::Random& random) const;
    // NOLINTEND
};

} // namespace ValueProviders
