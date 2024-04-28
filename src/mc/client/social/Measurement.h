#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social::Events {

class Measurement {
public:
    // prevent constructor by default
    Measurement& operator=(Measurement const&);
    Measurement(Measurement const&);
    Measurement();

public:
    // NOLINTBEGIN
    // symbol: ?getValue@Measurement@Events@Social@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value getValue() const;

    // symbol: ??1Measurement@Events@Social@@QEAA@XZ
    MCAPI ~Measurement();

    // NOLINTEND
};

}; // namespace Social::Events
