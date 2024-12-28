#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::details {

class WorkToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf1745f;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkToken& operator=(WorkToken const&);
    WorkToken(WorkToken const&);
    WorkToken();
};

} // namespace cg::details
