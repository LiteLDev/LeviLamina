#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct FacetAchievementCategoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAchievements;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FacetAchievementCategoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
