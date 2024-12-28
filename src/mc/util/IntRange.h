#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
class Randomize;
namespace Json { class Value; }
// clang-format on

struct IntRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8edd10;
    ::ll::UntypedStorage<4, 4> mUnkac0553;
    // NOLINTEND

public:
    // prevent constructor by default
    IntRange& operator=(IntRange const&);
    IntRange(IntRange const&);
    IntRange();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit IntRange(int value);

    MCAPI IntRange(int min, int max);

    MCAPI int getValue(::Random& random) const;

    MCAPI int getValueInclusive(::Random& random) const;

    MCAPI int getValueInclusive(::Randomize& randomize) const;

    MCAPI bool isInRangeInclusive(int value) const;

    MCAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IntRange const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int value);

    MCAPI void* $ctor(int min, int max);
    // NOLINTEND
};
