#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct UlpfecConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk504d34;
    ::ll::UntypedStorage<4, 4> mUnk861314;
    ::ll::UntypedStorage<4, 4> mUnk33366c;
    // NOLINTEND

public:
    // prevent constructor by default
    UlpfecConfig& operator=(UlpfecConfig const&);
    UlpfecConfig(UlpfecConfig const&);
    UlpfecConfig();
};

} // namespace webrtc
