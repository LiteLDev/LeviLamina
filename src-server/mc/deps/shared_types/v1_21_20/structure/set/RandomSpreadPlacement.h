#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct RandomSpreadPlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke76a8b;
    ::ll::UntypedStorage<4, 4> mUnk3a9dc1;
    ::ll::UntypedStorage<2, 2> mUnk71bc9e;
    ::ll::UntypedStorage<2, 2> mUnkf621cc;
    ::ll::UntypedStorage<1, 1> mUnkc11196;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSpreadPlacement& operator=(RandomSpreadPlacement const&);
    RandomSpreadPlacement(RandomSpreadPlacement const&);
    RandomSpreadPlacement();

};

}
