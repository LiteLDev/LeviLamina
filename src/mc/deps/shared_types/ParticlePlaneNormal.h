#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ParticlePlaneNormal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk5db160;
    ::ll::UntypedStorage<8, 144> mUnk309e26;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticlePlaneNormal& operator=(ParticlePlaneNormal const&);
    ParticlePlaneNormal(ParticlePlaneNormal const&);
    ParticlePlaneNormal();
};

} // namespace SharedTypes::v1_21
