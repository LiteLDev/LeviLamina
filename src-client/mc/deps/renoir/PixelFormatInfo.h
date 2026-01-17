#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct PixelFormatInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkac70d8;
    ::ll::UntypedStorage<4, 4> mUnk18774d;
    ::ll::UntypedStorage<4, 4> mUnk534b39;
    ::ll::UntypedStorage<4, 4> mUnkb07cce;
    // NOLINTEND

public:
    // prevent constructor by default
    PixelFormatInfo& operator=(PixelFormatInfo const&);
    PixelFormatInfo(PixelFormatInfo const&);
    PixelFormatInfo();
};

} // namespace renoir
