#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RatingData;
// clang-format on

namespace OreUI {

struct RatingDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          averageRating;
    ::ll::TypedStorage<4, 4, int>            totalRatingsCount;
    ::ll::TypedStorage<8, 32, ::std::string> displayRatingCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RatingDataBindings(::RatingData const& ratingData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RatingData const& ratingData);
    // NOLINTEND
};

} // namespace OreUI
