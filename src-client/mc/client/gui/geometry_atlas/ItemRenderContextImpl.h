#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IInventoryItemRenderContext.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ComponentRenderBatch;
class InventoryItemRenderer;
struct BatchKey;
struct InventoryItemRenderOwnerData;
struct MinecraftUIPersistentMeshItem;
struct OffscreenCaptureDescription;
// clang-format on

namespace GeometryAtlas {

class ItemRenderContextImpl : public ::GeometryAtlas::details::IInventoryItemRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::InventoryItemRenderer&>  mRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRenderContextImpl& operator=(ItemRenderContextImpl const&);
    ItemRenderContextImpl(ItemRenderContextImpl const&);
    ItemRenderContextImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getNumRenderPasses() /*override*/;

    virtual ::BatchKey createBatchKey(int pass) /*override*/;

    virtual void tryPreRenderSetup(int pass) /*override*/;

    virtual ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    createPersistentMesh(::ComponentRenderBatch const& batch) /*override*/;

    virtual void
    configureUnbatchedRenderContext(::OffscreenCaptureDescription const& capture, bool isDrawingUI) /*override*/;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch const& batch) /*override*/;

    virtual void render(::InventoryItemRenderOwnerData const& data, int pass, float alpha) /*override*/;

    virtual bool endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::OffscreenCaptureDescription const& capture
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getNumRenderPasses();

    MCAPI ::BatchKey $createBatchKey(int pass);

    MCAPI void $tryPreRenderSetup(int pass);

    MCAPI ::std::unique_ptr<::MinecraftUIPersistentMeshItem> $createPersistentMesh(::ComponentRenderBatch const& batch);

    MCAPI void $configureUnbatchedRenderContext(::OffscreenCaptureDescription const& capture, bool isDrawingUI);

    MCAPI void $beginSharedMeshBatch(::ComponentRenderBatch const& batch);

    MCAPI void $render(::InventoryItemRenderOwnerData const& data, int pass, float alpha);

    MCAPI bool $endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::OffscreenCaptureDescription const& capture
    );
    // NOLINTEND
};

} // namespace GeometryAtlas
