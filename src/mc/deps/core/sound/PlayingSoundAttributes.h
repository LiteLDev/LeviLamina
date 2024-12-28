#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayingSoundAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9d3341;
    ::ll::UntypedStorage<4, 4> mUnk931213;
    ::ll::UntypedStorage<4, 4> mUnk192f8a;
    ::ll::UntypedStorage<4, 4> mUnk473ec7;
    ::ll::UntypedStorage<1, 1> mUnk2ad166;
    ::ll::UntypedStorage<1, 1> mUnk6969fe;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayingSoundAttributes& operator=(PlayingSoundAttributes const&);
    PlayingSoundAttributes(PlayingSoundAttributes const&);
    PlayingSoundAttributes();
};
