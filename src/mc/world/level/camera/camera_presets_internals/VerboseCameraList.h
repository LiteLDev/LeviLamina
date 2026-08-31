#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct VerboseCameraList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2cd4dc;
    ::ll::UntypedStorage<8, 24> mUnk342555;
    // NOLINTEND

public:
    // prevent constructor by default
    VerboseCameraList& operator=(VerboseCameraList const&);
    VerboseCameraList(VerboseCameraList const&);
    VerboseCameraList();
};

} // namespace CameraPresetsInternals
