#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BoneOrientation;
class DataDrivenGeometry;
class ExpressionNode;
class GeometryPtr;
class Matrix;
class RenderController;
class RenderParams;
class TextureOffset;
class Vec2;
class Vec3;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
class Model;
class ScreenContext;
class Tessellator;
struct ActorResourceDefinition;
struct MinecraftGameplayGraphicsResources;
// clang-format on

class ModelPart {
public:
    // ModelPart inner types declare
    // clang-format off
    struct TextureMesh;
    // clang-format on

    // ModelPart inner types define
    struct TextureMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd4fce9;
        ::ll::UntypedStorage<8, 56> mUnkddeb87;
        ::ll::UntypedStorage<4, 12> mUnk202e6d;
        ::ll::UntypedStorage<4, 12> mUnkb2c2b2;
        ::ll::UntypedStorage<4, 12> mUnka0bfb0;
        ::ll::UntypedStorage<4, 12> mUnkc2fbc4;
        ::ll::UntypedStorage<1, 1>  mUnka93767;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureMesh& operator=(TextureMesh const&);
        TextureMesh(TextureMesh const&);
        TextureMesh();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk22fcd4;
    ::ll::UntypedStorage<4, 12>  mUnk4240c7;
    ::ll::UntypedStorage<4, 12>  mUnk2322f3;
    ::ll::UntypedStorage<4, 12>  mUnk46ba81;
    ::ll::UntypedStorage<4, 12>  mUnk146899;
    ::ll::UntypedStorage<4, 12>  mUnkd6a498;
    ::ll::UntypedStorage<4, 24>  mUnkc02edd;
    ::ll::UntypedStorage<4, 4>   mUnk550756;
    ::ll::UntypedStorage<4, 4>   mUnk198ed4;
    ::ll::UntypedStorage<4, 4>   mUnka8e411;
    ::ll::UntypedStorage<4, 4>   mUnk938e23;
    ::ll::UntypedStorage<8, 24>  mUnkdade61;
    ::ll::UntypedStorage<8, 16>  mUnk468b98;
    ::ll::UntypedStorage<1, 1>   mUnk1d7d97;
    ::ll::UntypedStorage<1, 1>   mUnkd9ee67;
    ::ll::UntypedStorage<4, 4>   mUnk259900;
    ::ll::UntypedStorage<1, 1>   mUnk3d249b;
    ::ll::UntypedStorage<1, 1>   mUnk7cd406;
    ::ll::UntypedStorage<4, 4>   mUnkedcb4a;
    ::ll::UntypedStorage<8, 24>  mUnkadcdd8;
    ::ll::UntypedStorage<8, 24>  mUnk382db1;
    ::ll::UntypedStorage<8, 128> mUnkb7a646;
    ::ll::UntypedStorage<8, 8>   mUnk41d18f;
    ::ll::UntypedStorage<8, 24>  mUnkf6b8f9;
    ::ll::UntypedStorage<4, 8>   mUnk748179;
    ::ll::UntypedStorage<4, 16>  mUnkf8dda4;
    ::ll::UntypedStorage<1, 1>   mUnk7b04b9;
    ::ll::UntypedStorage<4, 12>  mUnk4afd89;
    ::ll::UntypedStorage<1, 1>   mUnk308963;
    ::ll::UntypedStorage<1, 1>   mUnka3d3fe;
    ::ll::UntypedStorage<8, 56>  mUnkcf5364;
    ::ll::UntypedStorage<8, 64>  mUnk9c853d;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelPart& operator=(ModelPart const&);
    ModelPart(ModelPart const&);
    ModelPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ModelPart(::ModelPart&& rhs);

    MCNAPI_C ModelPart(int xTexOffs, int yTexOffs, int texWidth, int texHeight);

    MCNAPI_C void _adjustUVsInward(
        ::std::vector<::Vec2>&                                        uvs,
        ::std::vector<::std::array<::Geometry::NodeVertex, 3>> const& tris,
        ::std::vector<::std::array<::Geometry::NodeVertex, 4>> const& quads,
        ::Vec2 const&                                                 textureSize
    );

    MCNAPI_C void _copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo,
        bool                                 deferred
    );

    MCNAPI_C void addBox(::Vec3 const& point0, ::Vec3 const& extents, bool mirror, float g, ::mce::Color const& color);

    MCNAPI_C ::ModelPart&
    addBoxMapTex(::Vec3 const& point0, ::Vec3 const& extents, ::TextureOffset const& inTexOffset, bool mirror, float g);

    MCNAPI_C void assignPartToGroup(::Model& model, bool forceToUniqueGroup);

    MCNAPI_C void assignPartToGroup(::Model& model, bool forceToUniqueGroup, ::DataDrivenGeometry* owningGeometry);

    MCNAPI_C void clearBoxes();

    MCNAPI_C void compileCubes(::Tessellator& tessellator);

    MCNAPI_C void compileQuads(::MinecraftGameplayGraphicsResources& gameplayResources, ::Tessellator& tessellator);

    MCNAPI_C void compileTris(::Tessellator& tessellator);

    MCNAPI_C void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo
    );

    MCNAPI_C void expandAABB(::AABB& bb) const;

    MCNAPI_C void generateBoneTransformMatrices(
        ::RenderParams&                renderParams,
        ::gsl::span<::BoneOrientation> boneOrientations,
        ::RenderController const*      renderControllerId,
        ::Matrix                       boneToEntitySpaceMatrix
    );

    MCNAPI_C void getPolyCounts(int& triVertexCount, int& quadVertexCount);

    MCNAPI_C bool isVisible(::RenderParams& renderParams, ::RenderController const* renderControllerId) const;

    MCNAPI_C bool load(::GeometryPtr source, ::std::string_view nodeName, ::ModelPart* parentPart);

    MCNAPI_C bool load(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::GeometryPtr                                source,
        ::std::string_view                           nodeName,
        ::ModelPart*                                 parentPart
    );

    MCNAPI_C void loadBoxes(
        ::Vec3 const&                         newPivot,
        ::Vec3 const&                         offset,
        ::std::vector<::Geometry::Box> const& boxes,
        ::Vec3 const&                         bindPoseRotation
    );

    MCNAPI_C void
    loadPolyMesh(::Vec3 const& newPivot, ::Vec3 const& bindPoseRotation, ::Geometry::NodePolyMesh const& sourceMesh);

    MCNAPI_C void loadPos(::Vec3 const& newPivot, ::ModelPart* parentPart, bool pivotSubtractsParentPivot);

    MCNAPI_C void loadTextureMeshes(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::Vec3 const&                                newPivot,
        ::Vec3 const&,
        ::std::vector<::Geometry::NodeTextureMesh> const& sourceTextureMeshes
    );

    MCNAPI_C bool loadWithOrientation(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::GeometryPtr                                source,
        ::std::string_view                           nodeName,
        ::Vec3 const&                                basePos,
        ::Vec3 const&                                pivot,
        ::ModelPart*                                 parentPart
    );

    MCNAPI_C bool loadWithOrientation_(
        ::GeometryPtr      source,
        ::std::string_view nodeName,
        ::Vec3 const&      basePos,
        ::Vec3 const&      pivot,
        ::ModelPart*       parentPart
    );

    MCNAPI_C uint64 numCubes() const;

    MCNAPI_C ::ModelPart& operator=(::ModelPart&& rhs);

    MCNAPI_C void render(
        ::ScreenContext& screenContext,
        ::Model&         model,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCNAPI_C void renderAtPosition(
        ::ScreenContext& screenContext,
        ::Model&         model,
        ::Vec3 const&    position,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCNAPI_C void setModelPartMaterial(::mce::MaterialPtr const& mat, ::RenderController const* renderControllerId);

    MCNAPI_C void setVisibility(::ExpressionNode const& visibility, ::RenderController const* renderControllerId);

    MCNAPI_C void translateTo(::Matrix& mv, float scale);

    MCNAPI_C ~ModelPart();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ModelPart&& rhs);

    MCNAPI_C void* $ctor(int xTexOffs, int yTexOffs, int texWidth, int texHeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
