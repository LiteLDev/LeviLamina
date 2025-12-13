#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::color {

class SwatchListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb40574;
    ::ll::UntypedStorage<8, 32> mUnkca53cf;
    // NOLINTEND

public:
    // prevent constructor by default
    SwatchListInfo& operator=(SwatchListInfo const&);
    SwatchListInfo(SwatchListInfo const&);
    SwatchListInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::persona::color::SwatchListInfo& operator=(::persona::color::SwatchListInfo&&);

    MCNAPI_C ~SwatchListInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace persona::color
