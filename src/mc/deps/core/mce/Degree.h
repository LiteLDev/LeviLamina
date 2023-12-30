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
    // symbol: ??0Degree@mce@@QEAA@URadian@1@@Z
    MCAPI explicit Degree(struct mce::Radian rad);

    // symbol: ?asFloat@Degree@mce@@QEBAAEBMXZ
    MCAPI float const& asFloat() const;

    // NOLINTEND
};

}; // namespace mce
