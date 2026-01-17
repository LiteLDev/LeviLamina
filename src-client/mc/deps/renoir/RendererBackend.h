#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/CBType.h"
#include "mc/deps/renoir/IndexBufferType.h"
#include "mc/deps/renoir/ResourcesCommandsStage.h"
#include "mc/deps/renoir/VertexType.h"

// auto generated forward declare list
// clang-format off
namespace renoir { class DynamicRendererBackend; }
namespace renoir { struct ConstantBufferObject; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct DepthStencilTextureObject; }
namespace renoir { struct IndexBufferObject; }
namespace renoir { struct PipelineState; }
namespace renoir { struct PipelineStateObject; }
namespace renoir { struct RendererCaps; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct Sampler2DObject; }
namespace renoir { struct Texture2D; }
namespace renoir { struct Texture2DObject; }
namespace renoir { struct TextureObject; }
namespace renoir { struct UpdateBox; }
namespace renoir { struct VertexBufferObject; }
// clang-format on

namespace renoir {

class RendererBackend {
public:
    // RendererBackend inner types declare
    // clang-format off
    struct BackendCommandsBuffer;
    struct BackendResourceCommandsBuffer;
    struct ConstantBufferUpdateData;
    // clang-format on

    // RendererBackend inner types define
    enum class GPUPerfTimingResult : int {
        Ok         = 0,
        Incomplete = 1,
        Failed     = 2,
    };

    struct BackendCommandsBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3037f7;
        ::ll::UntypedStorage<8, 8> mUnk62b09e;
        ::ll::UntypedStorage<4, 4> mUnk92117d;
        ::ll::UntypedStorage<4, 4> mUnk53c4d5;
        // NOLINTEND

    public:
        // prevent constructor by default
        BackendCommandsBuffer& operator=(BackendCommandsBuffer const&);
        BackendCommandsBuffer(BackendCommandsBuffer const&);
        BackendCommandsBuffer();
    };

    struct BackendResourceCommandsBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc0f4ee;
        ::ll::UntypedStorage<8, 8> mUnkb1b5c9;
        ::ll::UntypedStorage<4, 4> mUnk8bc8dc;
        // NOLINTEND

    public:
        // prevent constructor by default
        BackendResourceCommandsBuffer& operator=(BackendResourceCommandsBuffer const&);
        BackendResourceCommandsBuffer(BackendResourceCommandsBuffer const&);
        BackendResourceCommandsBuffer();
    };

    struct ConstantBufferUpdateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd277ca;
        ::ll::UntypedStorage<8, 8> mUnka765fd;
        ::ll::UntypedStorage<4, 4> mUnk675020;
        ::ll::UntypedStorage<4, 4> mUnk27394e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstantBufferUpdateData& operator=(ConstantBufferUpdateData const&);
        ConstantBufferUpdateData(ConstantBufferUpdateData const&);
        ConstantBufferUpdateData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererBackend() = default;

    virtual void FillCaps(::renoir::RendererCaps&) = 0;

    virtual void BeginCommands() = 0;

    virtual void WrapUserRenderTarget(
        void*,
        ::renoir::Texture2D const&,
        ::renoir::Texture2DObject,
        void*,
        ::renoir::DepthStencilTexture const&,
        ::renoir::DepthStencilTextureObject
    ) = 0;

    virtual void WrapUserTexture(void*, ::renoir::Texture2D const&, ::renoir::Texture2DObject) = 0;

    virtual bool CreatePipelineState(::renoir::PipelineState const&, ::renoir::PipelineStateObject) = 0;

    virtual void DestroyPipelineState(::renoir::PipelineStateObject) = 0;

    virtual bool CreateVertexBuffer(::renoir::VertexType, uint, ::renoir::VertexBufferObject, bool) = 0;

    virtual void DestroyVertexBuffer(::renoir::VertexBufferObject) = 0;

    virtual void* MapVertexBuffer(::renoir::VertexBufferObject) = 0;

    virtual void UnmapVertexBuffer(::renoir::VertexBufferObject, uint) = 0;

    virtual bool CreateIndexBuffer(::renoir::IndexBufferType, uint, ::renoir::IndexBufferObject, bool) = 0;

    virtual void DestroyIndexBuffer(::renoir::IndexBufferObject) = 0;

    virtual void* MapIndexBuffer(::renoir::IndexBufferObject) = 0;

    virtual void UnmapIndexBuffer(::renoir::IndexBufferObject, uint) = 0;

    virtual bool CreateConstantBuffer(::renoir::CBType, ::renoir::ConstantBufferObject, uint) = 0;

    virtual void DestroyConstantBuffer(::renoir::ConstantBufferObject) = 0;

    virtual bool CreateTexture(::renoir::Texture2DObject, ::renoir::Texture2D const&, void const*, uint) = 0;

    virtual void DestroyTexture(::renoir::Texture2DObject) = 0;

    virtual void UpdateTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2D const&,
        ::renoir::UpdateBox*,
        void const**,
        uint,
        bool
    ) = 0;

    virtual bool
    CreateDepthStencilTexture(::renoir::DepthStencilTextureObject, ::renoir::DepthStencilTexture const&) = 0;

    virtual void DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject) = 0;

    virtual bool CreateSampler2D(::renoir::Sampler2DObject, ::renoir::Sampler2D const&) = 0;

    virtual void DestroySampler2D(::renoir::Sampler2DObject) = 0;

    virtual void ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*,
        uint,
        ::renoir::RendererBackend::ConstantBufferUpdateData const*,
        uint
    ) = 0;

    virtual void ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const*,
        uint,
        ::renoir::ResourcesCommandsStage
    ) = 0;

    virtual void EndCommands() = 0;

    virtual ::renoir::DynamicRendererBackend* GetDynamicInterface();

    virtual void SetDebugName(::renoir::Texture2DObject, char const*);

    virtual void SetDebugName(::renoir::DepthStencilTextureObject, char const*);

    virtual void SetDebugName(::renoir::VertexBufferObject, char const*);

    virtual void SetDebugName(::renoir::IndexBufferObject, char const*);

    virtual void SetDebugName(::renoir::PipelineStateObject, char const*);

    virtual void SetDebugName(::renoir::ConstantBufferObject, char const*);

    virtual void SetDebugName(::renoir::Sampler2DObject, char const*);

    virtual void BeginGPUPerformanceTiming(uint);

    virtual void EndGPUPerformanceTiming(uint);

    virtual bool ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    virtual bool ReadVertexBuffer(::renoir::VertexBufferObject, void*);

    virtual bool ReadIndexBuffer(::renoir::IndexBufferObject, void*);

    virtual bool GetNativeTexture(::renoir::Texture2DObject, void*);

    virtual ::renoir::RendererBackend::GPUPerfTimingResult TryGetLatestGPUPerformanceTiming(uint, float&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::renoir::DynamicRendererBackend* $GetDynamicInterface();

    MCNAPI void $SetDebugName(::renoir::Texture2DObject, char const*);

    MCNAPI void $SetDebugName(::renoir::DepthStencilTextureObject, char const*);

    MCNAPI void $SetDebugName(::renoir::VertexBufferObject, char const*);

    MCNAPI void $SetDebugName(::renoir::IndexBufferObject, char const*);

    MCNAPI void $SetDebugName(::renoir::PipelineStateObject, char const*);

    MCNAPI void $SetDebugName(::renoir::ConstantBufferObject, char const*);

    MCNAPI void $SetDebugName(::renoir::Sampler2DObject, char const*);

    MCNAPI void $BeginGPUPerformanceTiming(uint);

    MCNAPI void $EndGPUPerformanceTiming(uint);

    MCNAPI bool $ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    MCNAPI bool $ReadVertexBuffer(::renoir::VertexBufferObject, void*);

    MCNAPI bool $ReadIndexBuffer(::renoir::IndexBufferObject, void*);

    MCNAPI bool $GetNativeTexture(::renoir::Texture2DObject, void*);

    MCNAPI ::renoir::RendererBackend::GPUPerfTimingResult $TryGetLatestGPUPerformanceTiming(uint, float&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace renoir
