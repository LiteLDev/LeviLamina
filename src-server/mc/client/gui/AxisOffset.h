#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

struct AxisOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk527ba8;
    ::ll::UntypedStorage<4, 4> mUnk521ccf;
    ::ll::UntypedStorage<4, 4> mUnk6721ce;
    // NOLINTEND

public:
    // prevent constructor by default
    AxisOffset& operator=(AxisOffset const&);
    AxisOffset(AxisOffset const&);
    AxisOffset();

};

}
