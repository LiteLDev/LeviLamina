#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_source {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk521670;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8> mUnk51a56a;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8> mUnk3afa3b;
#endif
    ::ll::UntypedStorage<8, 8>  mUnk869415;
    ::ll::UntypedStorage<8, 16> mUnk51eaf9;
    ::ll::UntypedStorage<8, 8>  mUnk3c7c2d;
    ::ll::UntypedStorage<4, 4>  mUnk3de651;
    ::ll::UntypedStorage<4, 4>  mUnk427593;
    ::ll::UntypedStorage<1, 1>  mUnk85d874;
    ::ll::UntypedStorage<8, 8>  mUnk4c8943;
    ::ll::UntypedStorage<4, 4>  mUnk58d605;
    ::ll::UntypedStorage<1, 1>  mUnk3f1cfa;
    ::ll::UntypedStorage<1, 1>  mUnk186f5d;
    ::ll::UntypedStorage<8, 8>  mUnk47d29a;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_source& operator=(zip_source const&);
    zip_source(zip_source const&);
    zip_source();
};
