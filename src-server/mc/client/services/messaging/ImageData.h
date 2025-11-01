#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk566687;
    ::ll::UntypedStorage<8, 32> mUnk6fb5d6;
    ::ll::UntypedStorage<8, 32> mUnk9220cb;
    ::ll::UntypedStorage<8, 32> mUnk3ac088;
    ::ll::UntypedStorage<1, 1> mUnkd44fab;
    ::ll::UntypedStorage<4, 12> mUnkdf0cdb;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageData& operator=(ImageData const&);
    ImageData(ImageData const&);
    ImageData();

};
