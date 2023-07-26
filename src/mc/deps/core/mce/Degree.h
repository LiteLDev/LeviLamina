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
    Degree& operator=(Degree const&) = delete;
    Degree(Degree const&)            = delete;
    Degree()                         = delete;

public:
    /**
     * @symbol ??0Degree\@mce\@\@QEAA\@URadian\@1\@\@Z
     */
    MCAPI Degree(struct mce::Radian); // NOLINT
    /**
     * @symbol ?asFloat\@Degree\@mce\@\@QEBAAEBMXZ
     */
    MCAPI float const& asFloat() const; // NOLINT
};

}; // namespace mce
