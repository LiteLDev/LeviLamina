#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::RunLoop {

struct Variables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk45e447;
    ::ll::UntypedStorage<8, 80> mUnk794921;
    ::ll::UntypedStorage<8, 72> mUnk73908c;
    // NOLINTEND

public:
    // prevent constructor by default
    Variables& operator=(Variables const&);
    Variables(Variables const&);
    Variables();
};

} // namespace NetherNet::RunLoop
