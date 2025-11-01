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
    ::ll::TypedStorage<4, 4, int> rangeMin;
    ::ll::TypedStorage<4, 4, int> rangeMax;
    // NOLINTEND

public:
    // prevent constructor by default
    IntRange();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit IntRange(int value);

    MCAPI IntRange(int min, int max);

    MCAPI int getValue(::Random& random) const;

    MCAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int value);

    MCAPI void* $ctor(int min, int max);
    // NOLINTEND

};
