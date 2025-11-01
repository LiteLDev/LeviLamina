#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct PlayerInVillageFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk87a673;
    ::ll::UntypedStorage<4, 4> mUnkf94bbb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInVillageFilter& operator=(PlayerInVillageFilter const&);
    PlayerInVillageFilter(PlayerInVillageFilter const&);
    PlayerInVillageFilter();

};

}
