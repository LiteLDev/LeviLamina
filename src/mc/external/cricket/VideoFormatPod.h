#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoFormatPod {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke0da01;
    ::ll::UntypedStorage<4, 4> mUnk7d289f;
    ::ll::UntypedStorage<8, 8> mUnk4fc55f;
    ::ll::UntypedStorage<4, 4> mUnkb2f19f;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoFormatPod& operator=(VideoFormatPod const&);
    VideoFormatPod(VideoFormatPod const&);
    VideoFormatPod();
};

} // namespace cricket
