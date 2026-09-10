#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct DurationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk786b41;
    // NOLINTEND

public:
    // prevent constructor by default
    DurationInfo& operator=(DurationInfo const&);
    DurationInfo(DurationInfo const&);
    DurationInfo();
};

} // namespace ServerSoundRuntime
