#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::color {

class SwatchListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb40574;
    ::ll::UntypedStorage<8, 32> mUnk155243;
    // NOLINTEND

public:
    // prevent constructor by default
    SwatchListInfo& operator=(SwatchListInfo const&);
    SwatchListInfo(SwatchListInfo const&);
    SwatchListInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::persona::color::SwatchListInfo& operator=(::persona::color::SwatchListInfo&&);

    MCNAPI ~SwatchListInfo();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace persona::color
