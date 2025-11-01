#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka3d34a;
    ::ll::UntypedStorage<8, 8> mUnk20cd5d;
    ::ll::UntypedStorage<8, 8> mUnkd68a19;
    ::ll::UntypedStorage<8, 8> mUnkd400e3;
    // NOLINTEND

public:
    // prevent constructor by default
    PacerConfig& operator=(PacerConfig const&);
    PacerConfig(PacerConfig const&);
    PacerConfig();

};

}
