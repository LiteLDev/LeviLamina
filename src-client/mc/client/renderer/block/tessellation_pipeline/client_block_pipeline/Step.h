#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
// clang-format on

namespace ClientBlockPipeline {

class Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>         mStepId;
    ::ll::TypedStorage<4, 12, ::SubChunkPos> mRenderChunkPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Step() = default;

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
