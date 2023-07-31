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
    Radian& operator=(Radian const&) = delete;
    Radian(Radian const&)            = delete;
    Radian()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Radian\@mce\@\@QEAA\@UDegree\@1\@\@Z
     */
    MCAPI Radian(struct mce::Degree);
    /**
     * @symbol ?asFloat\@Radian\@mce\@\@QEBAAEBMXZ
     */
    MCAPI float const& asFloat() const;
    // NOLINTEND
};

}; // namespace mce
