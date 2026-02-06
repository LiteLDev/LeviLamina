#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/DimensionDimmingScalars.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct FaceDimmingAttributes; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class FaceDimmingStep : public ::ClientBlockPipeline::Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ClientBlockPipeline::DimensionDimmingScalars> mDimmingScalars;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~FaceDimmingStep() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _run(
        ::ClientBlockPipeline::FaceNormalAttributes const&   faceNormals,
        ::ClientBlockPipeline::FaceDimmingAttributes&        faceDimming,
        ::ClientBlockPipeline::MaterialFaceAttributes const& materials
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const& inputs) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
