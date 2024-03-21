#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct IntRange {
public:
    // prevent constructor by default
    IntRange& operator=(IntRange const&);
    IntRange(IntRange const&);
    IntRange();

public:
    // NOLINTBEGIN
    // symbol: ??0IntRange@@QEAA@H@Z
    MCAPI explicit IntRange(int value);

    // symbol: ??0IntRange@@QEAA@HH@Z
    MCAPI IntRange(int min, int max);

    // symbol: ?getValue@IntRange@@QEBAHAEAVRandom@@@Z
    MCAPI int getValue(class Random& random) const;

    // symbol: ?getValueInclusive@IntRange@@QEBAHAEAVRandom@@@Z
    MCAPI int getValueInclusive(class Random& random) const;

    // symbol: ?getValueInclusive@IntRange@@QEBAHAEAVRandomize@@@Z
    MCAPI int getValueInclusive(class Randomize&) const;

    // symbol: ?isInRangeInclusive@IntRange@@QEBA_NH@Z
    MCAPI bool isInRangeInclusive(int value) const;

    // symbol: ?parseJson@IntRange@@QEAA_NVValue@Json@@HH@Z
    MCAPI bool parseJson(class Json::Value node, int minDefault, int maxDefault);

    // symbol: ?ZERO@IntRange@@2U1@B
    MCAPI static struct IntRange const ZERO;

    // NOLINTEND
};
