#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhotoItemSavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3c0173;
    ::ll::UntypedStorage<8, 32> mUnk660b1f;
    ::ll::UntypedStorage<8, 8>  mUnk73a428;
    ::ll::UntypedStorage<1, 1>  mUnk25c2f6;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoItemSavedData& operator=(PhotoItemSavedData const&);
    PhotoItemSavedData(PhotoItemSavedData const&);
    PhotoItemSavedData();
};
