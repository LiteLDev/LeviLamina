#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Radian; }
// clang-format on

namespace mce {

struct Degree {
public:
    // prevent constructor by default
    Degree& operator=(Degree const&);
    Degree(Degree const&);
    Degree();

public:
    // NOLINTBEGIN
    MCAPI explicit Degree(struct mce::Radian rad);

    MCAPI float const& asFloat() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct mce::Radian rad);

    // NOLINTEND
};

}; // namespace mce
