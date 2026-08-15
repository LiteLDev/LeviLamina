#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
struct BatchKey;
struct InventoryItemRenderOwnerData;
struct MinecraftUIPersistentMeshItem;
struct OffscreenCaptureDescription;
// clang-format on

namespace GeometryAtlas::details {

class IInventoryItemRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInventoryItemRenderContext() = default;

    virtual int getNumRenderPasses() = 0;

    virtual ::BatchKey createBatchKey(int pass) = 0;

    virtual void tryPreRenderSetup(int pass) = 0;

    virtual ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    createPersistentMesh(::ComponentRenderBatch const& batch) = 0;

    virtual void configureUnbatchedRenderContext(::OffscreenCaptureDescription const& capture, bool isDrawingUI) = 0;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch const& batch) = 0;

    virtual void render(::InventoryItemRenderOwnerData const& data, int pass, float alpha) = 0;

    virtual bool endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::OffscreenCaptureDescription const& capture
    ) = 0;
    // NOLINTEND
};

} // namespace GeometryAtlas::details
