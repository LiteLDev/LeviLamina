#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BannerRecipes {

public:
    // prevent constructor by default
    BannerRecipes& operator=(BannerRecipes const&) = delete;
    BannerRecipes(BannerRecipes const&)            = delete;
    BannerRecipes()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addRecipes\@BannerRecipes\@\@SAXAEAVRecipes\@\@\@Z
     */
    MCAPI static void addRecipes(class Recipes&);
    // NOLINTEND
};
