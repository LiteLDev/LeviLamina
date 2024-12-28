#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct CellTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcce9b6;
    ::ll::UntypedStorage<4, 4> mUnke79423;
    ::ll::UntypedStorage<4, 4> mUnkd11289;
    // NOLINTEND

public:
    // prevent constructor by default
    CellTestResult& operator=(CellTestResult const&);
    CellTestResult(CellTestResult const&);
    CellTestResult();
};

} // namespace SFAT
