#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class IClientInstance;
class LevelRendererCamera;
struct BiomeBlendingSample;
struct DeferredBiomeInfo;
namespace mce { struct ClientTexture; }
namespace mce { struct Image; }
// clang-format on

class BiomeBlendingMapRenderer : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                       mClientInstance;
    ::ll::TypedStorage<8, 8, ::LevelRendererCamera&>                   mLevelRendererCamera;
    ::ll::TypedStorage<1, 1, bool>                                     mIsTextureUpdateInProgress;
    ::ll::TypedStorage<4, 4, int>                                      mCurrentTextureUpdateX;
    ::ll::TypedStorage<4, 4, int>                                      mCurrentTextureUpdateY;
    ::ll::TypedStorage<4, 4, int>                                      mTextureUpdateSizeX;
    ::ll::TypedStorage<4, 4, int>                                      mTextureUpdateSizeY;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mTextureUpdatePosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                          mTextureUpdateDimension;
    ::ll::TypedStorage<4, 4, int const>                                mTextureDimensions;
    ::ll::TypedStorage<4, 4, int const>                                mTextureUpdateBlockSize;
    ::ll::TypedStorage<4, 4, int const>                                mMaxTextureUpdatesPerFrame;
    ::ll::TypedStorage<4, 4, int const>                                mBiomeBlendingPixelSize;
    ::ll::TypedStorage<4, 4, float const>                              mUpdateDistanceThreshold;
    ::ll::TypedStorage<1, 1, bool>                                     mIsFirstUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mLastUpdatePosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                          mLastUpdateDimension;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ClientTexture>> mBiomeBlendingTexture;
    ::ll::TypedStorage<1, 1, ::mce::DynamicTexture const>              mBiomeBlendingTextureID;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Image>>         mBiomeBlendingBackBuffer;
    ::ll::TypedStorage<4, 4, int>                                      mMaxBiomeIndex;
    ::ll::TypedStorage<1, 1, bool>                                     mIsTextureDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeBlendingMapRenderer& operator=(BiomeBlendingMapRenderer const&);
    BiomeBlendingMapRenderer(BiomeBlendingMapRenderer const&);
    BiomeBlendingMapRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeBlendingMapRenderer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeBlendingMapRenderer(
        ::SubClientId          subClientId,
        ::IClientInstance&     clientInstance,
        ::LevelRendererCamera& levelRendererCamera
    );

    MCAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCAPI ::BiomeBlendingSample
    sampleAtPosition(::glm::vec3 const& samplePosition, ::std::vector<::DeferredBiomeInfo> const& biomeInfo) const;

    MCAPI void updateTexture(::std::vector<::DeferredBiomeInfo> const& biomeInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SubClientId subClientId, ::IClientInstance& clientInstance, ::LevelRendererCamera& levelRendererCamera);
    // NOLINTEND
};
