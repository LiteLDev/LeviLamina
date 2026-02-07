#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"

// auto generated forward declare list
// clang-format off
class Vec2;
struct TessellatorQuadInfo;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
// clang-format on

class Tessellator {
public:
    // Tessellator inner types declare
    // clang-format off
    struct DebugContextCallback;
    // clang-format on

    // Tessellator inner types define
    enum class UploadMode : int {
        Buffered = 0,
        Manual   = 1,
        Never    = 2,
    };

    enum class SupplementaryFieldAutoGenerationMode : int {
        None               = 0,
        NormalsAndTangents = 1,
    };

    struct DebugContextCallback {};

    using Index = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mIsFormatFixed;
    ::ll::TypedStorage<8, 288, ::mce::MeshData>                     mMeshData;
    ::ll::TypedStorage<1, 1, bool>                                  mHasNormals;
    ::ll::TypedStorage<8, 8, uint64>                                mNextReserve;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>>         mNextNormal;
    ::ll::TypedStorage<4, 36, ::std::optional<::glm::vec2>[3]>      mNextUV;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                 mNextColor;
    ::ll::TypedStorage<2, 4, ::std::optional<ushort>>               mNextBoneId;
    ::ll::TypedStorage<2, 4, ::std::optional<ushort>>               mNextPBRTextureIdx;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                 mNextMERS;
    ::ll::TypedStorage<1, 1, bool>                                  mIndexPhase;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPostTransformOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPostTransformScale;
    ::ll::TypedStorage<1, 1, uchar>                                 mQuadFacing;
    ::ll::TypedStorage<1, 1, bool>                                  mQuadTwoSided;
    ::ll::TypedStorage<8, 24, ::std::vector<::TessellatorQuadInfo>> mQuadInfoList;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceCenterAccumulator;
    ::ll::TypedStorage<4, 4, int>                                   mCurQuadVertex;
    ::ll::TypedStorage<1, 1, bool>                                  mApplyTransform;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4>                        mTransformMatrix;
    ::ll::TypedStorage<1, 1, bool>                                  mNoColor;
    ::ll::TypedStorage<1, 1, bool>                                  mVoidBeginEnd;
    ::ll::TypedStorage<1, 1, bool>                                  mForceTessellateIntercept;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(::Tessellator const&, ::mce::MaterialPtr const&, ::mce::TexturePtr const&)>>
                                                                             mInterceptTessellator;
    ::ll::TypedStorage<4, 4, uint>                                           mCount;
    ::ll::TypedStorage<4, 4, uint>                                           mMaxVertexCount;
    ::ll::TypedStorage<1, 1, bool>                                           mTessellating;
    ::ll::TypedStorage<1, 1, bool>                                           mBuildFaceData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::Mesh>>                 mPreGeneratedMesh;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>> mBufferResourceService;
    // NOLINTEND

public:
    // prevent constructor by default
    Tessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Tessellator(::std::weak_ptr<::mce::BufferResourceService> bufferResourceService);

    MCAPI void _tex(::Vec2 const& coord, int unit);

    MCAPI void addPostTransformOffset(float x, float y, float z);

    MCAPI void
    begin(::Tessellator::DebugContextCallback debugContextCallback, int reservedVertices, bool buildFaceData);

    MCAPI void begin(
        ::Tessellator::DebugContextCallback debugContextCallback,
        ::mce::PrimitiveMode                mode,
        int                                 reservedVertices,
        bool                                buildFaceData
    );

    MCAPI void clear();

    MCAPI void color(::mce::Color const& c);

    MCAPI void color(float r, float g, float b, float a);

    MCAPI ::mce::Mesh
    end(::Tessellator::UploadMode                           uploadMode,
        ::std::string_view                                  debugName,
        ::Tessellator::SupplementaryFieldAutoGenerationMode supplementaryFieldGenerationMode);

    MCAPI void normal(float x, float y, float z, float w);

    MCAPI void postTransformScale(::Vec3 const& scale);

    MCAPI void quad(uint i1, uint i2, uint i3, uint i4);

    MCAPI void resetTransform(bool setToIdentity);

    MCAPI void rotateAroundPivot(::Vec3 const& pivotOffset, float angle, ::Vec3 const& rotationAxis, bool preTransform);

    MCAPI void simpleQuad(
        ::Vec3 const& pos0,
        ::Vec2 const& uv0,
        ::Vec3 const& pos1,
        ::Vec2 const& uv1,
        ::Vec3 const& pos2,
        ::Vec2 const& uv2,
        ::Vec3 const& pos3,
        ::Vec2 const& uv3
    );

    MCAPI void tex1(::Vec2 const& v);

    MCAPI void triggerIntercept(::mce::MaterialPtr const& material, ::mce::TexturePtr const& texture);

    MCAPI void trim();

    MCAPI void vertex(float x, float y, float z);

    MCAPI void vertexUV(float x, float y, float z, float u, float v);

    MCAPI ~Tessellator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::mce::BufferResourceService> bufferResourceService);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
