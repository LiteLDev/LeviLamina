#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ParticleCurveBase {
public:
    // prevent constructor by default
    ParticleCurveBase& operator=(ParticleCurveBase const&);
    ParticleCurveBase(ParticleCurveBase const&);
    ParticleCurveBase();
};

} // namespace SharedTypes::v1_21
