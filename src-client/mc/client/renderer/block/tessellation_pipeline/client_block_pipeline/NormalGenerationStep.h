#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class NormalGenerationStep : public ::ClientBlockPipeline::Step {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~NormalGenerationStep() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _run(
        ::ClientBlockPipeline::PositionVertexAttributes const&  vertexPositions,
        ::ClientBlockPipeline::QuadIndicesFaceAttributes const& faceIndices,
        ::ClientBlockPipeline::FaceNormalAttributes&            faceNormals
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
