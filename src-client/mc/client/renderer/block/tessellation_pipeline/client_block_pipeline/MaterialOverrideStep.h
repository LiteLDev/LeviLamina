#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/UvGenerationType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { class UvTransform; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class MaterialOverrideStep : public ::ClientBlockPipeline::Step {
public:
    // MaterialOverrideStep inner types define
    using MaterialPtr = ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const>> mMaterialOverride;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::UvGenerationType>                            mUvGenerationType;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialOverrideStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~MaterialOverrideStep() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MaterialOverrideStep(
        ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const> materialOverride,
        ::ClientBlockPipeline::UvGenerationType                           uvGenerationType
    );

    MCAPI void _projectUvsFromBasis(
        ::std::array<::Vec3, 4> const&      positions,
        ::Vec3 const&                       faceNormal,
        ::ClientBlockPipeline::UvTransform& generatedUvs
    ) const;

    MCAPI void _runUvGeneration(
        ::ClientBlockPipeline::QuadIndicesFaceAttributes const& faceIndices,
        ::ClientBlockPipeline::PositionVertexAttributes const&  vertexPositions,
        ::ClientBlockPipeline::FaceNormalAttributes const&      faceNormals,
        ::ClientBlockPipeline::ImageUvFaceAttributes&           overridenFaceImageUvs
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const> materialOverride,
        ::ClientBlockPipeline::UvGenerationType                           uvGenerationType
    );
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
