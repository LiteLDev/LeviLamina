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
    MCAPI explicit IntRange(int value);

    MCAPI IntRange(int min, int max);

    MCAPI int getValue(class Random& random) const;

    MCAPI int getValueInclusive(class Random& random) const;

    MCAPI int getValueInclusive(class Randomize& randomize) const;

    MCAPI bool isInRangeInclusive(int value) const;

    MCAPI bool parseJson(class Json::Value node, int minDefault, int maxDefault);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static struct IntRange const& ZERO();

    // NOLINTEND
};
