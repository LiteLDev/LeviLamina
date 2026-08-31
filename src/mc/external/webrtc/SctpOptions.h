#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SctpOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf768c1;
    ::ll::UntypedStorage<4, 4> mUnkf10e07;
    ::ll::UntypedStorage<4, 4> mUnk3fc7d9;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpOptions& operator=(SctpOptions const&);
    SctpOptions(SctpOptions const&);
    SctpOptions();
};

} // namespace webrtc
