#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class MakeFileTransaction {
public:
    // prevent constructor by default
    MakeFileTransaction& operator=(MakeFileTransaction const&);
    MakeFileTransaction(MakeFileTransaction const&);
    MakeFileTransaction();
};

} // namespace Core
