#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RecipeNetIdTag {

public:
    // prevent constructor by default
    RecipeNetIdTag& operator=(RecipeNetIdTag const&) = delete;
    RecipeNetIdTag(RecipeNetIdTag const&)            = delete;
    RecipeNetIdTag()                                 = delete;
};
