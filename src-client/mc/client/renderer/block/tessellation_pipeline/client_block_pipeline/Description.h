#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Status.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Step; }
// clang-format on

namespace ClientBlockPipeline {

class Description {
public:
    // Description inner types declare
    // clang-format off
    struct BakedStep;
    // clang-format on

    // Description inner types define
    struct BakedStep {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                 mStepId;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mDependencies;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mDependants;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BakedStep();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Step const>>> mSteps;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Step const>>> mOutputs;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::Description::BakedStep>>        mBakedSteps;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                                       mRenderChunkPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::Status _checkForCycles(uint64 stepId) const;

    MCAPI ::ClientBlockPipeline::Status addDependency(
        ::std::shared_ptr<::ClientBlockPipeline::Step const> step,
        ::std::shared_ptr<::ClientBlockPipeline::Step const> dependency
    );
    // NOLINTEND
};

} // namespace ClientBlockPipeline
