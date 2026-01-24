#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct CameraMatrices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkefc815;
    ::ll::UntypedStorage<4, 64> mUnka1265e;
    ::ll::UntypedStorage<4, 64> mUnk421921;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraMatrices& operator=(CameraMatrices const&);
    CameraMatrices(CameraMatrices const&);
    CameraMatrices();
};

} // namespace mce
