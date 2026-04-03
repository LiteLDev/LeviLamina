#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/model/geom/TextureOffset.h"
#include "mc/client/renderer/controller/RenderController.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class Cube;
class DataDrivenGeometry;
class Matrix;
class MinecraftGameplayGraphicsResources;
class Model;
class ModelPartLocator;
class RenderParams;
class ScreenContext;
class Tessellator;
struct ActorResourceDefinition;
struct GeometryPtr;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
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
        ::ll::UntypedStorage<8, 32> mUnk6a7c78;
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
    ::ll::TypedStorage<8, 48, ::HashedString>                          mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mRot;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mScale;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mWorldPos;
    ::ll::TypedStorage<4, 24, ::AABB>                                  mAABB;
    ::ll::TypedStorage<4, 4, int>                                      mGroupIndex;
    ::ll::TypedStorage<4, 4, int>                                      mPartIndex;
    ::ll::TypedStorage<4, 4, int>                                      mMeshIndex;
    ::ll::TypedStorage<4, 4, int>                                      mBoneOrientationIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPartLocator>>       mLocators;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                        mBinding;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>              mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                                     mDebug;
    ::ll::TypedStorage<4, 4, int const>                                IndexNotSet;
    ::ll::TypedStorage<1, 1, bool>                                     mMirror;
    ::ll::TypedStorage<1, 1, bool>                                     mVisible;
    ::ll::TypedStorage<4, 4, int>                                      mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::Cube>>                   mCubes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart::TextureMesh>> mTextureMeshes;
    ::ll::TypedStorage<8, 128, ::Geometry::NodePolyMesh>               mPolyMesh;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                             mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>             mChildren;
    ::ll::TypedStorage<4, 8, ::Vec2>                                   mTexSize;
    ::ll::TypedStorage<8, 16, ::TextureOffset>                         mTexOffs;
    ::ll::TypedStorage<1, 1, bool>                                     mNeverRender;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mOriginPos;
    ::ll::TypedStorage<1, 1, bool>                                     mHasColor;
    ::ll::TypedStorage<1, 1, bool>                                     mMaterialExpressionsNeedColorVertexFormatField;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::RenderController const*,
            ::ExpressionNode,
            ::std::less<::RenderController const*>,
            ::std::vector<::RenderController const*>,
            ::std::vector<::ExpressionNode>>>
                                                                                                 mIsVisibleMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::RenderController const*, ::ExpressionNode>> mMaterialExpressionMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelPart& operator=(ModelPart const&);
    ModelPart(ModelPart const&);
    ModelPart();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModelPart(::ModelPart&& rhs);

    MCAPI ModelPart(int xTexOffs, int yTexOffs, int texWidth, int texHeight);

    MCAPI void _adjustUVsInward(
        ::std::vector<::Vec2>&                                        uvs,
        ::std::vector<::std::array<::Geometry::NodeVertex, 3>> const& tris,
        ::std::vector<::std::array<::Geometry::NodeVertex, 4>> const& quads,
        ::Vec2 const&                                                 textureSize
    );

    MCAPI void _copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo,
        bool                                 deferred
    );

    MCAPI void addBox(::Vec3 const& point0, ::Vec3 const& extents, bool mirror, float g, ::mce::Color const& color);

    MCAPI ::ModelPart&
    addBoxMapTex(::Vec3 const& point0, ::Vec3 const& extents, ::TextureOffset const& inTexOffset, bool mirror, float g);

    MCAPI void assignPartToGroup(::Model& model, bool forceToUniqueGroup);

    MCAPI void assignPartToGroup(::Model& model, bool forceToUniqueGroup, ::DataDrivenGeometry* owningGeometry);

    MCAPI void compileCubes(::Tessellator& tessellator);

    MCAPI void compileQuads(::MinecraftGameplayGraphicsResources& gameplayResources, ::Tessellator& tessellator);

    MCAPI void compileTris(::Tessellator& tessellator);

    MCAPI void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo
    );

    MCAPI void expandAABB(::AABB& bb) const;

    MCAPI void generateBoneTransformMatrices(
        ::RenderParams&                renderParams,
        ::gsl::span<::BoneOrientation> boneOrientations,
        ::RenderController const*      renderControllerId,
        ::Matrix                       boneToEntitySpaceMatrix
    );

    MCAPI void getPolyCounts(int& triVertexCount, int& quadVertexCount);

    MCAPI bool isVisible(::RenderParams& renderParams, ::RenderController const* renderControllerId) const;

    MCAPI bool load(::GeometryPtr source, ::std::string_view nodeName, ::ModelPart* parentPart);

    MCAPI bool load(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::GeometryPtr                                source,
        ::std::string_view                           nodeName,
        ::ModelPart*                                 parentPart
    );

    MCAPI void loadBoxes(
        ::Vec3 const&                         newPivot,
        ::Vec3 const&                         offset,
        ::std::vector<::Geometry::Box> const& boxes,
        ::Vec3 const&                         bindPoseRotation
    );

    MCAPI void
    loadPolyMesh(::Vec3 const& newPivot, ::Vec3 const& bindPoseRotation, ::Geometry::NodePolyMesh const& sourceMesh);

    MCAPI void loadTextureMeshes(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::Vec3 const&                                newPivot,
        ::Vec3 const&,
        ::std::vector<::Geometry::NodeTextureMesh> const& sourceTextureMeshes
    );

    MCAPI bool loadWithOrientation(
        ::std::shared_ptr<::ActorResourceDefinition> resourceDefinition,
        ::GeometryPtr                                source,
        ::std::string_view                           nodeName,
        ::Vec3 const&                                basePos,
        ::Vec3 const&                                pivot,
        ::ModelPart*                                 parentPart
    );

    MCAPI bool loadWithOrientation_(
        ::GeometryPtr      source,
        ::std::string_view nodeName,
        ::Vec3 const&      basePos,
        ::Vec3 const&      pivot,
        ::ModelPart*       parentPart
    );

    MCAPI uint64 numCubes() const;

    MCAPI ::ModelPart& operator=(::ModelPart&& rhs);

    MCAPI void render(
        ::ScreenContext& screenContext,
        ::Model&         model,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCAPI void renderAtPosition(
        ::ScreenContext& screenContext,
        ::Model&         model,
        ::Vec3 const&    position,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCAPI void setModelPartMaterial(::mce::MaterialPtr const& mat, ::RenderController const* renderControllerId);

    MCAPI void translateTo(::Matrix& mv, float scale);

    MCAPI ~ModelPart();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ModelPart&& rhs);

    MCAPI void* $ctor(int xTexOffs, int yTexOffs, int texWidth, int texHeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
