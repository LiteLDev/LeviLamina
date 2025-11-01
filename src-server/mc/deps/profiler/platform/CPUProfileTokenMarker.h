#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CPUProfileTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk646fb4;
    ::ll::UntypedStorage<8, 32> mUnk2f38ff;
    ::ll::UntypedStorage<1, 1> mUnk924f2c;
    // NOLINTEND

public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();

};

}
