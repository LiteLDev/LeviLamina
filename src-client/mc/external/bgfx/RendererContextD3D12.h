#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/BlasCompactionState.h"
#include "mc/external/bgfx/BufferD3D12.h"
#include "mc/external/bgfx/CommandQueueD3D12.h"
#include "mc/external/bgfx/Dxgi.h"
#include "mc/external/bgfx/Enum.h"
#include "mc/external/bgfx/FatalError.h"
#include "mc/external/bgfx/FenceSyncContext.h"
#include "mc/external/bgfx/FrameBufferD3D12.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/bgfx/NvApi.h"
#include "mc/external/bgfx/OcclusionQueryD3D12.h"
#include "mc/external/bgfx/ProfilerEvents.h"
#include "mc/external/bgfx/ProgramD3D12.h"
#include "mc/external/bgfx/RendererContextI.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/bgfx/ResourceStatesMananger.h"
#include "mc/external/bgfx/RingBuffer.h"
#include "mc/external/bgfx/RingBufferAllocator.h"
#include "mc/external/bgfx/ShaderD3D12.h"
#include "mc/external/bgfx/SwapChainDesc.h"
#include "mc/external/bgfx/TextVideoMem.h"
#include "mc/external/bgfx/TimerQueryD3D12.h"
#include "mc/external/bgfx/UniformRegistry.h"
#include "mc/external/bgfx/VertexBufferD3D12.h"
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDecl.h"
#include "mc/external/bgfx/VertexDeclHandle.h"
#include "mc/external/bgfx/ViewProfilerD3D12.h"
#include "mc/external/bgfx/acceleration_structure_build_flags/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/uniform_type/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Attachment; }
namespace bgfx { struct BlitState; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct Handle; }
namespace bgfx { struct Init; }
namespace bgfx { struct Matrix4; }
namespace bgfx { struct Memory; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RayTracingConfiguration; }
namespace bgfx { struct RayTracingResources; }
namespace bgfx { struct Rect; }
namespace bgfx { struct RenderBind; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct ShaderHandle; }
namespace bgfx { struct TextVideoMemBlitter; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct UniformHandle; }
namespace bgfx::d3d12 { class BufferHeap; }
namespace bgfx::d3d12 { class StagingBufferD3D12; }
namespace bgfx::d3d12 { struct CommandContextD3D12; }
namespace bgfx::d3d12 { struct CommandList; }
namespace bgfx::d3d12 { struct CommandListD3D12; }
namespace bgfx::d3d12 { struct ConstantBufferDataContainer; }
namespace bgfx::d3d12 { struct ResourceCreate; }
namespace bgfx::d3d12 { struct TextureD3D12; }
// clang-format on

namespace bgfx::d3d12 {

struct RendererContextD3D12 : public ::bgfx::RendererContextI {
public:
    // RendererContextD3D12 inner types declare
    // clang-format off
    struct TlasBuildRequest;
    struct BlasBuildRequest;
    struct BlasCompactionRequest;
    struct BLASGeometryInfo;
    // clang-format on

    // RendererContextD3D12 inner types define
    enum class BufferHeapUpdateMode : int {
        Flip            = 0,
        AfterWaitForGPU = 1,
    };

    struct TlasBuildRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle>          m_asHandle;
        ::ll::TypedStorage<8, 24, ::std::vector<::bgfx::TopLevelInstanceDesc>> m_tlasInstanceDescs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TlasBuildRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct BlasBuildRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::D3D12_RAYTRACING_GEOMETRY_DESC>                     m_desc;
        ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle>                   m_asHandle;
        ::ll::TypedStorage<4, 4, ::D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS> m_flags;
        ::ll::TypedStorage<4, 4, uint>                                                  m_scratchSize;
        // NOLINTEND
    };

    struct BlasCompactionRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::bgfx::d3d12::BlasCompactionState>  m_state;
        ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle> m_asHandle;
        ::ll::TypedStorage<4, 4, uint>                                m_beforeSize;
        ::ll::TypedStorage<4, 4, uint>                                m_afterSize;
        ::ll::TypedStorage<4, 4, uint>                                m_frameCountOfLastUpdate;
        ::ll::TypedStorage<4, 4, int>                                 m_sizeRequestIndex;
        // NOLINTEND
    };

    struct BLASGeometryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> m_vb;
        ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   m_vbDecl;
        ::ll::TypedStorage<2, 2, ushort>                     m_vertexStrideBytes;
        ::ll::TypedStorage<2, 2, ::bgfx::IndexBufferHandle>  m_ib;
        ::ll::TypedStorage<4, 4, uint>                       m_verticesCount;
        ::ll::TypedStorage<4, 4, uint>                       m_vertexOffsetInBaseVertices;
        ::ll::TypedStorage<4, 4, uint>                       m_vertexOffsetInParallelVertices;
        ::ll::TypedStorage<4, 4, uint>                       m_indicesCount;
        ::ll::TypedStorage<4, 4, uint>                       m_indexOffsetInIndices;
        ::ll::TypedStorage<2, 2, ushort>                     m_indexSize;
        ::ll::TypedStorage<4, 4, uint>                       m_frameCountOfCreation;
        ::ll::TypedStorage<4, 4, uint>                       m_frameCountOfUpdate;
        ::ll::TypedStorage<4, 4, uint>                       m_mostRecentFrameInTLAS;
        ::ll::TypedStorage<2, 2, ushort>                     m_flags;
        ::ll::TypedStorage<2, 2, ushort>                     m_objectInstanceIdx;
        ::ll::TypedStorage<2, 2, ushort>                     m_previousObjectInstanceIdx;
        bool                                                 m_needFaceDataUpdate : 1;
        // NOLINTEND
    };

    using ASScratchBuffer =
        ::bgfx::RingBuffer<::bgfx::d3d12::StagingBufferD3D12, uint64, void*, ::bgfx::d3d12::RingBufferAllocator<0>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ID3D12DescriptorHeap*> m_rtvDescriptorHeap;
    ::ll::TypedStorage<8, 8, ::ID3D12DescriptorHeap*> m_dsvDescriptorHeap;
    ::ll::TypedStorage<8, 24, ::ID3D12Resource* [3]>  m_backBufferColor;
    ::ll::TypedStorage<8, 24, uint64[3]>              m_backBufferColorFence;
    ::ll::TypedStorage<8, 8, ::ID3D12Resource*>       m_backBufferDepthStencil;
    ::ll::TypedStorage<4, 4, uint>                    m_frameCount;
    ::ll::TypedStorage<1, 1, bool>                    m_rldoEnabled;
    ::ll::TypedStorage<1, 1, bool>                    m_useBufferHeaps;
    ::ll::TypedStorage<8, 448, ::bgfx::Dxgi>          m_dxgi;
    ::ll::TypedStorage<8, 48, ::bgfx::NvApi>          m_nvapi;
    ::ll::TypedStorage<8, 8, void*>                   m_kernel32dll;
    ::ll::TypedStorage<8, 8, void*>                   m_d3d12dll;
    ::ll::TypedStorage<8, 8, void*>                   m_renderdocdll;
    ::ll::TypedStorage<8, 8, void*>                   m_winPixEvent;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::bgfx::
                RingBuffer<::bgfx::d3d12::StagingBufferD3D12, uint64, void*, ::bgfx::d3d12::RingBufferAllocator<2>>>>
                                                                   m_uploadBuffer;
    ::ll::TypedStorage<8, 56, ::bgfx::d3d12::FenceSyncContext>     m_sync;
    ::ll::TypedStorage<4, 4, ::D3D_FEATURE_LEVEL>                  m_featureLevel;
    ::ll::TypedStorage<4, 4, ::D3D_SHADER_MODEL>                   m_shaderModel;
    ::ll::TypedStorage<4, 4, ::D3D_DRIVER_TYPE>                    m_driverType;
    ::ll::TypedStorage<4, 16, ::D3D12_FEATURE_DATA_ARCHITECTURE>   m_architecture;
    ::ll::TypedStorage<4, 60, ::D3D12_FEATURE_DATA_D3D12_OPTIONS>  m_options;
    ::ll::TypedStorage<8, 8, void*>                                m_swapchainWaitableObject;
    ::ll::TypedStorage<8, 8, ::IDXGISwapChain3*>                   m_swapChain;
    ::ll::TypedStorage<8, 8, ::ID3D12Resource*>                    m_msaaRenderTarget;
    ::ll::TypedStorage<8, 8, int64>                                m_presentElapsed;
    ::ll::TypedStorage<2, 2, ushort>                               m_numWindows;
    ::ll::TypedStorage<2, 256, ::bgfx::FrameBufferHandle[128]>     m_windows;
    ::ll::TypedStorage<8, 8, ::ID3D12Device*>                      m_device;
    ::ll::TypedStorage<8, 8, ::ID3D12Device5*>                     m_device5;
    ::ll::TypedStorage<8, 30880, ::bgfx::d3d12::TimerQueryD3D12>   m_gpuTimer;
    ::ll::TypedStorage<8, 552, ::bgfx::d3d12::OcclusionQueryD3D12> m_occlusionQuery;
    ::ll::TypedStorage<8, 73768, ::bgfx::d3d12::ViewProfilerD3D12> m_profiler;
    ::ll::TypedStorage<1, 1, ::bgfx::ProfilerEvents>               m_profilerEvents;
    ::ll::TypedStorage<8, 56, ::bgfx::d3d12::BufferHeap* [7]>      m_bufferHeaps;
    ::ll::TypedStorage<8, 24, ::ID3D12CommandSignature* [3]>       m_commandSignature;
    ::ll::TypedStorage<8, 8, ::bgfx::d3d12::CommandList*>          m_globalCommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::bgfx::d3d12::CommandContextD3D12>>> m_commandContext;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution>                                                   m_resolution;
    ::ll::TypedStorage<1, 1, bool>                                                                  m_wireframe;
    ::ll::TypedStorage<1, 1, bool>                                                                  m_fatal;
    ::ll::TypedStorage<4, 8, ::bgfx::FatalError>                                                    m_fatalError;
    ::ll::TypedStorage<8, 72, ::bgfx::SwapChainDesc>                                                m_scd;
    ::ll::TypedStorage<4, 4, uint>                                                                  m_maxAnisotropy;
    ::ll::TypedStorage<1, 1, bool>                                                                  m_depthClamp;
    ::ll::TypedStorage<1, 1, bool>                                                                  m_flipped;
    ::ll::TypedStorage<8, 24, ::std::vector<::bgfx::d3d12::RendererContextD3D12::TlasBuildRequest>> m_tlasBuildRequests;
    ::ll::TypedStorage<1, 1, bool>                                                                  m_tlasValid;
    ::ll::TypedStorage<8, 24, ::std::vector<::bgfx::d3d12::RendererContextD3D12::BlasBuildRequest>> m_blasBuildRequests;
    ::ll::TypedStorage<8, 24, ::std::vector<::bgfx::d3d12::RendererContextD3D12::BlasCompactionRequest>>
                                                                         m_blasCompactionRequests;
    ::ll::TypedStorage<8, 3932160, ::bgfx::d3d12::BufferD3D12[32768]>    m_compactedAsBuffers;
    ::ll::TypedStorage<8, 120, ::bgfx::d3d12::BufferD3D12>               m_asBuffersCompactionSizes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ID3D12Resource*>>          m_asBuffersCompactionSizesReadback;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                       m_asCompactionCountList;
    ::ll::TypedStorage<1, 1, bool>                                       m_asCompactionCountListAvailable;
    ::ll::TypedStorage<8, 24, ::std::vector<::bgfx::d3d12::BufferD3D12>> m_freeASBuffers;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::bgfx::
                RingBuffer<::bgfx::d3d12::StagingBufferD3D12, uint64, void*, ::bgfx::d3d12::RingBufferAllocator<0>>>>
                                                                                                 m_asScratchBuffer;
    ::ll::TypedStorage<4, 1703936, ::bgfx::d3d12::RendererContextD3D12::BLASGeometryInfo[32768]> m_blasGeometryInfo;
    ::ll::TypedStorage<8, 120, ::bgfx::d3d12::BufferD3D12>                                       m_blasQuadIndexBuffer;
    ::ll::TypedStorage<8, 3932160, ::bgfx::d3d12::BufferD3D12[32768]>                            m_asBuffers;
    ::ll::TypedStorage<8, 491520, ::bgfx::d3d12::BufferD3D12[4096]>                              m_indexBuffers;
    ::ll::TypedStorage<8, 524288, ::bgfx::d3d12::VertexBufferD3D12[4096]>                        m_vertexBuffers;
    ::ll::TypedStorage<8, 491520, ::bgfx::d3d12::BufferD3D12[4096]>                              m_shaderBuffers;
    ::ll::TypedStorage<8, 753664, ::bgfx::d3d12::ShaderD3D12[4096]>                              m_shaders;
    ::ll::TypedStorage<8, 507904, ::bgfx::d3d12::ProgramD3D12[2048]>                             m_program;
    ::ll::TypedStorage<8, 753696, ::bgfx::GuardedPagedHeapBackedArray<::bgfx::d3d12::TextureD3D12, 4096>> m_textures;
    ::ll::TypedStorage<4, 5376, ::bgfx::VertexDecl[64]>                                                   m_vertexDecls;
    ::ll::TypedStorage<8, 13312, ::bgfx::d3d12::FrameBufferD3D12[128]>   m_frameBuffers;
    ::ll::TypedStorage<4, 7176, ::bgfx::UniformRegistry>                 m_uniformReg;
    ::ll::TypedStorage<8, 8, int64>                                      m_flipCompletionTime;
    ::ll::TypedStorage<8, 8, int64>                                      m_gpuFlipRequestTime;
    ::ll::TypedStorage<8, 8, int64>                                      m_cpuFlipRequestTime;
    ::ll::TypedStorage<8, 24, ::bgfx::TextVideoMem>                      m_textVideoMem;
    ::ll::TypedStorage<4, 4, uint>                                       m_backBufferColorIdx;
    ::ll::TypedStorage<1, 1, bool>                                       m_directAccessSupport;
    ::ll::TypedStorage<8, 183184, ::bgfx::d3d12::ResourceStatesMananger> m_states;
    ::ll::TypedStorage<8, 49860952, ::bgfx::d3d12::CommandQueueD3D12>    m_cmd;
    ::ll::TypedStorage<8, 80, ::std::mutex>                              m_cmdCreateMtx;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererContextD3D12() /*override*/;

    virtual bool init(::bgfx::Init const& _init);

    virtual void shutdown();

    virtual ::bgfx::RendererType::Enum getRendererType() const /*override*/;

    virtual uint64 getRendererVersion() const /*override*/;

    virtual uint64 getShaderVersion() const /*override*/;

    virtual char const* getRendererName() const /*override*/;

    virtual bool isDeviceRemoved() /*override*/;

    virtual void suspend() /*override*/;

    virtual void resume() /*override*/;

    virtual void advanceToNextFrame() /*override*/;

    virtual void flip() /*override*/;

    virtual void waitForFlipQueue() /*override*/;

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
        ::bgfx::TextureHandle  _handle,
        ::bgfx::Memory const*  _mem,
        uint                   _flags,
        uchar                  _skip,
        ::bgfx::Memory const** _imageContainerData
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

    virtual void wrapExternalTexture(
        ::bgfx::TextureHandle      _handle,
        ::bgfx::RendererType::Enum _type,
        void*                      _texturePtr,
        void*                      _deferredRef
    ) /*override*/;

    virtual void overrideInternal(::bgfx::TextureHandle _handle, uint64 _ptr, uint _flags) /*override*/;

    virtual uint64 getInternal(::bgfx::TextureHandle _handle) /*override*/;

    virtual void destroyTexture(::bgfx::TextureHandle _handle) /*override*/;

    virtual void
    createShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _size, uint _stride, ushort _flags) /*override*/;

    virtual void
    updateShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem) /*override*/;

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle _handle) /*override*/;

    virtual void createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffsetBytes,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffsetBytes,
        ushort                                        _indexSize,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    ) /*override*/;

    virtual void destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle _handle) /*override*/;

    virtual void createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                _numInstances,
        ::bgfx::TopLevelInstanceDesc*       _instanceDescs
    ) /*override*/;

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

    virtual void updateUniform(void* _uniformsTarget, ushort _loc, void const* _data, uint _size) /*override*/;

    virtual void setMarker(void*, char const* _marker, uint) /*override*/;

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle _handle) /*override*/;

    virtual void setName(::bgfx::Handle _handle, char const* _name) /*override*/;

    virtual void submit(
        ::bgfx::Frame*               _render,
        ::bgfx::ClearQuad&           _clearQuad,
        ::bgfx::TextVideoMemBlitter& _textVideoMemBlitter
    ) /*override*/;

    virtual void blitSetup(::bgfx::TextVideoMemBlitter& _blitter) /*override*/;

    virtual void blitRender(::bgfx::TextVideoMemBlitter& _blitter, uint _numIndices) /*override*/;

    virtual bool updateResolution(::bgfx::Resolution const& _resolution);

    virtual void updateFlipRate(::bgfx::Resolution const& _resolution);

    virtual void kick(bool _alloc);

    virtual void finish();

    virtual void doPreBlasSkinning(::bgfx::d3d12::CommandListD3D12& bgfxCommandList);

    virtual void rayTrace(
        ::bgfx::d3d12::CommandListD3D12&       bgfxCommandList,
        ::bgfx::RayTracingConfiguration const& rtConfig,
        ::bgfx::RayTracingResources const&     rtResources,
        ::bgfx::RenderBind const&              renderBind,
        ::bgfx::Matrix4 const&                 viewMat,
        ::bgfx::Matrix4 const&                 projMat
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RendererContextD3D12();

    MCAPI void allocGlobalCommands();

    MCAPI ::bgfx::d3d12::ResourceCreate allocateResource(
        wchar_t const*                    _name,
        ::bgfx::d3d12::HeapProperty::Enum _heapProperty,
        uint64                            _size,
        ::D3D12_RESOURCE_STATES           _initialState,
        ::D3D12_RESOURCE_FLAGS            _flags
    );

    MCAPI void enableDynamicTextureHandles();

    MCAPI void finishAll(bool _alloc);

    MCAPI ::D3D12_CPU_DESCRIPTOR_HANDLE getRtv(::bgfx::FrameBufferHandle _fbh);

    MCAPI ::D3D12_CPU_DESCRIPTOR_HANDLE getRtv(::bgfx::FrameBufferHandle _fbh, uchar _attachment);

    MCAPI void invalidateCache();

    MCAPI void postReset(bool _swapChainReset);

    MCAPI void preReset(bool _swapChainReset);

    MCAPI void saveDREDInfo();

    MCAPI void setShaderUniform4f(
        uchar                                       _flags,
        uint                                        _regIndex,
        void const*                                 _val,
        uint                                        _numRegs,
        ::bgfx::d3d12::ConstantBufferDataContainer& _constantBuffers
    );

    MCAPI void setShaderUniform4x4f(
        uchar                                       _flags,
        uint                                        _regIndex,
        void const*                                 _val,
        uint                                        _numRegs,
        ::bgfx::d3d12::ConstantBufferDataContainer& _constantBuffers
    );

    MCAPI void submitBlit(::bgfx::d3d12::CommandListD3D12& _commandList, ::bgfx::BlitState& _bs, ushort _view);

    MCAPI void updateMsaa(::DXGI_FORMAT _format);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $init(::bgfx::Init const& _init);

    MCAPI void $shutdown();

    MCFOLD ::bgfx::RendererType::Enum $getRendererType() const;

    MCAPI uint64 $getRendererVersion() const;

    MCAPI uint64 $getShaderVersion() const;

    MCAPI char const* $getRendererName() const;

    MCAPI bool $isDeviceRemoved();

    MCAPI void $suspend();

    MCFOLD void $resume();

    MCAPI void $advanceToNextFrame();

    MCAPI void $flip();

    MCFOLD void $waitForFlipQueue();

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
        ::bgfx::TextureHandle  _handle,
        ::bgfx::Memory const*  _mem,
        uint                   _flags,
        uchar                  _skip,
        ::bgfx::Memory const** _imageContainerData
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

    MCAPI void $wrapExternalTexture(
        ::bgfx::TextureHandle      _handle,
        ::bgfx::RendererType::Enum _type,
        void*                      _texturePtr,
        void*                      _deferredRef
    );

    MCAPI void $overrideInternal(::bgfx::TextureHandle _handle, uint64 _ptr, uint _flags);

    MCAPI uint64 $getInternal(::bgfx::TextureHandle _handle);

    MCAPI void $destroyTexture(::bgfx::TextureHandle _handle);

    MCAPI void $createShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _size, uint _stride, ushort _flags);

    MCAPI void $updateShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem);

    MCAPI void $destroyShaderBuffer(::bgfx::ShaderBufferHandle _handle);

    MCAPI void $createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffsetBytes,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffsetBytes,
        ushort                                        _indexSize,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCAPI void $destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle _handle);

    MCAPI void $createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                _numInstances,
        ::bgfx::TopLevelInstanceDesc*       _instanceDescs
    );

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

    MCAPI void $updateUniform(void* _uniformsTarget, ushort _loc, void const* _data, uint _size);

    MCFOLD void $setMarker(void*, char const* _marker, uint);

    MCAPI void $invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle _handle);

    MCAPI void $setName(::bgfx::Handle _handle, char const* _name);

    MCAPI void
    $submit(::bgfx::Frame* _render, ::bgfx::ClearQuad& _clearQuad, ::bgfx::TextVideoMemBlitter& _textVideoMemBlitter);

    MCAPI void $blitSetup(::bgfx::TextVideoMemBlitter& _blitter);

    MCAPI void $blitRender(::bgfx::TextVideoMemBlitter& _blitter, uint _numIndices);

    MCAPI bool $updateResolution(::bgfx::Resolution const& _resolution);

    MCFOLD void $updateFlipRate(::bgfx::Resolution const& _resolution);

    MCAPI void $kick(bool _alloc);

    MCAPI void $finish();

    MCFOLD void $doPreBlasSkinning(::bgfx::d3d12::CommandListD3D12& bgfxCommandList);

    MCFOLD void $rayTrace(
        ::bgfx::d3d12::CommandListD3D12&       bgfxCommandList,
        ::bgfx::RayTracingConfiguration const& rtConfig,
        ::bgfx::RayTracingResources const&     rtResources,
        ::bgfx::RenderBind const&              renderBind,
        ::bgfx::Matrix4 const&                 viewMat,
        ::bgfx::Matrix4 const&                 projMat
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bgfx::d3d12
