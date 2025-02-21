#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ParticleMotionCollisionEventVector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf99af4;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionEventVector& operator=(ParticleMotionCollisionEventVector const&);
    ParticleMotionCollisionEventVector(ParticleMotionCollisionEventVector const&);
    ParticleMotionCollisionEventVector();
};

} // namespace SharedTypes::v1_21
