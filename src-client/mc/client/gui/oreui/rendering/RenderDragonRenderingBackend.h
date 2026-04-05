#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRenderingBackend.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDraw.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefacePipelineState.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/external/gameface/renoir/CBType.h"
#include "mc/external/gameface/renoir/ConstantBufferObject.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"
#include "mc/external/gameface/renoir/PipelineStateObject.h"
#include "mc/external/gameface/renoir/PixelFormat.h"
#include "mc/external/gameface/renoir/RendererBackend.h"
#include "mc/external/gameface/renoir/ResourcesCommandsStage.h"
#include "mc/external/gameface/renoir/Sampler2DObject.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"
#include "mc/external/gameface/renoir/VertexBufferObject.h"
#include "mc/external/gameface/renoir/VertexType.h"
#include "mc/external/render_dragon/mesh/VertexFormat.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct FrameDebugData; }
namespace OreUI::RenderUtils { struct TextureData; }
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class ShaderGroup; }
namespace mce { struct SamplerStateDescription; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct PipelineState; }
namespace renoir { struct RendererCaps; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct SetMultipleVertexBuffersCmd; }
namespace renoir { struct SetPSConstantBuffersCmd; }
namespace renoir { struct SetPSSamplersCmd; }
namespace renoir { struct SetPSTexturesCmd; }
namespace renoir { struct SetPipelineStateCmd; }
namespace renoir { struct SetRenderTargetCmd; }
namespace renoir { struct SetScissorRectCmd; }
namespace renoir { struct SetVSConstantBuffersCmd; }
namespace renoir { struct SetViewportCmd; }
namespace renoir { struct Texture2D; }
namespace renoir { struct TextureObject; }
namespace renoir { struct UpdateBox; }
namespace renoir { struct float2; }
// clang-format on

namespace OreUI {

class RenderDragonRenderingBackend : public ::OreUI::IRenderingBackend {
public:
    // RenderDragonRenderingBackend inner types declare
    // clang-format off
    struct TextureData;
    struct VertexBuffer;
    struct GetGamefaceStride;
    struct IndexBuffer;
    struct ConstantBuffer;
    // clang-format on

    // RenderDragonRenderingBackend inner types define
    struct TextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            32,
            ::std::variant<
                ::std::monostate,
                ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>,
                ::mce::ClientTexture>>
                                                                mTexture;
        ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mDesc;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TextureData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

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
            ::ll::TypedStorage<8, 184, ::dragon::mesh::VertexFormat> dragonFormat;
            ::ll::TypedStorage<8, 24, ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>
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
            216,
            ::std::variant<
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>>
            mDragonStorage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VertexBuffer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        ::ll::TypedStorage<8, 24, ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>>
            dragonIndexBuffer;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~IndexBuffer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    ::ll::TypedStorage<8, 8, ::OreUI::FrameDebugData&>         mFrameDebugData;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&> mTemporaryTextureHolder;
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
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::Texture2DObject, ::OreUI::RenderDragonRenderingBackend::TextureData>>
        mTextures;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::DepthStencilTextureObject, ::OreUI::RenderDragonRenderingBackend::TextureData>>
        mDepthTextures;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::renoir::Sampler2DObject, ::mce::SamplerStateDescription>>
                                                                                     mSamplers;
    ::ll::TypedStorage<4, 20, ::std::array<::renoir::Texture2DObject, 5>>            mRequestedTextures;
    ::ll::TypedStorage<4, 20, ::std::array<::renoir::Sampler2DObject, 5>>            mRequestedSamplers;
    ::ll::TypedStorage<8, 144, ::mce::framebuilder::GamefacePipelineState>           mCurrentPipelineState;
    ::ll::TypedStorage<8, 464, ::mce::framebuilder::GamefaceBatchDraw::GamefaceMesh> mMesh;
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::GamefaceBatchDraw>                mBatch;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDragonRenderingBackend& operator=(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend();

public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ~RenderDragonRenderingBackend() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderDragonRenderingBackend(
        ::OreUI::FrameDebugData&         frameDebugData,
        ::OreUI::TemporaryTextureHolder& temporaryTextureHolder
    );

    MCAPI void _drawIndexedInstanced(uint indexCount, uint indexOffset, uint instanceCount, uint instanceOffset);

    MCAPI void _flush();

    MCAPI void _setMultipleVertexBuffer(
        ::renoir::SetMultipleVertexBuffersCmd const& cmd,
        ::renoir::VertexBufferObject const*          objs
    );

    MCAPI void
    _setPSConstantBuffers(::renoir::SetPSConstantBuffersCmd const* cmd, ::renoir::ConstantBufferObject const* data);

    MCAPI void _setPSSamplers(::renoir::SetPSSamplersCmd const& cmd, ::renoir::Sampler2DObject const* samplers);

    MCAPI void _setPSTextures(::renoir::SetPSTexturesCmd const& cmd, ::renoir::Texture2DObject const* textures);

    MCAPI void _setPerFrameConstantBuffers(
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       cboUpdatesCount
    );

    MCAPI void _setPipelineState(::renoir::SetPipelineStateCmd const& cmd);

    MCAPI void _setRenderTarget(::renoir::SetRenderTargetCmd const& cmd);

    MCAPI void _setScissorRect(::renoir::SetScissorRectCmd const& cmd);

    MCAPI void
    _setVSConstantBuffers(::renoir::SetVSConstantBuffersCmd const* cmd, ::renoir::ConstantBufferObject const* data);

    MCAPI void _setViewport(::renoir::SetViewportCmd const& cmd);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _updateTextureRegions(
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox const* boxes,
        void const**               newBytes,
        uint                       count,
        ::brstd::function_ref<
            ::OreUI::RenderUtils::TextureData(::renoir::PixelFormat, ::gsl::span<uchar const>) const,
            ::OreUI::RenderUtils::TextureData(::renoir::PixelFormat, ::gsl::span<uchar const>)> convertTextureData,
        ::brstd::function_ref<void(uint, uint, ::cg::ImageBuffer&&)>                            update
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::FrameDebugData& frameDebugData, ::OreUI::TemporaryTextureHolder& temporaryTextureHolder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&);

    MCFOLD void $onAppPreSuspended();

    MCFOLD void $BeginCommands();

    MCAPI void $FillCaps(::renoir::RendererCaps& outCaps);

    MCAPI void $WrapUserRenderTarget(
        void*                                userObject,
        ::renoir::Texture2D const&           description,
        ::renoir::Texture2DObject            object,
        void*                                depthStencil,
        ::renoir::DepthStencilTexture const& dsDescription,
        ::renoir::DepthStencilTextureObject  dsObject
    );

    MCAPI void
    $WrapUserTexture(void* userObject, ::renoir::Texture2D const& description, ::renoir::Texture2DObject object);

    MCAPI bool $CreatePipelineState(::renoir::PipelineState const& state, ::renoir::PipelineStateObject object);

    MCAPI void $DestroyPipelineState(::renoir::PipelineStateObject object);

    MCAPI bool $CreateVertexBuffer(::renoir::VertexType type, uint count, ::renoir::VertexBufferObject object, bool);

    MCAPI void $DestroyVertexBuffer(::renoir::VertexBufferObject object);

    MCAPI void* $MapVertexBuffer(::renoir::VertexBufferObject object);

    MCAPI void $UnmapVertexBuffer(::renoir::VertexBufferObject object, uint count);

    MCAPI bool
    $CreateIndexBuffer(::renoir::IndexBufferType format, uint count, ::renoir::IndexBufferObject object, bool);

    MCAPI void $DestroyIndexBuffer(::renoir::IndexBufferObject object);

    MCAPI void* $MapIndexBuffer(::renoir::IndexBufferObject object);

    MCAPI void $UnmapIndexBuffer(::renoir::IndexBufferObject object, uint elemCount);

    MCAPI bool $CreateConstantBuffer(::renoir::CBType type, ::renoir::ConstantBufferObject object, uint size);

    MCAPI void $DestroyConstantBuffer(::renoir::ConstantBufferObject object);

    MCAPI bool $CreateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        void const*                data,
        uint                       dataLen
    );

    MCAPI void $DestroyTexture(::renoir::Texture2DObject object);

    MCAPI void $UpdateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox*       boxes,
        void const**               newBytes,
        uint                       count,
        bool
    );

    MCAPI bool $CreateDepthStencilTexture(
        ::renoir::DepthStencilTextureObject  object,
        ::renoir::DepthStencilTexture const& description
    );

    MCAPI void $DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject object);

    MCFOLD void $CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    );

    MCAPI bool $CreateSampler2D(::renoir::Sampler2DObject object, ::renoir::Sampler2D const& description);

    MCAPI void $DestroySampler2D(::renoir::Sampler2DObject object);

    MCFOLD bool $ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    MCAPI void $ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*    buffers,
        uint                                                       buffersCount,
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       numCboUpdates
    );

    MCAPI void $ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const* buffers,
        uint                                                            buffersCount,
        ::renoir::ResourcesCommandsStage
    );

    MCAPI void $EndCommands();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
