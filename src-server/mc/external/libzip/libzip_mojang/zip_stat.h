#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_stat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6d0504;
    ::ll::UntypedStorage<8, 8> mUnk7c08c9;
    ::ll::UntypedStorage<8, 8> mUnkac5f70;
    ::ll::UntypedStorage<8, 8> mUnk2de8cb;
    ::ll::UntypedStorage<8, 8> mUnk3a74ac;
    ::ll::UntypedStorage<8, 8> mUnkfa393e;
    ::ll::UntypedStorage<4, 4> mUnkdaf96b;
    ::ll::UntypedStorage<2, 2> mUnkc005bd;
    ::ll::UntypedStorage<2, 2> mUnk6fe287;
    ::ll::UntypedStorage<4, 4> mUnkba1f74;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_stat& operator=(zip_stat const&);
    zip_stat(zip_stat const&);
    zip_stat();

};
