#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/controller/RenderController.h"

// auto generated forward declare list
// clang-format off
class ClientPBRTextureData;
class ExpressionNode;
class MaterialVariants;
class Matrix;
class RenderParams;
class ScreenContext;
class SkinnedMesh;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMeshGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::RenderController const*, ::ExpressionNode>> mMaterialExpressionMap;
    ::ll::TypedStorage<1, 1, bool>                                                               mShouldDrawThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsUniqueGroup;
    ::ll::TypedStorage<4, 4, int>                                              mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinnedMesh>>> mSkinnedMeshes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void copyBoneMatrixToSkinnedMesh(
        int                            meshIndex,
        int                            partIndex,
        bool                           isVisible,
        ::Matrix const&                matrix,
        int                            vertexCount,
        ::std::optional<::glm::mat4x4> previousMatrix
    );

    MCAPI void dataDrivenDraw(
        ::RenderParams&                            renderParams,
        ::dragon::RenderMetadata const&            renderMetadata,
        ::gsl::not_null<::RenderController const*> renderController,
        ::ClientPBRTextureData const&              textureData,
        ::std::optional<::MERSUniformData> const&  mersUniforms
    );

    MCAPI void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::MaterialVariants const&                 modelMaterialVariants,
        ::ClientPBRTextureData const&             textureData,
        ::std::optional<::MERSUniformData> const& mersUniforms
    );

    MCAPI ~SkinnedMeshGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
