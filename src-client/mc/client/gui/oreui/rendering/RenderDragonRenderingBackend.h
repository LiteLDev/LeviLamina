#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/FrameDebugData.h"
#include "mc/client/gui/oreui/interface/IRenderingBackend.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDraw.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDrawMesh.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefacePipelineState.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceRenderTarget.h"
#include "mc/external/gameface/renoir/CBType.h"
#include "mc/external/gameface/renoir/ConstantBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"
#include "mc/external/gameface/renoir/PipelineStateObject.h"
#include "mc/external/gameface/renoir/RendererBackend.h"
#include "mc/external/gameface/renoir/ResourcesCommandsStage.h"
#include "mc/external/gameface/renoir/VertexBufferObject.h"
#include "mc/external/gameface/renoir/VertexType.h"
#include "mc/external/render_dragon/mesh/VertexFormat.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureStorage; }
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { struct FrameDebugData; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class ShaderGroup; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct DepthStencilTextureObject; }
namespace renoir { struct PipelineState; }
namespace renoir { struct RendererCaps; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct Sampler2DObject; }
namespace renoir { struct Texture2D; }
namespace renoir { struct Texture2DObject; }
namespace renoir { struct TextureObject; }
namespace renoir { struct UpdateBox; }
namespace renoir { struct float2; }
// clang-format on

namespace OreUI {

class RenderDragonRenderingBackend : public ::OreUI::IRenderingBackend {
public:
    // RenderDragonRenderingBackend inner types declare
    // clang-format off
    struct VertexBuffer;
    struct GetGamefaceStride;
    struct IndexBuffer;
    struct ConstantBuffer;
    // clang-format on

    // RenderDragonRenderingBackend inner types define
    struct VertexBuffer {
    public:
        // VertexBuffer inner types declare
        // clang-format off
        struct DragonVertexBuffer;
        struct DragonInstanceData;
        // clang-format on

        // VertexBuffer inner types define
        struct DragonVertexBuffer {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> dragonFormat;
            ::ll::TypedStorage<8, 16, ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>
                dragonVertexBuffer;
            // NOLINTEND
        };

        struct DragonInstanceData {
        public:
            // DragonInstanceData inner types define
            using BufferConvert = void (*)(::std::vector<uchar> const&, ::std::vector<uchar>&, uint64);

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<
                8,
                8,
                ::gsl::not_null<void (*)(::std::vector<uchar> const&, ::std::vector<uchar>&, uint64)>>
                                                            mGamefaceToDragon;
            ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mDragonInstanceBuffer;
            ::ll::TypedStorage<1, 1, uchar>                 mGamefaceStride;
            // NOLINTEND
        };

        using DragonStorage = ::std::variant<
            ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
            ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  count;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
        ::ll::TypedStorage<
            8,
            160,
            ::std::variant<
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>>
            mDragonStorage;
        // NOLINTEND
    };

    struct GetGamefaceStride {};

    struct IndexBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  count;
        ::ll::TypedStorage<1, 1, uchar>                 mStride;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
        ::ll::TypedStorage<8, 16, ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>>
            dragonIndexBuffer;
        // NOLINTEND
    };

    struct ConstantBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::renoir::CBType>    type;
        ::ll::TypedStorage<4, 2048, ::glm::vec4[128]> data;
        ::ll::TypedStorage<8, 8, uint64>              size;
        // NOLINTEND
    };

    using PipelineStateData = ::mce::framebuilder::GamefacePipelineState;

    using BatchDraw = ::mce::framebuilder::GamefaceBatchDraw;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FrameDebugData&> mFrameDebugData;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::PipelineStateObject, ::mce::framebuilder::GamefacePipelineState>>
        mPipelineStates;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::VertexBufferObject, ::OreUI::RenderDragonRenderingBackend::VertexBuffer>>
                                                                            mVertexBuffers;
    ::ll::TypedStorage<4, 8, ::std::array<::renoir::VertexBufferObject, 2>> mCurrentVertexBuffers;
    ::ll::TypedStorage<4, 4, int>                                           mNumVertexBuffersActive;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::IndexBufferObject, ::OreUI::RenderDragonRenderingBackend::IndexBuffer>>
                                                          mIndexBuffers;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> mCurrentIndexBuffer;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::ConstantBufferObject, ::OreUI::RenderDragonRenderingBackend::ConstantBuffer>>
        mConstantBuffers;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Gameface::IRenderingBackendTextureStorage>>> mTextures;
    ::ll::TypedStorage<4, 36, ::mce::framebuilder::GamefacePipelineState>  mCurrentPipelineState;
    ::ll::TypedStorage<8, 88, ::mce::framebuilder::GamefaceRenderTarget>   mCurrentRenderTarget;
    ::ll::TypedStorage<1, 1, uchar>                                        mCurrentStencilRef;
    ::ll::TypedStorage<8, 416, ::mce::framebuilder::GamefaceBatchDrawMesh> mMesh;
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::GamefaceBatchDraw>      mBatch;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDragonRenderingBackend& operator=(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderDragonRenderingBackend() /*override*/ = default;

    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) /*override*/;

    virtual void onAppPreSuspended() /*override*/;

    virtual void BeginCommands() /*override*/;

    virtual void FillCaps(::renoir::RendererCaps& outCaps) /*override*/;

    virtual void WrapUserRenderTarget(
        void*                                userObject,
        ::renoir::Texture2D const&           description,
        ::renoir::Texture2DObject            object,
        void*                                depthStencil,
        ::renoir::DepthStencilTexture const& dsDescription,
        ::renoir::DepthStencilTextureObject  dsObject
    ) /*override*/;

    virtual void WrapUserTexture(
        void*                      userObject,
        ::renoir::Texture2D const& description,
        ::renoir::Texture2DObject  object
    ) /*override*/;

    virtual bool
    CreatePipelineState(::renoir::PipelineState const& state, ::renoir::PipelineStateObject object) /*override*/;

    virtual void DestroyPipelineState(::renoir::PipelineStateObject object) /*override*/;

    virtual bool
    CreateVertexBuffer(::renoir::VertexType type, uint count, ::renoir::VertexBufferObject object, bool) /*override*/;

    virtual void DestroyVertexBuffer(::renoir::VertexBufferObject object) /*override*/;

    virtual void* MapVertexBuffer(::renoir::VertexBufferObject object) /*override*/;

    virtual void UnmapVertexBuffer(::renoir::VertexBufferObject object, uint count) /*override*/;

    virtual bool CreateIndexBuffer(
        ::renoir::IndexBufferType   format,
        uint                        count,
        ::renoir::IndexBufferObject object,
        bool
    ) /*override*/;

    virtual void DestroyIndexBuffer(::renoir::IndexBufferObject object) /*override*/;

    virtual void* MapIndexBuffer(::renoir::IndexBufferObject object) /*override*/;

    virtual void UnmapIndexBuffer(::renoir::IndexBufferObject object, uint elemCount) /*override*/;

    virtual bool
    CreateConstantBuffer(::renoir::CBType type, ::renoir::ConstantBufferObject object, uint size) /*override*/;

    virtual void DestroyConstantBuffer(::renoir::ConstantBufferObject object) /*override*/;

    virtual bool CreateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        void const*                data,
        uint                       dataLen
    ) /*override*/;

    virtual void DestroyTexture(::renoir::Texture2DObject object) /*override*/;

    virtual void UpdateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox*       boxes,
        void const**               newBytes,
        uint                       count,
        bool
    ) /*override*/;

    virtual bool CreateDepthStencilTexture(
        ::renoir::DepthStencilTextureObject  object,
        ::renoir::DepthStencilTexture const& description
    ) /*override*/;

    virtual void DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject object) /*override*/;

    virtual void CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    ) /*override*/;

    virtual bool CreateSampler2D(::renoir::Sampler2DObject object, ::renoir::Sampler2D const& description) /*override*/;

    virtual void DestroySampler2D(::renoir::Sampler2DObject object) /*override*/;

    virtual bool ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*) /*override*/;

    virtual void ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*    buffers,
        uint                                                       buffersCount,
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       numCboUpdates
    ) /*override*/;

    virtual void ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const* buffers,
        uint                                                            buffersCount,
        ::renoir::ResourcesCommandsStage
    ) /*override*/;

    virtual void EndCommands() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDragonRenderingBackend(
        ::OreUI::FrameDebugData&            frameDebugData,
        ::Gameface::TemporaryTextureHolder& temporaryTextureHolder
    );

    MCNAPI void _drawIndexedInstanced(uint indexCount, uint indexOffset, uint instanceCount, uint instanceOffset);

    MCNAPI void _flush(::OreUI::FrameDebugData::FlushTrigger trigger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::OreUI::FrameDebugData& frameDebugData, ::Gameface::TemporaryTextureHolder& temporaryTextureHolder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&);

    MCNAPI void $onAppPreSuspended();

    MCNAPI void $BeginCommands();

    MCNAPI void $FillCaps(::renoir::RendererCaps& outCaps);

    MCNAPI void $WrapUserRenderTarget(
        void*                                userObject,
        ::renoir::Texture2D const&           description,
        ::renoir::Texture2DObject            object,
        void*                                depthStencil,
        ::renoir::DepthStencilTexture const& dsDescription,
        ::renoir::DepthStencilTextureObject  dsObject
    );

    MCNAPI void
    $WrapUserTexture(void* userObject, ::renoir::Texture2D const& description, ::renoir::Texture2DObject object);

    MCNAPI bool $CreatePipelineState(::renoir::PipelineState const& state, ::renoir::PipelineStateObject object);

    MCNAPI void $DestroyPipelineState(::renoir::PipelineStateObject object);

    MCNAPI bool $CreateVertexBuffer(::renoir::VertexType type, uint count, ::renoir::VertexBufferObject object, bool);

    MCNAPI void $DestroyVertexBuffer(::renoir::VertexBufferObject object);

    MCNAPI void* $MapVertexBuffer(::renoir::VertexBufferObject object);

    MCNAPI void $UnmapVertexBuffer(::renoir::VertexBufferObject object, uint count);

    MCNAPI bool
    $CreateIndexBuffer(::renoir::IndexBufferType format, uint count, ::renoir::IndexBufferObject object, bool);

    MCNAPI void $DestroyIndexBuffer(::renoir::IndexBufferObject object);

    MCNAPI void* $MapIndexBuffer(::renoir::IndexBufferObject object);

    MCNAPI void $UnmapIndexBuffer(::renoir::IndexBufferObject object, uint elemCount);

    MCNAPI bool $CreateConstantBuffer(::renoir::CBType type, ::renoir::ConstantBufferObject object, uint size);

    MCNAPI void $DestroyConstantBuffer(::renoir::ConstantBufferObject object);

    MCNAPI bool $CreateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        void const*                data,
        uint                       dataLen
    );

    MCNAPI void $DestroyTexture(::renoir::Texture2DObject object);

    MCNAPI void $UpdateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox*       boxes,
        void const**               newBytes,
        uint                       count,
        bool
    );

    MCNAPI bool $CreateDepthStencilTexture(
        ::renoir::DepthStencilTextureObject  object,
        ::renoir::DepthStencilTexture const& description
    );

    MCNAPI void $DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject object);

    MCNAPI void $CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    );

    MCNAPI bool $CreateSampler2D(::renoir::Sampler2DObject object, ::renoir::Sampler2D const& description);

    MCNAPI void $DestroySampler2D(::renoir::Sampler2DObject object);

    MCNAPI bool $ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    MCNAPI void $ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*    buffers,
        uint                                                       buffersCount,
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       numCboUpdates
    );

    MCNAPI void $ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const* buffers,
        uint                                                            buffersCount,
        ::renoir::ResourcesCommandsStage
    );

    MCNAPI void $EndCommands();
    // NOLINTEND
};

} // namespace OreUI
