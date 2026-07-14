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
class ModelPart;
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
    // prevent constructor by default
    SkinnedMeshGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinnedMeshGroup(
        ::ModelPart& modelPart,
        int          skinnedMeshGroupIdentifier,
        bool         isUniqueGroup,
        uint64       skinnedMeshGroupIndex
    );

    MCAPI ::MaterialVariants const&
    _evalMaterialVarants(::RenderParams& renderParams, ::RenderController const* renderController);

    MCAPI void clear();

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

    MCAPI bool
    isMaterialExpressionMapEqual(::std::unordered_map<::RenderController const*, ::ExpressionNode> const& rhs) const;

    MCAPI void prepareSkinning();

    MCAPI void registerPart(::ModelPart& part, int groupIndex);

    MCAPI void setMaterialExpression(::RenderController const* renderControllerId, ::ExpressionNode const& expression);

    MCAPI ~SkinnedMeshGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static uint64 getMaxBoneCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ModelPart& modelPart, int skinnedMeshGroupIdentifier, bool isUniqueGroup, uint64 skinnedMeshGroupIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
