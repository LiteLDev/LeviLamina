#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct trad_pkware {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke809f2;
    ::ll::UntypedStorage<4, 12> mUnkca2a55;
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 8> mUnk99bb6f;
    ::ll::UntypedStorage<1, 1> mUnkd02d17;
    ::ll::UntypedStorage<2, 4> mUnk206f6a;
#endif
    ::ll::UntypedStorage<8, 16> mUnkab1db3;
    // NOLINTEND

public:
    // prevent constructor by default
    trad_pkware& operator=(trad_pkware const&);
    trad_pkware(trad_pkware const&);
    trad_pkware();
};
