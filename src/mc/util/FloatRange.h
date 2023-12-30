#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct FloatRange {
public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&);
    FloatRange(FloatRange const&);
    FloatRange();

public:
    // NOLINTBEGIN
    // symbol: ?getValue@FloatRange@@QEBAMAEAVRandom@@@Z
    MCAPI float getValue(class Random& random) const;

    // symbol: ?parseJson@FloatRange@@QEAA_NAEBVValue@Json@@MM@Z
    MCAPI bool parseJson(class Json::Value const& node, float minDefault, float maxDefault);

    // NOLINTEND
};
