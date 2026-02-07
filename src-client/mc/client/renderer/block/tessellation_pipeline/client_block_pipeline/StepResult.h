#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/PipelineError.h"

namespace ClientBlockPipeline {

class StepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::ClientBlockPipeline::PipelineError, ::std::vector<::std::any>>> mResults;
    // NOLINTEND

public:
    // prevent constructor by default
    StepResult& operator=(StepResult const&);
    StepResult(StepResult const&);
    StepResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StepResult(::std::vector<::std::any> const& results);

    MCAPI ::ClientBlockPipeline::StepResult& operator=(::ClientBlockPipeline::StepResult&&);

    MCAPI ~StepResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::std::any> const& results);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
