#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class ParticleRenderData;
class ScreenContext;
class Tessellator;
class Vec3;
// clang-format on

class ParticleRenderer {
public:
    // ParticleRenderer inner types declare
    // clang-format off
    struct RenderBucketData;
    // clang-format on

    // ParticleRenderer inner types define
    struct RenderBucketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::buffer_span<uint64>>      mParticleIndexList;
        ::ll::TypedStorage<8, 8, ::ScreenContext&>            mScreenContext;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraTargetPos;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraPos;
        ::ll::TypedStorage<8, 8, ::ParticleRenderData const&> mParticleRenderData;
        ::ll::TypedStorage<8, 8, uint64>                      mTextureIdx;
        ::ll::TypedStorage<8, 8, uint64>                      mMaterialIdx;
        ::ll::TypedStorage<4, 4, uint>                        mParticleType;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderBucketData& operator=(RenderBucketData const&);
        RenderBucketData(RenderBucketData const&);
        RenderBucketData();
    };

    using ParticleId = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::vector<uint64>>> mBuckets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _renderBucket(
        ::ParticleRenderer::RenderBucketData const& bucketData,
        ::Matrix const&                             rotMatXYZ,
        ::Matrix const&                             rotMatY
    );

    MCAPI void _renderBuckets(
        ::ScreenContext&            screenContext,
        ::Vec3 const&               cameraTargetPos,
        ::Vec3 const&               cameraPos,
        ::ParticleRenderData const& particleRenderData
    );

    MCAPI void _tesselateParticle(
        ::Tessellator&                            t,
        ::ParticleRenderData::ParticleData const& particleData,
        ::Vec3 const&                             cameraTargetPos,
        ::Vec3 const&                             cameraPos,
        ::Matrix const&                           rotMatXYZ,
        ::Matrix const&                           rotMatY,
        bool                                      includeRandomNumbersInNormalField
    );

    MCAPI ~ParticleRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int64& mParticleRenderBucketCount();

    MCAPI static int64& mParticleRenderParticleCount();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
