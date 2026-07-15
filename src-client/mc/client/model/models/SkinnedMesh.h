#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ClientPBRTextureData;
class MaterialVariants;
class ModelPart;
class RenderController;
class ScreenContext;
class SortedMeshDrawList;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mShouldDrawThisFrame;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>           mSkinnedParts;
    ::ll::TypedStorage<8, 592, ::mce::Mesh>                          mSkinnedMeshQuads;
    ::ll::TypedStorage<8, 592, ::mce::Mesh>                          mSkinnedMeshTris;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>          mBoneMatrices;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>          mPreviousBoneMatrices;
    ::ll::TypedStorage<4, 24, ::std::pair<::glm::vec3, ::glm::vec3>> mBounds;
    ::ll::TypedStorage<4, 4, int>                                    mVertexCount;
    ::ll::TypedStorage<4, 4, int>                                    mTotalVertices;
    ::ll::TypedStorage<1, 1, bool>                                   mUseBones;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinnedMesh();

    MCAPI void constructMesh(::ScreenContext& screenContext);

    MCAPI void
    constructMesh(::BaseActorRenderContext& baseActorRenderContext, ::MaterialVariants const& defaultMaterialVariants);

    MCAPI void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::RenderController const*                 renderController,
        uint                                      subRenderLayerIndex,
        ::MaterialVariants const&                 materialVariants,
        ::ClientPBRTextureData const&             textureData,
        ::SortedMeshDrawList*                     sortedMeshDrawList,
        ::std::optional<::glm::mat4x4> const&     previousActorTransform,
        ::std::optional<::MERSUniformData> const& mersUniforms,
        ::ShadowContext                           shadowContext,
        bool                                      isDitheringEnabled
    );

    MCAPI ~SkinnedMesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
