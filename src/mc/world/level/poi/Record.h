#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct Record {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkc9efe9;
    ::ll::UntypedStorage<1, 1> mUnka03133;
    // NOLINTEND

public:
    // prevent constructor by default
    Record& operator=(Record const&);
    Record(Record const&);
    Record();
};

} // namespace Poi
