#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

struct LayoutOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3866fb;
    ::ll::UntypedStorage<8, 24> mUnk8a2cd7;
    ::ll::UntypedStorage<4, 4>  mUnk73e16c;
    ::ll::UntypedStorage<4, 4>  mUnkb14ffa;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutOffset& operator=(LayoutOffset const&);
    LayoutOffset(LayoutOffset const&);
    LayoutOffset();
};

} // namespace ui
