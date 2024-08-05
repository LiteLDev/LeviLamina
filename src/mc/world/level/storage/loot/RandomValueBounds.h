#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RandomValueBounds {
public:
    // prevent constructor by default
    RandomValueBounds& operator=(RandomValueBounds const&);
    RandomValueBounds(RandomValueBounds const&);
    RandomValueBounds();

public:
    // NOLINTBEGIN
    MCAPI void deserialize(class Json::Value const& object);

    MCAPI float getFloat(class Random& random) const;

    MCAPI int getInt(class Random& random) const;

    // NOLINTEND
};
