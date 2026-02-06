#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"
#include "mc/platform/NonCopyableField.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct SkyRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mSkyMesh;
            ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mStarsMesh;
            ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mSunMesh;
            ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mMoonMesh;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr>              mEndSkyTex;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr>              mSunTex;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr>              mMoonTex;
            ::ll::TypedStorage<8, 40, ::std::vector<::mce::TexturePtr, ::LinearAllocator<::mce::TexturePtr>>>
                                                                mCubemapTextures;
            ::ll::TypedStorage<8, 24, ::mce::ServerTexture>     mCubemapTexture;
            ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mCubemapMaterial;
            ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mSkyMaterial;
            ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mStarsMaterial;
            ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mSunMoonMaterial;
            ::ll::TypedStorage<4, 4, float>                     mOrbitalOffsetDegrees;
            ::ll::TypedStorage<4, 4, float>                     mTimeOfDay;
            ::ll::TypedStorage<4, 4, float>                     mStarBrightness;
            ::ll::TypedStorage<4, 4, float>                     mSunAngleOne;
            ::ll::TypedStorage<4, 4, float>                     mFogLevel;
            ::ll::TypedStorage<4, 4, float>                     mAmbientBrightness;
            ::ll::TypedStorage<4, 4, float>                     mSkyDarken;
        };
        ::ll::TypedStorage<1, 1, ::Bedrock::Detail::NonCopyableField> _;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    SkyRenderObject& operator=(SkyRenderObject const&);
    SkyRenderObject(SkyRenderObject const&);
    SkyRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkyRenderObject(::SkyRenderObject&&);

    MCAPI ~SkyRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SkyRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
