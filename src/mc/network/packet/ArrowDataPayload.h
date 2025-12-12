#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct ArrowDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEndLocation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mArrowHeadLength;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mArrowHeadRadius;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>   mNumSegments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ArrowDataPayload const&) const;
    // NOLINTEND
};
