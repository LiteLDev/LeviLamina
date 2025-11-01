#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct LoadTimeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9707d8;
    ::ll::UntypedStorage<4, 4> mUnke6e17d;
    ::ll::UntypedStorage<8, 8> mUnk721455;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTimeData& operator=(LoadTimeData const&);
    LoadTimeData(LoadTimeData const&);
    LoadTimeData();

};

}
