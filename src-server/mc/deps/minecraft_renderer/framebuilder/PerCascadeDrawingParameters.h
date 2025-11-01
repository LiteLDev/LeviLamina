#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PerCascadeDrawingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5debec;
    // NOLINTEND

public:
    // prevent constructor by default
    PerCascadeDrawingParameters& operator=(PerCascadeDrawingParameters const&);
    PerCascadeDrawingParameters(PerCascadeDrawingParameters const&);
    PerCascadeDrawingParameters();
};

} // namespace mce::framebuilder
