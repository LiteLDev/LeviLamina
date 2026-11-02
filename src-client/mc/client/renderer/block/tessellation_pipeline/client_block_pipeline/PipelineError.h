#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct PipelineError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mError;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PipelineError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
