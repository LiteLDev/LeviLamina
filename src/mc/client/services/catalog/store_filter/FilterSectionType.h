#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StoreFilter {

enum class FilterSectionType : uint {
    MainMenu              = 0,
    PackTypeSection       = 1,
    MinecoinSection       = 2,
    RatingSection         = 3,
    CreatorSection        = 4,
    InstalledState        = 5,
    MainMenuFilterToggles = 6,
    OfferTypeSection      = 7,
    DressingRoomStyle     = 8,
    DressingRoomBody      = 9,
    DressingRoomEmote     = 10,
    Unknown               = 11,
};

}
