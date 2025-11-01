#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct AtlasCreationTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke482ba;
    ::ll::UntypedStorage<4, 4> mUnk256dca;
    ::ll::UntypedStorage<1, 1> mUnk53f86a;
    // NOLINTEND

public:
    // prevent constructor by default
    AtlasCreationTile& operator=(AtlasCreationTile const&);
    AtlasCreationTile(AtlasCreationTile const&);
    AtlasCreationTile();

};

}
