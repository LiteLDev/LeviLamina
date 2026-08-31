#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    // member functions
    // NOLINTBEGIN
    MCAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
    // NOLINTEND
};
