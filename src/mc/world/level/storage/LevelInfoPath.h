#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelInfoPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk28129f;
    ::ll::UntypedStorage<4, 4>  mUnkb32869;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelInfoPath& operator=(LevelInfoPath const&);
    LevelInfoPath(LevelInfoPath const&);
    LevelInfoPath();
};
