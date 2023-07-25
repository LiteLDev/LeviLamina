#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Radian; }
// clang-format on

namespace mce {

struct Degree {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MCE_DEGREE
public:
    Degree& operator=(Degree const&) = delete;
    Degree(Degree const&)            = delete;
    Degree()                         = delete;
#endif

public:
    /**
     * @symbol ??0Degree\@mce\@\@QEAA\@URadian\@1\@\@Z
     */
    MCAPI Degree(struct mce::Radian);
    /**
     * @symbol ?asFloat\@Degree\@mce\@\@QEBAAEBMXZ
     */
    MCAPI float const& asFloat() const;
};

}; // namespace mce
