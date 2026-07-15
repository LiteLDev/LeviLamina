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

    virtual ::BatchKey createBatchKey(int) /*override*/;

    virtual void tryPreRenderSetup(int) /*override*/;

    virtual ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    createPersistentMesh(::ComponentRenderBatch const&) /*override*/;

    virtual void configureUnbatchedRenderContext(::OffscreenCaptureDescription const&, bool) /*override*/;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch const&) /*override*/;

    virtual void render(::InventoryItemRenderOwnerData const&, int, float) /*override*/;

    virtual bool endSharedMeshBatch(
        ::ComponentRenderBatch&,
        ::MinecraftUIPersistentMeshItem&,
        ::OffscreenCaptureDescription const&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
