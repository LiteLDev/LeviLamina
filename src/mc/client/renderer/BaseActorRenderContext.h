#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/HistoricalFrameTimes.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/resources/UIActorOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIMeshOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class ActorRenderDispatcher;
class DataDrivenRenderer;
class IClientInstance;
class IMinecraftGame;
class ItemInHandRenderer;
class ItemRenderer;
class ScreenContext;
struct ActorBlockRenderer;
struct BlockActorRenderDispatcher;
struct DataDrivenRendererContinuousData;
struct HudIconActorRenderer;
struct ParticleSystemEngine;
struct ProcessedDataDrivenRenderers;
struct SortedMeshDrawList;
// clang-format on

class BaseActorRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                       mNumEntitiesRenderedThisFrame;
    ::ll::TypedStorage<4, 4, float>                                       mLastFrameTime;
    ::ll::TypedStorage<8, 8, ::SortedMeshDrawList*>                       mSortedMeshDrawList;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                          mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                           mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                            mScreenContext;
    ::ll::TypedStorage<8, 8, ::BlockActorRenderDispatcher&>               mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorRenderDispatcher>> mEntityRenderDispatcher;
    ::ll::TypedStorage<8, 8, ::ActorBlockRenderer&>                       mEntityBlockRenderer;
    ::ll::TypedStorage<8, 8, ::ItemInHandRenderer&>                       mItemInHandRenderer;
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                             mItemRenderer;
    ::ll::TypedStorage<8, 8, ::HudIconActorRenderer&>                     mHudIconActorRenderer;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine*>                     mParticleSystemEngine;
    ::ll::TypedStorage<8, 8, ::ProcessedDataDrivenRenderers const*>       mProcessedV2DataDrivenRenderers;
    ::ll::TypedStorage<8, 8, ::DataDrivenRendererContinuousData*>         mV2DataDrivenContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                        mV2ShouldRenderActorsWithAttachables;
    ::ll::TypedStorage<8, 16, ::std::optional<int64>>                     mRenderUniqueIdOverride;
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription>>
                                                       mOffscreenCaptureDescription;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mCameraTargetPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mCameraPosition;
    ::ll::TypedStorage<4, 24, ::AABB>                  mWorldClipRegion;
    ::ll::TypedStorage<4, 4, float const>              mFrameAlpha;
    ::ll::TypedStorage<4, 4, float>                    mActorDitheringMaxDistance;
    ::ll::TypedStorage<1, 1, bool>                     mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool>                     mUpdateBonesAndEffects;
    ::ll::TypedStorage<1, 1, bool>                     mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                     mIgnoresLighting;
    ::ll::TypedStorage<1, 1, bool>                     mForceLightingOn;
    ::ll::TypedStorage<1, 1, bool>                     mIsRenderingOnMap;
    ::ll::TypedStorage<8, 488, ::HistoricalFrameTimes> mHistoricalFrameTimes;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorRenderContext& operator=(BaseActorRenderContext const&);
    BaseActorRenderContext(BaseActorRenderContext const&);
    BaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~BaseActorRenderContext() = default;
#else // LL_PLAT_C
    virtual ~BaseActorRenderContext();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCAPI_C float getFrameAlpha(::Actor const& actor) const;

    MCAPI_C bool isDeferredUpscaling() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::BaseActorRenderContext const&);

    MCAPI_C void*
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
