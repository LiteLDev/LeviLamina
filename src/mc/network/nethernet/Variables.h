#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::RunLoop {

struct Variables {
public:
    // prevent constructor by default
    Variables& operator=(Variables const&);
    Variables(Variables const&);
    Variables();
};

}; // namespace NetherNet::RunLoop
