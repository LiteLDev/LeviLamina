#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
// clang-format on

namespace NoiseUtils {

class DelegatingRandom : public ::IRandom {
public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const&);
    DelegatingRandom(DelegatingRandom const&);
    DelegatingRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DelegatingRandom@NoiseUtils@@UEAA@XZ
    virtual ~DelegatingRandom() = default;

    // NOLINTEND
};

}; // namespace NoiseUtils
