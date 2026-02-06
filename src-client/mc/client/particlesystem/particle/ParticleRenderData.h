#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/math/Vec4.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MERSUniformData;
struct PBRTexturePtrs;
namespace mce { class MaterialPtr; }
// clang-format on

class ParticleRenderData {
public:
    // ParticleRenderData inner types declare
    // clang-format off
    struct ParticleData;
    // clang-format on

    // ParticleRenderData inner types define
    enum class FaceCameraMode : int {
        None               = 0,
        RotateXYZ          = 1,
        RotateY            = 2,
        LookatXYZ          = 3,
        LookatY            = 4,
        LookatDirection    = 5,
        DirectionX         = 6,
        DirectionY         = 7,
        DirectionZ         = 8,
        EmitterTransformXY = 9,
        EmitterTransformXZ = 10,
        EmitterTransformYZ = 11,
    };

    struct ParticleData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color>                        mColor;
        ::ll::TypedStorage<1, 2, ::BrightnessPair>                     mAmbientLighting;
        ::ll::TypedStorage<4, 8, ::Vec2>                               mUV0;
        ::ll::TypedStorage<4, 8, ::Vec2>                               mUV1;
        ::ll::TypedStorage<4, 12, ::Vec3>                              mWorldPos;
        ::ll::TypedStorage<4, 12, ::Vec3>                              mParticleDirection;
        ::ll::TypedStorage<4, 8, ::Vec2>                               mSize;
        ::ll::TypedStorage<4, 16, ::Vec4>                              mRandomNumbers;
        ::ll::TypedStorage<4, 4, float>                                mRotation;
        ::ll::TypedStorage<2, 2, ushort>                               mTextureIdx;
        ::ll::TypedStorage<2, 2, ushort>                               mMaterialIdx;
        ::ll::TypedStorage<4, 4, ::ParticleRenderData::FaceCameraMode> mFaceCameraMode;
        ::ll::TypedStorage<4, 64, ::Matrix>                            mCustomOrientation;
        ::ll::TypedStorage<4, 4, uint>                                 mParticleType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleRenderData::ParticleData>> mParticles;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::optional<::MERSUniformData>>> mMERSUniforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::PBRTexturePtrs>>                   mTexturesList;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::MaterialPtr>>                 mMaterialsList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ushort>>      mTexturesMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ushort>>      mMaterialsMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ushort addTexture(::PBRTexturePtrs const& texturePtr, ::std::optional<::MERSUniformData> const& mersUniform);

    MCAPI ~ParticleRenderData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
