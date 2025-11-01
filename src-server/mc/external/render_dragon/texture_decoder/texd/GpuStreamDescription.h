#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct GpuStreamDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9b5b91;
    ::ll::UntypedStorage<4, 4> mUnke138eb;
    ::ll::UntypedStorage<8, 8> mUnk53ba7f;
    ::ll::UntypedStorage<4, 4> mUnkd7ff8c;
    // NOLINTEND

public:
    // prevent constructor by default
    GpuStreamDescription& operator=(GpuStreamDescription const&);
    GpuStreamDescription(GpuStreamDescription const&);
    GpuStreamDescription();

};

}
