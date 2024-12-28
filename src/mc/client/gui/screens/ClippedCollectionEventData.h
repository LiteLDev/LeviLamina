#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClippedCollectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk96a0f8;
    ::ll::UntypedStorage<4, 4> mUnk1795be;
    ::ll::UntypedStorage<4, 4> mUnk71109d;
    ::ll::UntypedStorage<8, 8> mUnk6e7460;
    // NOLINTEND

public:
    // prevent constructor by default
    ClippedCollectionEventData& operator=(ClippedCollectionEventData const&);
    ClippedCollectionEventData(ClippedCollectionEventData const&);
    ClippedCollectionEventData();
};
