#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
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
    MCNAPI explicit IntRange(int value);

    MCNAPI IntRange(int min, int max);

    MCNAPI int getValue(::Random& random) const;

    MCNAPI int getValueInclusive(::Random& random) const;

    MCNAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::IntRange const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int value);

    MCNAPI void* $ctor(int min, int max);
    // NOLINTEND
};
