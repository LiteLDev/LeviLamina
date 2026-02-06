#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Matrix;
class Vec3;
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BoxSchematic; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlock; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
namespace ClientBlockPipeline { struct PartialOpaqueFullBlock; }
namespace ClientBlockPipeline { struct PartialOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
namespace ClientBlockPipeline { struct TintFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class SurfaceExtractionStep : public ::ClientBlockPipeline::Step {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~SurfaceExtractionStep() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addUvTransformsForUnitCubes(
        ::ClientBlockPipeline::BoxSchematic const*    box,
        ::Flip                                        isotropicFlip,
        uchar                                         faceIndex,
        ::ClientBlockPipeline::ImageUvFaceAttributes& faceImageUvs
    );

    MCAPI static ::Matrix
    _getUnitCubeWorldTransform(::ClientBlockPipeline::BlockLookupData const& blockData, ::Vec3 const& localPosition);

    MCAPI static void addFaceMaterial(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const& blockLookupCache,
        ::ClientBlockPipeline::BlockLookupId             id,
        uchar                                            facing,
        ::ClientBlockPipeline::IResolvedTint const&      resolvedTint,
        ::ClientBlockPipeline::MaterialFaceAttributes&   faceMaterials,
        ::ClientBlockPipeline::TintFaceAttributes&       faceTints,
        float                                            worldPositionRandom
    );

    MCAPI static void extractComplexGeometries(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const&                blockLookupCache,
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox> const&  customGeometryBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace> const& customGeometryFaces,
        ::ClientBlockPipeline::PositionVertexAttributes&                vertexPositions,
        ::ClientBlockPipeline::QuadIndicesFaceAttributes&               faceIndices,
        ::ClientBlockPipeline::ImageUvFaceAttributes&                   faceImageUvs,
        ::ClientBlockPipeline::MaterialFaceAttributes&                  faceMaterials,
        ::ClientBlockPipeline::TintFaceAttributes&                      faceTints
    );

    MCAPI static void extractFaceMaterialsFromCompleteOpaqueFullBlocks(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const&                     blockLookupCache,
        ::std::vector<::ClientBlockPipeline::CompleteOpaqueFullBlock> const& completeOpaqueFullBlocks,
        ::ClientBlockPipeline::CompleteOpaqueFullBlockIds const&             completeOpaqueFullBlockIds,
        ::ClientBlockPipeline::MaterialFaceAttributes&                       faceMaterials,
        ::ClientBlockPipeline::TintFaceAttributes&                           faceTints,
        ::ClientBlockPipeline::ImageUvFaceAttributes&                        faceImageUvs,
        ::BlockPos const&                                                    chunkMin
    );

    MCAPI static void extractFaceMaterialsFromPartialOpaqueFullBlocks(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const&                    blockLookupCache,
        ::std::vector<::ClientBlockPipeline::PartialOpaqueFullBlock> const& partialOpaqueFullBlocks,
        ::ClientBlockPipeline::PartialOpaqueFullBlockIds const&             partialOpaqueFullBlockIds,
        ::ClientBlockPipeline::MaterialFaceAttributes&                      faceMaterials,
        ::ClientBlockPipeline::TintFaceAttributes&                          faceTints,
        ::ClientBlockPipeline::ImageUvFaceAttributes&                       faceImageUvs,
        ::BlockPos const&                                                   chunkMin
    );

    MCAPI static void extractVerticesAndQuadsFromCompleteOpaqueFullBlocks(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const&                     blockLookupCache,
        ::std::vector<::ClientBlockPipeline::CompleteOpaqueFullBlock> const& completeOpaqueFullBlocks,
        ::ClientBlockPipeline::CompleteOpaqueFullBlockIds const&             completeOpaqueFullBlockIds,
        ::ClientBlockPipeline::PositionVertexAttributes&                     vertexPositions,
        ::ClientBlockPipeline::QuadIndicesFaceAttributes&                    faceIndices
    );

    MCAPI static void extractVerticesAndQuadsFromPartialOpaqueFullBlocks(
        ::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId> const&                    blockLookupCache,
        ::std::vector<::ClientBlockPipeline::PartialOpaqueFullBlock> const& partialOpaqueFullBlocks,
        ::ClientBlockPipeline::PartialOpaqueFullBlockIds const&             partialOpaqueFullBlockIds,
        ::ClientBlockPipeline::PositionVertexAttributes&                    vertexPositions,
        ::ClientBlockPipeline::QuadIndicesFaceAttributes&                   faceIndices
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float& mLastPositionRandom();

    MCAPI static ::ClientBlockPipeline::Material const*& mLastResolvedMaterial();

    MCAPI static uchar& mLastTextureIndex();
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
