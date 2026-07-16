#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/BufferD3D11.h"
#include "mc/external/bgfx/Dxgi.h"
#include "mc/external/bgfx/FatalError.h"
#include "mc/external/bgfx/FrameBufferD3D11.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/NvApi.h"
#include "mc/external/bgfx/OcclusionQueryD3D11.h"
#include "mc/external/bgfx/ProgramD3D11.h"
#include "mc/external/bgfx/RendererContextI.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/bgfx/ShaderD3D11.h"
#include "mc/external/bgfx/StateCacheLru.h"
#include "mc/external/bgfx/StateCacheT.h"
#include "mc/external/bgfx/SwapChainDesc.h"
#include "mc/external/bgfx/TextVideoMem.h"
#include "mc/external/bgfx/TextureStage.h"
#include "mc/external/bgfx/TimerQueryD3D11.h"
#include "mc/external/bgfx/UniformRegistry.h"
#include "mc/external/bgfx/VertexBufferD3D11.h"
#include "mc/external/bgfx/VertexDecl.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/uniform_type/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Attachment; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct Memory; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct Rect; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct ShaderHandle; }
namespace bgfx { struct TextVideoMemBlitter; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDeclHandle; }
namespace bgfx::d3d11 { struct AGSContext; }
namespace bgfx::d3d11 { struct TextureD3D11; }
// clang-format on

namespace bgfx::d3d11 {

struct RendererContextD3D11 : public ::bgfx::RendererContextI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                                       m_d3d9dll;
    ::ll::TypedStorage<8, 8, void*>                                       m_d3d11dll;
    ::ll::TypedStorage<8, 8, void*>                                       m_renderdocdll;
    ::ll::TypedStorage<8, 8, void*>                                       m_agsdll;
    ::ll::TypedStorage<8, 448, ::bgfx::Dxgi>                              m_dxgi;
    ::ll::TypedStorage<8, 8, ::bgfx::d3d11::AGSContext*>                  m_ags;
    ::ll::TypedStorage<8, 48, ::bgfx::NvApi>                              m_nvapi;
    ::ll::TypedStorage<4, 4, ::D3D_FEATURE_LEVEL>                         m_featureLevel;
    ::ll::TypedStorage<8, 8, ::IDXGISwapChain3*>                          m_swapChain;
    ::ll::TypedStorage<8, 8, ::ID3D11Texture2D*>                          m_msaaRenderTarget;
    ::ll::TypedStorage<1, 1, bool>                                        m_needPresent;
    ::ll::TypedStorage<1, 1, bool>                                        m_fatal;
    ::ll::TypedStorage<4, 8, ::bgfx::FatalError>                          m_fatalError;
    ::ll::TypedStorage<2, 2, ushort>                                      m_numWindows;
    ::ll::TypedStorage<2, 256, ::bgfx::FrameBufferHandle[128]>            m_windows;
    ::ll::TypedStorage<8, 8, ::ID3D11Device*>                             m_device;
    ::ll::TypedStorage<8, 8, ::ID3D11DeviceContext*>                      m_deviceCtx;
    ::ll::TypedStorage<8, 8, ::ID3DUserDefinedAnnotation*>                m_annotation;
    ::ll::TypedStorage<8, 8, ::ID3D11InfoQueue*>                          m_infoQueue;
    ::ll::TypedStorage<8, 49200, ::bgfx::d3d11::TimerQueryD3D11>          m_gpuTimer;
    ::ll::TypedStorage<8, 4112, ::bgfx::d3d11::OcclusionQueryD3D11>       m_occlusionQuery;
    ::ll::TypedStorage<4, 4, uint>                                        m_deviceInterfaceVersion;
    ::ll::TypedStorage<8, 8, ::ID3D11RenderTargetView*>                   m_backBufferColor;
    ::ll::TypedStorage<8, 8, ::ID3D11DepthStencilView*>                   m_backBufferDepthStencil;
    ::ll::TypedStorage<8, 8, ::ID3D11RenderTargetView*>                   m_currentColor;
    ::ll::TypedStorage<8, 8, ::ID3D11DepthStencilView*>                   m_currentDepthStencil;
    ::ll::TypedStorage<8, 8, ::ID3D11Texture2D*>                          m_captureTexture;
    ::ll::TypedStorage<8, 8, ::ID3D11Texture2D*>                          m_captureResolve;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution>                         m_resolution;
    ::ll::TypedStorage<8, 72, ::bgfx::SwapChainDesc>                      m_scd;
    ::ll::TypedStorage<4, 4, ::DXGI_SWAP_EFFECT>                          m_swapEffect;
    ::ll::TypedStorage<4, 4, uint>                                        m_swapBufferCount;
    ::ll::TypedStorage<4, 4, uint>                                        m_maxAnisotropy;
    ::ll::TypedStorage<1, 1, bool>                                        m_depthClamp;
    ::ll::TypedStorage<1, 1, bool>                                        m_wireframe;
    ::ll::TypedStorage<8, 131072, ::bgfx::d3d11::BufferD3D11[4096]>       m_indexBuffers;
    ::ll::TypedStorage<8, 163840, ::bgfx::d3d11::VertexBufferD3D11[4096]> m_vertexBuffers;
    ::ll::TypedStorage<8, 131072, ::bgfx::d3d11::BufferD3D11[4096]>       m_shaderBuffers;
    ::ll::TypedStorage<8, 786432, ::bgfx::d3d11::ShaderD3D11[4096]>       m_shaders;
    ::ll::TypedStorage<8, 507904, ::bgfx::d3d11::ProgramD3D11[2048]>      m_program;
    ::ll::TypedStorage<8, 294944, ::bgfx::GuardedPagedHeapBackedArray<::bgfx::d3d11::TextureD3D11, 4096>> m_textures;
    ::ll::TypedStorage<4, 5376, ::bgfx::VertexDecl[64]>                                                   m_vertexDecls;
    ::ll::TypedStorage<8, 24576, ::bgfx::d3d11::FrameBufferD3D11[128]>        m_frameBuffers;
    ::ll::TypedStorage<8, 4096, void* [512]>                                  m_uniforms;
    ::ll::TypedStorage<4, 7176, ::bgfx::UniformRegistry>                      m_uniformReg;
    ::ll::TypedStorage<8, 32, ::bgfx::StateCacheT<::ID3D11BlendState>>        m_blendStateCache;
    ::ll::TypedStorage<8, 32, ::bgfx::StateCacheT<::ID3D11DepthStencilState>> m_depthStencilStateCache;
    ::ll::TypedStorage<8, 32, ::bgfx::StateCacheT<::ID3D11InputLayout>>       m_inputLayoutCache;
    ::ll::TypedStorage<8, 32, ::bgfx::StateCacheT<::ID3D11RasterizerState>>   m_rasterizerStateCache;
    ::ll::TypedStorage<8, 32, ::bgfx::StateCacheT<::ID3D11SamplerState>>      m_samplerStateCache;
    ::ll::TypedStorage<8, 32808, ::bgfx::StateCacheLru<::IUnknown*, 1024>>    m_srvUavLru;
    ::ll::TypedStorage<8, 24, ::bgfx::TextVideoMem>                           m_textVideoMem;
    ::ll::TypedStorage<8, 1040, ::bgfx::d3d11::TextureStage>                  m_textureStage;
    ::ll::TypedStorage<8, 8, ::bgfx::d3d11::ProgramD3D11*>                    m_currentProgram;
    ::ll::TypedStorage<1, 65536, uchar[65536]>                                m_vsScratch;
    ::ll::TypedStorage<1, 65536, uchar[65536]>                                m_fsScratch;
    ::ll::TypedStorage<4, 4, uint>                                            m_vsChanges;
    ::ll::TypedStorage<4, 4, uint>                                            m_fsChanges;
    ::ll::TypedStorage<2, 2, ::bgfx::FrameBufferHandle>                       m_fbh;
    ::ll::TypedStorage<1, 1, bool>                                            m_rtMsaa;
    ::ll::TypedStorage<1, 1, bool>                                            m_directAccessSupport;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererContextD3D11() /*override*/ = default;

    virtual ::bgfx::RendererType::Enum getRendererType() const /*override*/;

    virtual uint64 getRendererVersion() const /*override*/;

    virtual uint64 getShaderVersion() const /*override*/;

    virtual char const* getRendererName() const /*override*/;

    virtual void createIndexBuffer(::bgfx::IndexBufferHandle, ::bgfx::Memory const*, ushort) /*override*/;

    virtual void destroyIndexBuffer(::bgfx::IndexBufferHandle) /*override*/;

    virtual void createVertexDecl(::bgfx::VertexDeclHandle, ::bgfx::VertexDecl const&) /*override*/;

    virtual void destroyVertexDecl(::bgfx::VertexDeclHandle) /*override*/;

    virtual void createVertexBuffer(
        ::bgfx::VertexBufferHandle,
        ::bgfx::Memory const*,
        ::bgfx::VertexDeclHandle,
        ushort
    ) /*override*/;

    virtual void destroyVertexBuffer(::bgfx::VertexBufferHandle) /*override*/;

    virtual void createDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, ushort) /*override*/;

    virtual void updateDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, uint, ::bgfx::Memory const*) /*override*/;

    virtual void destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle) /*override*/;

    virtual void createDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, ushort) /*override*/;

    virtual void updateDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, uint, ::bgfx::Memory const*) /*override*/;

    virtual void destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle) /*override*/;

    virtual void createShader(::bgfx::ShaderHandle, ::bgfx::Memory const*) /*override*/;

    virtual void destroyShader(::bgfx::ShaderHandle) /*override*/;

    virtual void createProgram(::bgfx::ProgramHandle, ::bgfx::ShaderHandle, ::bgfx::ShaderHandle) /*override*/;

    virtual void destroyProgram(::bgfx::ProgramHandle) /*override*/;

    virtual void*
    createTexture(::bgfx::TextureHandle, ::bgfx::Memory const*, uint, uchar, ::bgfx::Memory const**) /*override*/;

    virtual void wrapExternalTexture(
        ::bgfx::TextureHandle      _handle,
        ::bgfx::RendererType::Enum _type,
        void*                      _texturePtr,
        void*                      ref
    ) /*override*/;

    virtual void updateTextureBegin(::bgfx::TextureHandle, uchar, uchar) /*override*/;

    virtual void updateTexture(
        ::bgfx::TextureHandle,
        uchar,
        uchar,
        ::bgfx::Rect const&,
        ushort,
        ushort,
        ushort,
        ::bgfx::Memory const*
    ) /*override*/;

    virtual void updateTextureEnd() /*override*/;

    virtual void readTexture(::bgfx::TextureHandle, void*, uchar) /*override*/;

    virtual void resizeTexture(::bgfx::TextureHandle, ushort, ushort, uchar, ushort) /*override*/;

    virtual void overrideInternal(::bgfx::TextureHandle, uint64, uint) /*override*/;

    virtual uint64 getInternal(::bgfx::TextureHandle) /*override*/;

    virtual void destroyTexture(::bgfx::TextureHandle) /*override*/;

    virtual void createShaderBuffer(::bgfx::ShaderBufferHandle, uint, uint, ushort) /*override*/;

    virtual void updateShaderBuffer(::bgfx::ShaderBufferHandle, uint, ::bgfx::Memory const*) /*override*/;

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle) /*override*/;

    virtual void createFrameBuffer(::bgfx::FrameBufferHandle, uchar, ::bgfx::Attachment const*) /*override*/;

    virtual void
    createFrameBuffer(::bgfx::FrameBufferHandle, void*, uint, uint, ::bgfx::TextureFormat::Enum) /*override*/;

    virtual void destroyFrameBuffer(::bgfx::FrameBufferHandle) /*override*/;

    virtual void createUniform(::bgfx::UniformHandle, ::bgfx::UniformType::Enum, ushort, char const*) /*override*/;

    virtual void destroyUniform(::bgfx::UniformHandle) /*override*/;

    virtual void requestScreenShot(::bgfx::FrameBufferHandle, char const*) /*override*/;

    virtual void updateViewName(ushort, char const*) /*override*/;

    virtual void updateUniform(void*, ushort, void const*, uint) /*override*/;

    virtual void setMarker(void*, char const*, uint) /*override*/;

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle) /*override*/;

    virtual void setName(::bgfx::Handle, char const*) /*override*/;

    virtual void submit(::bgfx::Frame*, ::bgfx::ClearQuad&, ::bgfx::TextVideoMemBlitter&) /*override*/;

    virtual void blitSetup(::bgfx::TextVideoMemBlitter&) /*override*/;

    virtual void blitRender(::bgfx::TextVideoMemBlitter&, uint) /*override*/;

    virtual bool isDeviceRemoved() /*override*/;

    virtual void suspend() /*override*/;

    virtual void resume() /*override*/;

    virtual void advanceToNextFrame() /*override*/;

    virtual void flip() /*override*/;

    virtual void waitForFlipQueue() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bgfx::d3d11
