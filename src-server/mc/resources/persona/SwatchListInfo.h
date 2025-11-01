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

};

}
