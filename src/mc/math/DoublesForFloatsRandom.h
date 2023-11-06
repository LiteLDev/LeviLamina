#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/DelegatingRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
namespace NoiseUtils { class DelegatingRandom; }
// clang-format on

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // prevent constructor by default
    DoublesForFloatsRandom& operator=(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DoublesForFloatsRandom@NoiseUtils@@UEAA@XZ
    virtual ~DoublesForFloatsRandom();

    // vIndex: 5, symbol: ?nextFloat@DoublesForFloatsRandom@NoiseUtils@@UEAAMXZ
    virtual float nextFloat();

    // NOLINTEND
};

}; // namespace NoiseUtils
