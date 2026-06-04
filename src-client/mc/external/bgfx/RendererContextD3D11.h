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
namespace bgfx { class UniformBuffer; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct BlitState; }
namespace bgfx { struct Clear; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct Init; }
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

    virtual void
    createIndexBuffer(::bgfx::IndexBufferHandle _handle, ::bgfx::Memory const* _mem, ushort _flags) /*override*/;

    virtual void destroyIndexBuffer(::bgfx::IndexBufferHandle _handle) /*override*/;

    virtual void createVertexDecl(::bgfx::VertexDeclHandle _handle, ::bgfx::VertexDecl const& _decl) /*override*/;

    virtual void destroyVertexDecl(::bgfx::VertexDeclHandle) /*override*/;

    virtual void createVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        ::bgfx::Memory const*      _mem,
        ::bgfx::VertexDeclHandle   _declHandle,
        ushort                     _flags
    ) /*override*/;

    virtual void destroyVertexBuffer(::bgfx::VertexBufferHandle _handle) /*override*/;

    virtual void createDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle, uint _size, ushort _flags) /*override*/;

    virtual void updateDynamicIndexBuffer(
        ::bgfx::IndexBufferHandle _handle,
        uint                      _offset,
        uint                      _size,
        ::bgfx::Memory const*     _mem
    ) /*override*/;

    virtual void destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle) /*override*/;

    virtual void createDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle, uint _size, ushort _flags) /*override*/;

    virtual void updateDynamicVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        uint                       _offset,
        uint                       _size,
        ::bgfx::Memory const*      _mem
    ) /*override*/;

    virtual void destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle) /*override*/;

    virtual void createShader(::bgfx::ShaderHandle _handle, ::bgfx::Memory const* _mem) /*override*/;

    virtual void destroyShader(::bgfx::ShaderHandle _handle) /*override*/;

    virtual void
    createProgram(::bgfx::ProgramHandle _handle, ::bgfx::ShaderHandle _vsh, ::bgfx::ShaderHandle _fsh) /*override*/;

    virtual void destroyProgram(::bgfx::ProgramHandle _handle) /*override*/;

    virtual void* createTexture(
        ::bgfx::TextureHandle _handle,
        ::bgfx::Memory const* _mem,
        uint                  _flags,
        uchar                 _skip,
        ::bgfx::Memory const**
    ) /*override*/;

    virtual void wrapExternalTexture(
        ::bgfx::TextureHandle      _handle,
        ::bgfx::RendererType::Enum _type,
        void*                      _texturePtr,
        void*                      _deferredRef
    ) /*override*/;

    virtual void updateTextureBegin(::bgfx::TextureHandle, uchar, uchar) /*override*/;

    virtual void updateTexture(
        ::bgfx::TextureHandle _handle,
        uchar                 _side,
        uchar                 _mip,
        ::bgfx::Rect const&   _rect,
        ushort                _z,
        ushort                _depth,
        ushort                _pitch,
        ::bgfx::Memory const* _mem
    ) /*override*/;

    virtual void updateTextureEnd() /*override*/;

    virtual void readTexture(::bgfx::TextureHandle _handle, void* _data, uchar _mip) /*override*/;

    virtual void resizeTexture(
        ::bgfx::TextureHandle _handle,
        ushort                _width,
        ushort                _height,
        uchar                 _numMips,
        ushort                _numLayers
    ) /*override*/;

    virtual void overrideInternal(::bgfx::TextureHandle _handle, uint64 _ptr, uint _flags) /*override*/;

    virtual uint64 getInternal(::bgfx::TextureHandle _handle) /*override*/;

    virtual void destroyTexture(::bgfx::TextureHandle _handle) /*override*/;

    virtual void
    createShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _size, uint _stride, ushort _flags) /*override*/;

    virtual void
    updateShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem) /*override*/;

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle _handle) /*override*/;

    virtual void createFrameBuffer(
        ::bgfx::FrameBufferHandle _handle,
        uchar                     _num,
        ::bgfx::Attachment const* _attachment
    ) /*override*/;

    virtual void createFrameBuffer(
        ::bgfx::FrameBufferHandle   _handle,
        void*                       _nwh,
        uint                        _width,
        uint                        _height,
        ::bgfx::TextureFormat::Enum _depthFormat
    ) /*override*/;

    virtual void destroyFrameBuffer(::bgfx::FrameBufferHandle _handle) /*override*/;

    virtual void createUniform(
        ::bgfx::UniformHandle     _handle,
        ::bgfx::UniformType::Enum _type,
        ushort                    _num,
        char const*               _name
    ) /*override*/;

    virtual void destroyUniform(::bgfx::UniformHandle _handle) /*override*/;

    virtual void requestScreenShot(::bgfx::FrameBufferHandle _handle, char const* _filePath) /*override*/;

    virtual void updateViewName(ushort _id, char const* _name) /*override*/;

    virtual void updateUniform(void*, ushort _loc, void const* _data, uint _size) /*override*/;

    virtual void setMarker(void*, char const* _marker, uint _size) /*override*/;

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle _handle) /*override*/;

    virtual void setName(::bgfx::Handle _handle, char const* _name) /*override*/;

    virtual void submit(
        ::bgfx::Frame*               _render,
        ::bgfx::ClearQuad&           _clearQuad,
        ::bgfx::TextVideoMemBlitter& _textVideoMemBlitter
    ) /*override*/;

    virtual void blitSetup(::bgfx::TextVideoMemBlitter& _blitter) /*override*/;

    virtual void blitRender(::bgfx::TextVideoMemBlitter& _blitter, uint _numIndices) /*override*/;

    virtual bool isDeviceRemoved() /*override*/;

    virtual void suspend() /*override*/;

    virtual void resume() /*override*/;

    virtual void advanceToNextFrame() /*override*/;

    virtual void flip() /*override*/;

    virtual void waitForFlipQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RendererContextD3D11();

    MCAPI void capture();

    MCAPI void capturePostReset();

    MCAPI void capturePreReset();

    MCAPI void clear(::bgfx::Clear const& _clear, float (*const _palette)[4]);

    MCAPI void clearQuad(
        ::bgfx::ClearQuad&   _clearQuad,
        ::bgfx::Rect const&  _rect,
        ::bgfx::Clear const& _clear,
        float (*const _palette)[4]
    );

    MCAPI void commit(::bgfx::UniformBuffer& _uniformBuffer);

    MCAPI void commitShaderConstants();

    MCAPI void commitTextureStage();

    MCAPI ::ID3D11ShaderResourceView* getCachedSrv(::bgfx::TextureHandle _handle, uchar _mip, bool _compute);

    MCAPI ::ID3D11UnorderedAccessView* getCachedUav(::bgfx::TextureHandle _handle, uchar _mip);

    MCAPI ::ID3D11SamplerState* getSamplerState(uint _flags, float const* const _rgba);

    MCAPI bool init(::bgfx::Init const& _init);

    MCAPI void invalidateCache();

    MCAPI void invalidateCompute();

    MCAPI void postReset();

    MCAPI void preReset();

    MCAPI void setBlendState(uint64 _state, uint _rgba);

    MCAPI void setDepthStencilState(uint64 _state, uint64 _stencil);

    MCAPI void setFrameBuffer(::bgfx::FrameBufferHandle _fbh, bool _msaa, bool _needPresent);

    MCAPI void setInputLayout(
        uchar                              _numStreams,
        ::bgfx::VertexDecl const**         _vertexDecls,
        ::bgfx::d3d11::ProgramD3D11 const& _program,
        ushort                             _numInstanceData
    );

    MCAPI void setRasterizerState(
        uint64 _state,
        int    _biasConst,
        float  _biasSlope,
        float  _biasClamp,
        bool   _wireframe,
        bool   _scissor
    );

    MCAPI void shutdown();

    MCAPI void submitBlit(::bgfx::BlitState& _bs, ushort _view);

    MCAPI void updateMsaa(::DXGI_FORMAT _format) const;

    MCAPI bool updateResolution(::bgfx::Resolution const& _resolution);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::bgfx::RendererType::Enum $getRendererType() const;

    MCAPI uint64 $getRendererVersion() const;

    MCFOLD uint64 $getShaderVersion() const;

    MCAPI char const* $getRendererName() const;

    MCAPI void $createIndexBuffer(::bgfx::IndexBufferHandle _handle, ::bgfx::Memory const* _mem, ushort _flags);

    MCFOLD void $destroyIndexBuffer(::bgfx::IndexBufferHandle _handle);

    MCAPI void $createVertexDecl(::bgfx::VertexDeclHandle _handle, ::bgfx::VertexDecl const& _decl);

    MCFOLD void $destroyVertexDecl(::bgfx::VertexDeclHandle);

    MCAPI void $createVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        ::bgfx::Memory const*      _mem,
        ::bgfx::VertexDeclHandle   _declHandle,
        ushort                     _flags
    );

    MCFOLD void $destroyVertexBuffer(::bgfx::VertexBufferHandle _handle);

    MCAPI void $createDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle, uint _size, ushort _flags);

    MCAPI void
    $updateDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle, uint _offset, uint _size, ::bgfx::Memory const* _mem);

    MCFOLD void $destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle);

    MCAPI void $createDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle, uint _size, ushort _flags);

    MCAPI void $updateDynamicVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        uint                       _offset,
        uint                       _size,
        ::bgfx::Memory const*      _mem
    );

    MCFOLD void $destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle);

    MCAPI void $createShader(::bgfx::ShaderHandle _handle, ::bgfx::Memory const* _mem);

    MCAPI void $destroyShader(::bgfx::ShaderHandle _handle);

    MCAPI void $createProgram(::bgfx::ProgramHandle _handle, ::bgfx::ShaderHandle _vsh, ::bgfx::ShaderHandle _fsh);

    MCAPI void $destroyProgram(::bgfx::ProgramHandle _handle);

    MCAPI void* $createTexture(
        ::bgfx::TextureHandle _handle,
        ::bgfx::Memory const* _mem,
        uint                  _flags,
        uchar                 _skip,
        ::bgfx::Memory const**
    );

    MCAPI void $wrapExternalTexture(
        ::bgfx::TextureHandle      _handle,
        ::bgfx::RendererType::Enum _type,
        void*                      _texturePtr,
        void*                      _deferredRef
    );

    MCFOLD void $updateTextureBegin(::bgfx::TextureHandle, uchar, uchar);

    MCAPI void $updateTexture(
        ::bgfx::TextureHandle _handle,
        uchar                 _side,
        uchar                 _mip,
        ::bgfx::Rect const&   _rect,
        ushort                _z,
        ushort                _depth,
        ushort                _pitch,
        ::bgfx::Memory const* _mem
    );

    MCFOLD void $updateTextureEnd();

    MCAPI void $readTexture(::bgfx::TextureHandle _handle, void* _data, uchar _mip);

    MCAPI void
    $resizeTexture(::bgfx::TextureHandle _handle, ushort _width, ushort _height, uchar _numMips, ushort _numLayers);

    MCAPI void $overrideInternal(::bgfx::TextureHandle _handle, uint64 _ptr, uint _flags);

    MCAPI uint64 $getInternal(::bgfx::TextureHandle _handle);

    MCAPI void $destroyTexture(::bgfx::TextureHandle _handle);

    MCAPI void $createShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _size, uint _stride, ushort _flags);

    MCAPI void $updateShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem);

    MCAPI void $destroyShaderBuffer(::bgfx::ShaderBufferHandle _handle);

    MCAPI void $createFrameBuffer(::bgfx::FrameBufferHandle _handle, uchar _num, ::bgfx::Attachment const* _attachment);

    MCAPI void $createFrameBuffer(
        ::bgfx::FrameBufferHandle   _handle,
        void*                       _nwh,
        uint                        _width,
        uint                        _height,
        ::bgfx::TextureFormat::Enum _depthFormat
    );

    MCAPI void $destroyFrameBuffer(::bgfx::FrameBufferHandle _handle);

    MCAPI void
    $createUniform(::bgfx::UniformHandle _handle, ::bgfx::UniformType::Enum _type, ushort _num, char const* _name);

    MCAPI void $destroyUniform(::bgfx::UniformHandle _handle);

    MCAPI void $requestScreenShot(::bgfx::FrameBufferHandle _handle, char const* _filePath);

    MCAPI void $updateViewName(ushort _id, char const* _name);

    MCAPI void $updateUniform(void*, ushort _loc, void const* _data, uint _size);

    MCFOLD void $setMarker(void*, char const* _marker, uint _size);

    MCAPI void $invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle _handle);

    MCAPI void $setName(::bgfx::Handle _handle, char const* _name);

    MCAPI void
    $submit(::bgfx::Frame* _render, ::bgfx::ClearQuad& _clearQuad, ::bgfx::TextVideoMemBlitter& _textVideoMemBlitter);

    MCAPI void $blitSetup(::bgfx::TextVideoMemBlitter& _blitter);

    MCAPI void $blitRender(::bgfx::TextVideoMemBlitter& _blitter, uint _numIndices);

    MCAPI bool $isDeviceRemoved();

    MCAPI void $suspend();

    MCFOLD void $resume();

    MCAPI void $advanceToNextFrame();

    MCAPI void $flip();

    MCFOLD void $waitForFlipQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bgfx::d3d11
