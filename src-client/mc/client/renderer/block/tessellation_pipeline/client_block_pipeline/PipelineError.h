#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct PipelineError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mError;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
