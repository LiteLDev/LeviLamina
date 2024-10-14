#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
// clang-format on

namespace mce {

struct Radian {
public:
    // prevent constructor by default
    Radian& operator=(Radian const&);
    Radian(Radian const&);
    Radian();

public:
    // NOLINTBEGIN
    MCAPI explicit Radian(struct mce::Degree deg);

    MCAPI float const& asFloat() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace mce
