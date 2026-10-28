#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace Gameface {

class IOffscreenRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOffscreenRenderer() = default;

    virtual void renderOffscreen(::ScreenContext& screenContext) = 0;
    // NOLINTEND
};

} // namespace Gameface
