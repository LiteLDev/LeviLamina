#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct Passthrough {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8a6d1d;
    // NOLINTEND

public:
    // prevent constructor by default
    Passthrough& operator=(Passthrough const&);
    Passthrough(Passthrough const&);
    Passthrough();
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
