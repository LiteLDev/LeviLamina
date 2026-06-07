#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class SampleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> count;
    ::ll::TypedStorage<4, 4, int> quality;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::mce::SampleDescription const& sampleDescription) const;
    // NOLINTEND
};

} // namespace mce
