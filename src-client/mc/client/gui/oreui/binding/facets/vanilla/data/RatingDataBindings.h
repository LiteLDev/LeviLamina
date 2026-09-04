#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct RatingDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          averageRating;
    ::ll::TypedStorage<4, 4, int>            totalRatingsCount;
    ::ll::TypedStorage<8, 32, ::std::string> displayRatingCount;
    // NOLINTEND
};

} // namespace OreUI
