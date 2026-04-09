#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class EditorVolumeHighlightRendererInstanceData;
class IClientInstance;
class MinecraftUIRenderContext;
class RenderChunkCoordinator;
class RenderChunkInstanced;
class Tessellator;
class UIControl;
class UICustomRenderer;
struct ActorBlockSyncMessage;
namespace ClientBlockPipeline { class TessellatorContext; }
// clang-format on

class EditorVolumeHighlightRenderer : public ::MinecraftUICustomRenderer,
                                      public ::BlockSourceListener,
                                      public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mListenerInitialized;
    ::ll::TypedStorage<8, 8, ::EditorVolumeHighlightRendererInstanceData*> mInstanceContext;
    ::ll::TypedStorage<8, 8, ::Tick>                                       mRenderTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mSortingCameraPos;
    ::ll::TypedStorage<1, 1, bool>                                         mResort;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                           mSelectedBlocksOverlayTex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorVolumeHighlightRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int) /*override*/;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::BlockPos> _generateChunkStartPositions(::AABB const& area) const;

    MCAPI ::RenderChunkInstanced& _getRenderChunkInstanced(::BlockPos const& chunkPos);

    MCAPI void _initializeChunkBuilder(
        ::ClientBlockPipeline::TessellatorContext& pipelineContext,
        ::BlockSource&                             region,
        ::Tessellator&                             tessellator,
        ::WeakRef<::RenderChunkCoordinator>        coordinator,
        ::AABB const&                              area
    );

    MCAPI bool _renderBlockEntities(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::AABB const&             area,
        ::Vec3 const&             offset,
        bool                      renderAlphaLayer
    ) const;

    MCAPI bool _renderBlocks(
        ::BaseActorRenderContext& renderContext,
        ::BlockSource&            region,
        ::AABB const&             area,
        ::Vec3 const&             offset
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int);

    MCFOLD void $onSourceDestroyed(::BlockSource& source);

    MCAPI void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForBlockSourceListener();

    MCNAPI static void** $vftableForMinecraftUICustomRenderer();
    // NOLINTEND
};
