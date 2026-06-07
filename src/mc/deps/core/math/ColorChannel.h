#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc791a4;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&);
    ColorChannel(ColorChannel const&);
    ColorChannel();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&);
    ColorChannel(ColorChannel const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ColorChannel();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ColorChannel const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
