#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct Member {
public:
    // prevent constructor by default
    Member& operator=(Member const&);
    Member(Member const&);
    Member();

public:
    // NOLINTBEGIN
    MCAPI ~Member();

    // NOLINTEND
};

}; // namespace cereal::internal
