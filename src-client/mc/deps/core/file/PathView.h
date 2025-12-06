#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PathView {
public:
    // PathView inner types declare
    // clang-format off
    struct Hash;
    struct path_view_less;
    // clang-format on

    // PathView inner types define
    struct Hash {};

    struct path_view_less {};
};

} // namespace Core
