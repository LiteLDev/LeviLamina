#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BannerRecipes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERRECIPES
public:
    BannerRecipes& operator=(BannerRecipes const&) = delete;
    BannerRecipes(BannerRecipes const&)            = delete;
    BannerRecipes()                                = delete;
#endif

public:
    /**
     * @symbol ?addRecipes\@BannerRecipes\@\@SAXAEAVRecipes\@\@\@Z
     */
    MCAPI static void addRecipes(class Recipes&);
};
