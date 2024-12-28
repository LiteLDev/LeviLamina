#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinnedMeshGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkce9b31;
    ::ll::UntypedStorage<8, 64> mUnkafd2c0;
    ::ll::UntypedStorage<1, 1>  mUnk4d4b20;
    ::ll::UntypedStorage<1, 1>  mUnk2eabf9;
    ::ll::UntypedStorage<4, 4>  mUnk3b8c0d;
    ::ll::UntypedStorage<8, 24> mUnkdc7602;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinnedMeshGroup& operator=(SkinnedMeshGroup const&);
    SkinnedMeshGroup(SkinnedMeshGroup const&);
    SkinnedMeshGroup();
};
