#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
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

    MCAPI int getValue(::IRandom& random) const;

    MCAPI int getValueInclusive(::IRandom& random) const;

    MCAPI bool isInRangeInclusive(int value) const;

    MCAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(int value);

    MCFOLD void* $ctor(int min, int max);
    // NOLINTEND
};
