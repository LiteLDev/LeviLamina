#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AlrDetectorConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7ac0eb;
    ::ll::UntypedStorage<8, 8> mUnk582f3b;
    ::ll::UntypedStorage<8, 8> mUnka5c3a4;
    // NOLINTEND

public:
    // prevent constructor by default
    AlrDetectorConfig& operator=(AlrDetectorConfig const&);
    AlrDetectorConfig(AlrDetectorConfig const&);
    AlrDetectorConfig();
};

} // namespace webrtc
