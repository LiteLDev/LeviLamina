#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/StepResult.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Step; }
// clang-format on

namespace ClientBlockPipeline {

class Instance {
public:
    // Instance inner types declare
    // clang-format off
    struct StepCache;
    // clang-format on

    // Instance inner types define
    struct StepCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                             mDependenciesCount;
        ::ll::TypedStorage<8, 8, uint64>                             mDependentsCount;
        ::ll::TypedStorage<8, 40, ::ClientBlockPipeline::StepResult> mResult;
        // NOLINTEND
    };

    using CallbackFunctionType = ::std::function<void(::ClientBlockPipeline::Inputs const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Description const*>                  mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::Instance::StepCache>> mStepCache;
    ::ll::TypedStorage<8, 40, ::std::queue<uint64, ::std::deque<uint64>>>                mStepsToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::ClientBlockPipeline::Inputs const&)>>>
        mCallbackFunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _buildCache();

    MCAPI void _onStepCompleted(::ClientBlockPipeline::Step const& step);

    MCAPI bool _runStep(::ClientBlockPipeline::Inputs const& globalInputs, ::ClientBlockPipeline::Step const* step);

    MCAPI void _sendOutputs();

    MCAPI ::ClientBlockPipeline::Instance& start(::ClientBlockPipeline::Inputs const& inputs);
    // NOLINTEND
};

} // namespace ClientBlockPipeline
