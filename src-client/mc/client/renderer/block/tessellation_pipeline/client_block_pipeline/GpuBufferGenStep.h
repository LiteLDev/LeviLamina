#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct CulledFaceAttribute; }
namespace ClientBlockPipeline { struct FaceDimmingAttributes; }
namespace ClientBlockPipeline { struct FaceDirectionFaceAttributes; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct LightUvFaceAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
namespace ClientBlockPipeline { struct NamedMeshStreams; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
namespace ClientBlockPipeline { struct SmoothLightingUvAttributes; }
namespace ClientBlockPipeline { struct TintFaceAttributes; }
namespace ClientBlockPipeline { struct Transforms; }
namespace ClientBlockPipeline { struct VertexAOAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class GpuBufferGenStep : public ::ClientBlockPipeline::Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEmitColors;
    ::ll::TypedStorage<1, 1, bool> mEmitPBRTextures;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~GpuBufferGenStep() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _run(
        ::ClientBlockPipeline::PositionVertexAttributes const&    vertexPositions,
        ::ClientBlockPipeline::QuadIndicesFaceAttributes const&   faceIndices,
        ::ClientBlockPipeline::ImageUvFaceAttributes const&       faceImageUvs,
        ::ClientBlockPipeline::MaterialFaceAttributes const&      faceMaterials,
        ::ClientBlockPipeline::TintFaceAttributes const&          faceColors,
        ::ClientBlockPipeline::FaceDirectionFaceAttributes const& faceFacings,
        ::ClientBlockPipeline::CulledFaceAttribute const*         culledFaces,
        ::ClientBlockPipeline::LightUvFaceAttributes const*       faceLightUvs,
        ::ClientBlockPipeline::SmoothLightingUvAttributes const*  vertexLightUvs,
        ::ClientBlockPipeline::FaceDimmingAttributes const*       faceDimmings,
        ::ClientBlockPipeline::FaceNormalAttributes const*        faceNormals,
        ::ClientBlockPipeline::VertexAOAttributes const*          vertexAO,
        ::ClientBlockPipeline::Transforms const*                  transforms,
        ::ClientBlockPipeline::NamedMeshStreams&                  outStreams
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
