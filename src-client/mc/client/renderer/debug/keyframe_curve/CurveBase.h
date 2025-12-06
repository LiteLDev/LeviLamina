#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct CurveBase {
public:
    // CurveBase inner types declare
    // clang-format off
    struct ControlPoint;
    // clang-format on

    // CurveBase inner types define
    enum class Type : uint {};

    struct ControlPoint {
    public:
        // ControlPoint inner types define
        union Data {};
    };
};

} // namespace mce
