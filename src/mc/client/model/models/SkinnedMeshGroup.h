#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class MaterialVariants;
class Matrix;
class ModelPart;
class RenderController;
class RenderParams;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
class ClientPBRTextureData;
class ScreenContext;
// clang-format on

class SkinnedMeshGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkafd2c0;
    ::ll::UntypedStorage<1, 1>  mUnk4d4b20;
    ::ll::UntypedStorage<1, 1>  mUnk2eabf9;
    ::ll::UntypedStorage<4, 4>  mUnk3b8c0d;
    ::ll::UntypedStorage<8, 24> mUnkdc7602;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinnedMeshGroup& operator=(SkinnedMeshGroup const&);
    SkinnedMeshGroup(SkinnedMeshGroup const&);
    SkinnedMeshGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::MaterialVariants const&
    _evalMaterialVarants(::RenderParams& renderParams, ::RenderController const* renderController);

    MCNAPI_C bool _isVisibilityExpressionMapEqual(::ModelPart const& modelPart) const;

    MCNAPI_C void constructMesh(::ScreenContext& screenContext);

    MCNAPI_C void copyBoneMatrixToSkinnedMesh(
        int                            meshIndex,
        int                            partIndex,
        bool                           isVisible,
        ::Matrix const&                matrix,
        int                            vertexCount,
        ::std::optional<::glm::mat4x4> previousMatrix
    );

    MCNAPI_C void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::MaterialVariants const&                 modelMaterialVariants,
        ::ClientPBRTextureData const&             textureData,
        ::std::optional<::MERSUniformData> const& mersUniforms
    );

    MCNAPI_C bool
    isMaterialExpressionMapEqual(::std::unordered_map<::RenderController const*, ::ExpressionNode> const& rhs) const;

    MCNAPI_C void registerPart(::ModelPart& part, int groupIndex);

    MCNAPI_C void
    setMaterialExpression(::RenderController const* renderControllerId, ::ExpressionNode const& expression);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::SkinnedMeshGroup const&);

    MCNAPI_C void*
    $ctor(::ModelPart& modelPart, int skinnedMeshGroupIdentifier, bool isUniqueGroup, uint64 skinnedMeshGroupIndex);
    // NOLINTEND
};
