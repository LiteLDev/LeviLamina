#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct once_flag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc91192;
    // NOLINTEND

public:
    // prevent constructor by default
    once_flag& operator=(once_flag const&);
    once_flag(once_flag const&);
    once_flag();

};

}
