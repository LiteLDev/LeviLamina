#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct TeamSelection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk90c24f;
    ::ll::UntypedStorage<8, 8> mUnk410346;
    // NOLINTEND

public:
    // prevent constructor by default
    TeamSelection& operator=(TeamSelection const&);
    TeamSelection(TeamSelection const&);
    TeamSelection();

};

}
