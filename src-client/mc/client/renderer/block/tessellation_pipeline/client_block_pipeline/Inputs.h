#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

class Inputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::any>> mInputs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Inputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
