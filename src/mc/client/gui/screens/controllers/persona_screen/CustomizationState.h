#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace personaScreen {

enum class CustomizationState : uchar {
    Categories                = 0,
    CategoryFeaturedPieceList = 1,
    CreatorPieceList          = 2,
    MainFeaturedPieceList     = 3,
    PieceList                 = 4,
    ProfileFeaturedPieceList  = 5,
    SubCategories             = 6,
    EmotesList                = 7,
    None                      = 8,
};

}
