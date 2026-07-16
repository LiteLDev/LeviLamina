#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class BlockActorRenderDispatcher;
class DataDrivenRenderer;
class FontHandle;
class HashedString;
class HudIconActorRenderer;
class IClientInstance;
class IMinecraftGame;
class ItemInHandRenderer;
class ItemRenderer;
class ParticleSystemEngine;
class ScreenContext;
class SortedMeshDrawList;
class Vec2;
struct DataDrivenRendererContinuousData;
struct ProcessedDataDrivenRenderers;
namespace LightPropagation { class LightVolumeManager; }
// clang-format on

class BaseActorRenderContext {
public:
    // BaseActorRenderContext inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // BaseActorRenderContext inner types define
    struct Impl {};

    using ResetToken = ::gsl::final_action<::brstd::copyable_function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                    mNumEntitiesRenderedThisFrame;
    ::ll::TypedStorage<4, 4, float>                                                    mLastFrameTime;
    ::ll::TypedStorage<8, 8, ::SortedMeshDrawList*>                                    mSortedMeshDrawList;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                       mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                        mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                         mScreenContext;
    ::ll::TypedStorage<8, 8, ::BlockActorRenderDispatcher&>                            mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorRenderDispatcher>>              mEntityRenderDispatcher;
    ::ll::TypedStorage<8, 8, ::ActorBlockRenderer&>                                    mEntityBlockRenderer;
    ::ll::TypedStorage<8, 8, ::ItemInHandRenderer&>                                    mItemInHandRenderer;
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                                          mItemRenderer;
    ::ll::TypedStorage<8, 8, ::HudIconActorRenderer&>                                  mHudIconActorRenderer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine*>                                  mParticleSystemEngine;
    ::ll::TypedStorage<8, 8, ::ProcessedDataDrivenRenderers const*>                    mProcessedV2DataDrivenRenderers;
    ::ll::TypedStorage<8, 8, ::DataDrivenRendererContinuousData*>                      mV2DataDrivenContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                              mV2ShouldRenderActorsWithAttachables;
    ::ll::TypedStorage<8, 16, ::std::optional<int64>>                           mRenderUniqueIdOverride;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseActorRenderContext::Impl>> mImpl;
    ::ll::TypedStorage<4, 4, float const>                                       mFrameAlpha;
    ::ll::TypedStorage<4, 4, float>                                             mActorDitheringMaxDistance;
    ::ll::TypedStorage<1, 1, bool>                                              mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool>                                              mUpdateBonesAndEffects;
    ::ll::TypedStorage<1, 1, bool>                                              mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                                              mIgnoresLighting;
    ::ll::TypedStorage<1, 1, bool>                                              mForceLightingOn;
    ::ll::TypedStorage<1, 1, bool>                                              mIsRenderingOnMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorRenderContext& operator=(BaseActorRenderContext const&);
    BaseActorRenderContext(BaseActorRenderContext const&);
    BaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderContext();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseActorRenderContext(
        ::ScreenContext&   screenContext,
        ::IClientInstance& clientInstance,
        ::IMinecraftGame&  minecraftGame
    );

    MCAPI ::Vec2 getCameraRotation(float a) const;

    MCAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontHandle();

    MCAPI float getFrameAlpha(::Actor const& actor) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ScreenContext& screenContext, ::IClientInstance& clientInstance, ::IMinecraftGame& minecraftGame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
