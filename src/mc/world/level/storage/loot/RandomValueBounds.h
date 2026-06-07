#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

class RandomValueBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk98064d;
    ::ll::UntypedStorage<4, 4> mUnk79891e;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomValueBounds& operator=(RandomValueBounds const&);
    RandomValueBounds(RandomValueBounds const&);
    RandomValueBounds();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deserialize(::Json::Value const& object);

    MCNAPI float getFloat(::Random& random) const;

    MCNAPI int getInt(::Random& random) const;

    MCNAPI float getMax() const;

    MCNAPI float getMin() const;
    // NOLINTEND
};
