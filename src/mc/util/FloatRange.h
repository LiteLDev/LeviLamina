#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

struct FloatRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaba715;
    ::ll::UntypedStorage<4, 4> mUnkcfba95;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&);
    FloatRange(FloatRange const&);
    FloatRange();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getValue(::Random& random) const;

    MCAPI bool parseJson(::Json::Value const& node, float minDefault, float maxDefault);
    // NOLINTEND
};
