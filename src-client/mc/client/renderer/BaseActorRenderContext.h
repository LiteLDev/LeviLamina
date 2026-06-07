#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/HistoricalFrameTimes.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/resources/UIActorOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIMeshOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class BlockActor;
class BlockActorRenderDispatcher;
class DataDrivenRenderer;
class FontHandle;
class HashedString;
class HudIconActorRenderer;
class IClientInstance;
class IMinecraftGame;
class IOptionRegistry;
class ItemInHandRenderer;
class ItemRenderer;
class LightTexture;
class MatrixStack;
class ParticleSystemEngine;
class ScreenContext;
class SortedMeshDrawList;
class Tessellator;
class Vec2;
struct DataDrivenRendererContinuousData;
struct ProcessedDataDrivenRenderers;
namespace LightPropagation { class LightVolumeManager; }
namespace mce { class TextureGroup; }
// clang-format on

class BaseActorRenderContext {
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
    ::ll::TypedStorage<1, 1, bool>                    mV2ShouldRenderActorsWithAttachables;
    ::ll::TypedStorage<8, 16, ::std::optional<int64>> mRenderUniqueIdOverride;
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
    BaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderContext();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseActorRenderContext(::BaseActorRenderContext const&);

    MCAPI BaseActorRenderContext(
        ::ScreenContext&   screenContext,
        ::IClientInstance& clientInstance,
        ::IMinecraftGame&  minecraftGame
    );

    MCAPI float getActorDitheringMaxDistance() const;

    MCFOLD ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher();

    MCAPI ::Actor* getCameraActor();

    MCAPI ::Vec3 const& getCameraPosition() const;

    MCAPI ::Vec2 getCameraRotation(float a) const;

    MCFOLD ::Vec3 const& getCameraTargetPosition() const;

    MCFOLD ::IClientInstance const& getClient() const;

    MCFOLD ::IClientInstance& getClient();

    MCAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCFOLD ::ActorBlockRenderer& getEntityBlockRenderer();

    MCFOLD ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontHandle();

    MCAPI float getFrameAlpha(::Actor const& actor) const;

    MCAPI float getFrameAlpha(::Actor const* actor) const;

    MCAPI float getFrameAlpha(::BlockActor const& blockActor) const;

    MCFOLD ::HudIconActorRenderer& getHudIconActorRenderer();

    MCFOLD ::ItemInHandRenderer& getItemInHandRenderer();

    MCFOLD ::ItemRenderer& getItemRenderer();

    MCAPI ::LightTexture* getLightTexture() const;

    MCAPI ::std::weak_ptr<::LightPropagation::LightVolumeManager> getLightVolumeManager() const;

    MCAPI ::IOptionRegistry& getOptions();

    MCFOLD ::ParticleSystemEngine* getParticleSystemEngine();

    MCAPI ::MatrixStack& getProjectionMatrix();

    MCAPI ::std::optional<int64> getRenderUniqueIdOverride() const;

    MCFOLD ::ScreenContext& getScreenContext() const;

    MCAPI ::Tessellator& getTessellator();

    MCAPI ::std::shared_ptr<::mce::TextureGroup> getTextureGroup();

    MCFOLD ::DataDrivenRendererContinuousData* getV2ContinuousData();

    MCFOLD ::ProcessedDataDrivenRenderers const* getV2ProcessedDataDrivenRenderers() const;

    MCFOLD bool getV2ShouldRenderActorsWithAttachables() const;

    MCAPI ::MatrixStack& getViewMatrix();

    MCAPI ::MatrixStack& getWorldMatrix();

    MCAPI bool isDeferredUpscaling() const;

    MCAPI bool isForceLightingOn() const;

    MCAPI bool isIgnoringLighting() const;

    MCAPI bool isLightingOff() const;

    MCAPI bool isRenderingOnMap() const;

    MCAPI bool isSimple();

    MCAPI ::BaseActorRenderContext overrideScreenContext(::ScreenContext& screenContext) const;

    MCAPI void setActorDitheringMaxDistance(float maxDitheringDistance);

    MCAPI void setCameraPosition(::Vec3 const& value);

    MCFOLD void setCameraTargetPosition(::Vec3 const& value);

    MCAPI void setForceLightingOn(bool state);

    MCAPI void setIgnoreLighting(bool state);

    MCAPI void setIsOnScreen(bool);

    MCAPI void setRenderUniqueIdOverride(int64 uniqueId);

    MCFOLD void setRenderUniqueIdOverride(::std::optional<int64> uniqueId);

    MCAPI void setRenderingOnMap(bool state);

    MCAPI void setUpdateBonesAndEffects(bool shouldUpdateBonesAndEffects);

    MCAPI void setUpdateEffects(bool shouldUpdateEffects);

    MCAPI void setWorldClipRegion(::AABB const& region);

    MCAPI bool shouldUpdateBonesAndEffects() const;

    MCAPI bool shouldUpdateEffects() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseActorRenderContext const&);

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
