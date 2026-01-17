#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace renoir { class RendererBackend; }
// clang-format on

namespace renoir {

class IRenderingLibrary {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void InitializeOnRenderThread(::renoir::RendererBackend*) = 0;

    virtual void DestroyRenderingResources() = 0;

    virtual void Uninitialize() = 0;

    virtual char const* GetVersion() const = 0;

    virtual void GetTextureCacheCountStats(uint&, uint&) const = 0;

    virtual void GetTextureCacheBytesStats(uint&, uint&) const = 0;

    virtual void SetTextureCacheCountCapacity(uint) = 0;

    virtual void SetTextureCacheBytesCapacity(uint) = 0;

    virtual void ClearTextureCache() = 0;

    virtual void GetScratchLayerCacheBytesStats(uint&, uint&) const = 0;

    virtual void SetScratchLayerCacheBytesCapacity(uint) = 0;

    virtual void GetScratchLayerCacheCountStats(uint&, uint&) const = 0;

    virtual void SetScratchLayerCacheCountCapacity(uint) = 0;

    virtual void GetScratchTextureCacheBytesStats(uint&, uint&) const = 0;

    virtual void SetScratchTextureCacheBytesCapacity(uint) = 0;

    virtual void GetScratchTextureCacheCountStats(uint&, uint&) const = 0;

    virtual void SetScratchTextureCacheCountCapacity(uint) = 0;

    virtual void GetCommandBufferPoolBytesStats(uint&, uint&) const = 0;

    virtual void SetCommandBufferPoolBytesCapacity(uint) = 0;

    virtual void GetCommandBufferPoolCountStats(uint&, uint&) const = 0;

    virtual void SetCommandBufferPoolCountCapacity(uint) = 0;

    virtual void GetCommandProcessorPoolBytesStats(uint&, uint&) const = 0;

    virtual void SetCommandProcessorPoolBytesCapacity(uint) = 0;

    virtual void GetCommandProcessorPoolCountStats(uint&, uint&) const = 0;

    virtual void SetCommandProcessorPoolCountCapacity(uint) = 0;

    virtual void ClearScratchLayersCache() = 0;

    virtual void ClearScratchTexturesCache() = 0;

    virtual void ClearCommandBufferPoolFreeList() = 0;

    virtual void ClearCommandProcessorPoolFreeList() = 0;

    virtual void ClearTextAtlases() = 0;

    virtual void* ReservedMethod(void*, void*) = 0;

    virtual void StartTrace() = 0;

    virtual void EndTrace() = 0;

    virtual ~IRenderingLibrary() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
