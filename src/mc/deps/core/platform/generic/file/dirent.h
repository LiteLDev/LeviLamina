#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct dirent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkdf2cc6;
    ::ll::UntypedStorage<2, 2>   mUnkd824c9;
    ::ll::UntypedStorage<8, 8>   mUnk7321d1;
    ::ll::UntypedStorage<4, 4>   mUnkff533a;
    ::ll::UntypedStorage<1, 260> mUnk70f950;
    // NOLINTEND

public:
    // prevent constructor by default
    dirent& operator=(dirent const&);
    dirent(dirent const&);
    dirent();
};
