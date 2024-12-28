#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct VolumeControlData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk714613;
    ::ll::UntypedStorage<4, 4> mUnk908f36;
    ::ll::UntypedStorage<4, 4> mUnk95d4ef;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeControlData& operator=(VolumeControlData const&);
    VolumeControlData(VolumeControlData const&);
    VolumeControlData();
};

} // namespace SFAT
