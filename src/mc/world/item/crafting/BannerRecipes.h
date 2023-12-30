#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BannerRecipes {
public:
    // prevent constructor by default
    BannerRecipes& operator=(BannerRecipes const&);
    BannerRecipes(BannerRecipes const&);
    BannerRecipes();

public:
    // NOLINTBEGIN
    // symbol: ?addRecipes@BannerRecipes@@SAXAEAVRecipes@@@Z
    MCAPI static void addRecipes(class Recipes& r);

    // NOLINTEND
};
