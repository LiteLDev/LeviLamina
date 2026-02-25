#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/renderer/chunks/RenderChunkSorter.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class IClientInstance;
class MinecraftUIRenderContext;
class RenderChunkBuilder;
class ScreenContext;
class Tessellator;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
struct ActorBlockSyncMessage;
struct IRenderChunkGarbage;
struct RenderChunkInstanced;
struct RenderChunkSorterSharedInfo;
struct UIActorOffscreenCaptureDescription;
struct UIMeshOffscreenCaptureDescription;
struct UIStructureVolumeOffscreenCaptureDescription;
struct UIThumbnailMeshOffscreenCaptureDescription;
namespace ClientBlockPipeline { class TessellatorContext; }
namespace mce::StructureVolumeOffscreenUtils { struct StructureVolumeCaptureRequestInfo; }
// clang-format on

class StructureVolumeRenderer : public ::MinecraftUICustomRenderer,
                                public ::BlockSourceListener,
                                public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mInitialize;
    ::ll::TypedStorage<1, 1, bool>                                      mListenerInitialized;
    ::ll::TypedStorage<1, 1, bool>                                      mRendered;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mRotation;
    ::ll::TypedStorage<4, 24, ::AABB>                                   mLastArea;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IRenderChunkGarbage>> mGarbage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RenderChunkBuilder>>   mChunkBuilder;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::unique_ptr<::RenderChunkInstanced>>>
                                                                                mRenderChunkInstances;
    ::ll::TypedStorage<8, 8, ::Tick>                                            mRenderTick;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLastSortRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mSortingCameraPos;
    ::ll::TypedStorage<1, 1, bool>                                              mResort;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                    mUnsafeSourcePointer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkSorterSharedInfo>> mSharedSortInfo;
    ::ll::TypedStorage<8, 368, ::RenderChunkSorter>                             mChunkSorter;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                               mAxesMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureVolumeRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int                         pass
    ) /*override*/;

    virtual void onSourceDestroyed(::BlockSource& source) /*override*/;

    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onAppSuspended() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureVolumeRenderer();

    MCAPI ::BlockPos _getBlockPosition(::UIPropertyBag const& bag) const;

    MCAPI ::RenderChunkInstanced& _getRenderChunkInstanced(::BlockPos const& chunkPos);

    MCAPI ::AABB _getStructureArea(::UIPropertyBag const& bag) const;

    MCAPI void _initializeChunkBuilder(
        ::ClientBlockPipeline::TessellatorContext& pipelineContext,
        ::BlockSource&                             region,
        ::Tessellator&                             tessellator,
        ::AABB const&                              area
    );

    MCAPI void _onAreaChanged(::AABB const& newArea);

    MCAPI void _render(
        ::MinecraftUIRenderContext& renderContext,
        ::BlockSource&              region,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const&                               captureDescription,
        ::std::optional<::mce::StructureVolumeOffscreenUtils::StructureVolumeCaptureRequestInfo> requestInfo
    );

    MCAPI void _renderAxisHelpers(::ScreenContext& screenContext, ::UIControl const& owner) const;

    MCAPI bool _renderBlockEntities(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::AABB const&             area,
        bool                      renderAlphaLayer
    ) const;

    MCAPI bool _renderBlocks(::BaseActorRenderContext& renderContext, ::BlockSource& region, ::AABB const& area);

    MCAPI bool
    _renderEntities(::BaseActorRenderContext& renderContext, ::BlockSource& region, ::AABB const& area) const;

    MCAPI bool _renderPlayers(::BaseActorRenderContext& renderContext, ::BlockSource& region, ::AABB const& area) const;

    MCAPI bool _renderStructureWireframes(
        ::BaseActorRenderContext& renderContext,
        ::IClientInstance const&  clientInstance,
        ::BlockPos const&         blockPos
    ) const;

    MCAPI void _renderThumbnailOffscreen(
        ::MinecraftUIRenderContext& renderContext,
        ::BlockSource&              region,
        ::IClientInstance&          client,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const&                     captureDescription,
        ::mce::StructureVolumeOffscreenUtils::StructureVolumeCaptureRequestInfo const& requestInfo
    );

    MCAPI void _updatePreviewRotation(::UIControl& owner, float dt);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area);

    MCAPI static void _iterateOverBlockEntities(
        ::BlockSource&                              region,
        ::AABB const&                               area,
        ::std::function<void(::BlockActor&)> const& processBlockActor
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void
    $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCAPI void $onSourceDestroyed(::BlockSource& source);

    MCAPI void $onAppResumed();

    MCAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockSourceListener();

    MCNAPI static void** $vftableForMinecraftUICustomRenderer();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};
