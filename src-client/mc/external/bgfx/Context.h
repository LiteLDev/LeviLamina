#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/ClearQuad.h"
#include "mc/external/bgfx/CommandBuffer.h"
#include "mc/external/bgfx/DynamicIndexBuffer.h"
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/DynamicVertexBuffer.h"
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/Frame.h"
#include "mc/external/bgfx/GuardedHandleAllocPagedT.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/IndexBuffer.h"
#include "mc/external/bgfx/Init.h"
#include "mc/external/bgfx/InitResult.h"
#include "mc/external/bgfx/InitState.h"
#include "mc/external/bgfx/NonLocalAllocator.h"
#include "mc/external/bgfx/OcclusionQueryHandle.h"
#include "mc/external/bgfx/ShaderHandle.h"
#include "mc/external/bgfx/Stats.h"
#include "mc/external/bgfx/TextVideoMemBlitter.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/bgfx/UpdateBatchT.h"
#include "mc/external/bgfx/VertexBuffer.h"
#include "mc/external/bgfx/VertexDeclRef.h"
#include "mc/external/bgfx/View.h"
#include "mc/external/bgfx/ViewStats.h"
#include "mc/external/bgfx/acceleration_structure_build_flags/Enum.h"
#include "mc/external/bgfx/backbuffer_ratio/Enum.h"
#include "mc/external/bgfx/render_frame/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/uniform_type/Enum.h"
#include "mc/external/bx/HandleAllocT.h"
#include "mc/external/bx/HandleHashMapT.h"
#include "mc/external/bx/Mutex.h"
#include "mc/external/bx/Semaphore.h"
#include "mc/external/bx/Thread.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct AllocationContext; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct CommandBuffer; }
namespace bgfx { struct Encoder; }
namespace bgfx { struct EncoderImpl; }
namespace bgfx { struct EncoderStats; }
namespace bgfx { struct FrameBufferHandle; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct Memory; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RendererContextI; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureInfo; }
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { class StringT; }
namespace bx { struct HandleAlloc; }
namespace bx { struct StringView; }
// clang-format on

namespace bgfx {

struct Context {
public:
    // Context inner types declare
    // clang-format off
    struct DynamicVertexAllocation;
    struct ShaderRef;
    struct ProgramRef;
    struct UniformRef;
    struct TextureRef;
    struct ShaderBufferRef;
    struct FrameBufferRef;
    // clang-format on

    // Context inner types define
    struct DynamicVertexAllocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> m_ptr;
        ::ll::TypedStorage<4, 4, uint>   m_offset;
        ::ll::TypedStorage<8, 8, uint64> m_totalSize;
        // NOLINTEND
    };

    struct ShaderRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::bgfx::UniformHandle*> m_uniforms;
        ::ll::UntypedStorage<8, 16>                      m_name;
        ::ll::TypedStorage<4, 4, uint>                   m_hash;
        ::ll::TypedStorage<2, 2, short>                  m_refCount;
        ::ll::TypedStorage<2, 2, ushort>                 m_num;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ShaderRef();

        MCAPI ~ShaderRef();
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
    };

    struct ProgramRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_vsh;
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_fsh;
        ::ll::TypedStorage<2, 2, short>                m_refCount;
        // NOLINTEND
    };

    struct UniformRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>                         m_name;
        ::ll::TypedStorage<4, 4, ::bgfx::UniformType::Enum> m_type;
        ::ll::TypedStorage<2, 2, ushort>                    m_num;
        ::ll::TypedStorage<2, 2, short>                     m_refCount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI UniformRef();

        MCAPI ~UniformRef();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct TextureRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>      m_name;
        ::ll::TypedStorage<8, 8, void*>  m_ptr;
        ::ll::TypedStorage<4, 4, uint>   m_storageSize;
        ::ll::TypedStorage<2, 2, short>  m_refCount;
        ::ll::TypedStorage<1, 1, uchar>  m_bbRatio;
        ::ll::TypedStorage<1, 1, uchar>  m_format;
        ::ll::TypedStorage<1, 1, uchar>  m_numMips;
        ::ll::TypedStorage<2, 2, ushort> m_numLayers;
        ::ll::TypedStorage<1, 1, bool>   m_owned;
        ::ll::TypedStorage<1, 1, bool>   m_immutable;
        ::ll::TypedStorage<1, 1, bool>   m_rt;
        // NOLINTEND
    };

    struct ShaderBufferRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>     m_name;
        ::ll::TypedStorage<8, 8, void*> m_ptr;
        ::ll::TypedStorage<4, 4, uint>  m_stride;
        ::ll::TypedStorage<4, 4, uint>  m_count;
        ::ll::TypedStorage<2, 2, short> m_refCount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ShaderBufferRef();

        MCAPI ~ShaderBufferRef();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct FrameBufferRef {
    public:
        // FrameBufferRef inner types define
        union un {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<2, 16, ::bgfx::TextureHandle[8]> m_th;
            ::ll::TypedStorage<8, 16, void*>                    m_nwh;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bgfx::Context::FrameBufferRef::un> un;
        ::ll::TypedStorage<1, 1, bool>                                 m_window;
        // NOLINTEND
    };

    using UniformHashMap = ::bx::HandleHashMapT<1024, uint>;

    using ShaderHashMap = ::bx::HandleHashMapT<8192, uint>;

    using ProgramHashMap = ::bx::HandleHashMapT<4096, uint>;

    using TextureUpdateBatch = ::bgfx::UpdateBatchT<256>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_renderSem;
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_apiSem;
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_encoderEndSem;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_encoderApiLock;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_resourceApiLock;
    ::ll::TypedStorage<8, 464, ::bx::Thread>                             m_thread;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_perfStatsApiLock;
    ::ll::TypedStorage<8, 208, ::bgfx::Stats>                            m_lastPerfStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_lastNumViewStats;
    ::ll::TypedStorage<8, 79872, ::bgfx::ViewStats[256]>                 m_lastViewStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_lastNumEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                      m_lastEncoderStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                      m_encoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::Encoder*>                           m_encoder0;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderImpl*>                       m_encoder;
    ::ll::TypedStorage<8, 8, ::bx::HandleAlloc*>                         m_encoderHandle;
    ::ll::TypedStorage<8, 206541568, ::bgfx::Frame[2]>                   m_frame;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                             m_render;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                             m_submit;
    ::ll::TypedStorage<8, 524280, uint64[65535]>                         m_tempKeys;
    ::ll::TypedStorage<2, 131070, ushort[65535]>                         m_tempValues;
    ::ll::TypedStorage<4, 16384, ::bgfx::IndexBuffer[4096]>              m_indexBuffers;
    ::ll::TypedStorage<4, 32768, ::bgfx::VertexBuffer[4096]>             m_vertexBuffers;
    ::ll::TypedStorage<4, 81920, ::bgfx::DynamicIndexBuffer[4096]>       m_dynamicIndexBuffers;
    ::ll::TypedStorage<4, 114688, ::bgfx::DynamicVertexBuffer[4096]>     m_dynamicVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeDynamicIndexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeDynamicVertexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeOcclusionQueryHandles;
    ::ll::TypedStorage<2, 8192, ::bgfx::DynamicIndexBufferHandle[4096]>  m_freeDynamicIndexBufferHandle;
    ::ll::TypedStorage<2, 8192, ::bgfx::DynamicVertexBufferHandle[4096]> m_freeDynamicVertexBufferHandle;
    ::ll::TypedStorage<2, 512, ::bgfx::OcclusionQueryHandle[256]>        m_freeOcclusionQueryHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                 m_dynIndexBufferAllocator;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_dynamicIndexBufferHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                 m_dynVertexBufferAllocator;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_dynamicVertexBufferHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_indexBufferHandle;
    ::ll::TypedStorage<2, 260, ::bx::HandleAllocT<64>>                   m_vertexDeclHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_vertexBufferHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_shaderHandle;
    ::ll::TypedStorage<2, 8196, ::bx::HandleAllocT<2048>>                m_programHandle;
    ::ll::TypedStorage<8, 16424, ::bgfx::GuardedHandleAllocPagedT<4096, 4096, ushort, ::bgfx::AllocationContext>>
                                                                    m_textureHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>          m_shaderBufferHandle;
    ::ll::TypedStorage<2, 516, ::bx::HandleAllocT<128>>             m_frameBufferHandle;
    ::ll::TypedStorage<2, 2052, ::bx::HandleAllocT<512>>            m_uniformHandle;
    ::ll::TypedStorage<2, 1028, ::bx::HandleAllocT<256>>            m_occlusionQueryHandle;
    ::ll::TypedStorage<2, 131076, ::bx::HandleAllocT<32768>>        m_accelerationStructureBufferHandle;
    ::ll::TypedStorage<4, 6152, ::bx::HandleHashMapT<1024, uint>>   m_uniformHashMap;
    ::ll::TypedStorage<8, 12288, ::bgfx::Context::UniformRef[512]>  m_uniformRef;
    ::ll::TypedStorage<4, 49160, ::bx::HandleHashMapT<8192, uint>>  m_shaderHashMap;
    ::ll::TypedStorage<8, 131072, ::bgfx::Context::ShaderRef[4096]> m_shaderRef;
    ::ll::TypedStorage<4, 24584, ::bx::HandleHashMapT<4096, uint>>  m_programHashMap;
    ::ll::TypedStorage<2, 12288, ::bgfx::Context::ProgramRef[2048]> m_programRef;
    ::ll::TypedStorage<8, 163872, ::bgfx::GuardedPagedHeapBackedArray<::bgfx::Context::TextureRef, 4096>> m_textureRef;
    ::ll::TypedStorage<8, 163840, ::bgfx::Context::ShaderBufferRef[4096]> m_shaderBufferRef;
    ::ll::TypedStorage<8, 3072, ::bgfx::Context::FrameBufferRef[128]>     m_frameBufferRef;
    ::ll::TypedStorage<4, 17288, ::bgfx::VertexDeclRef>                   m_declRef;
    ::ll::TypedStorage<2, 512, ushort[256]>                               m_viewRemap;
    ::ll::TypedStorage<4, 1024, uint[256]>                                m_seq;
    ::ll::TypedStorage<8, 114688, ::bgfx::View[256]>                      m_view;
    ::ll::TypedStorage<4, 256, float[16][4]>                              m_clearColor;
    ::ll::TypedStorage<1, 1, uchar>                                       m_colorPaletteDirty;
    ::ll::TypedStorage<8, 64, ::bgfx::Init>                               m_init;
    ::ll::TypedStorage<8, 8, int64>                                       m_frameTimeLast;
    ::ll::TypedStorage<4, 4, uint>                                        m_debug;
    ::ll::TypedStorage<8, 8, int64>                                       m_rtMemoryUsed;
    ::ll::TypedStorage<8, 8, int64>                                       m_textureMemoryUsed;
    ::ll::TypedStorage<8, 8, int64>                                       m_shaderBufferMemoryUsed;
    ::ll::TypedStorage<8, 112, ::bgfx::TextVideoMemBlitter>               m_textVideoMemBlitter;
    ::ll::TypedStorage<8, 112, ::bgfx::ClearQuad>                         m_clearQuad;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderCtx;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderMain;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderNoop;
    ::ll::TypedStorage<4, 4, ::bgfx::InitState>                           m_initState;
    ::ll::TypedStorage<1, 1, bool>                                        m_rendererInitialized;
    ::ll::TypedStorage<1, 1, bool>                                        m_skipFlip;
    ::ll::TypedStorage<1, 1, bool>                                        m_suspended;
    ::ll::TypedStorage<1, 1, bool>                                        m_exit;
    ::ll::TypedStorage<1, 1, bool>                                        m_flipAfterRender;
    ::ll::TypedStorage<1, 1, bool>                                        m_singleThreaded;
    ::ll::TypedStorage<1, 1, bool>                                        m_initSyncOptional;
    ::ll::TypedStorage<1, 1, bool>                                        m_texturesGuarded;
    ::ll::TypedStorage<4, 2052, ::bgfx::UpdateBatchT<256>>                m_textureUpdateBatch;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Context();

    MCAPI void _initBegin();

    MCAPI bool _initFinalize();

    MCAPI void _initPending(bool async);

    MCAPI void _shutdownBegin();

    MCAPI uint64 allocDynamicIndexBuffer(uint _size, ushort _flags);

    MCAPI ::bgfx::Context::DynamicVertexAllocation
    allocDynamicVertexBuffer(uint _size, ushort _flags, ushort _aligment);

    MCAPI bool apiSemWait(int _msecs);

    MCAPI ::bgfx::InitResult continueInit(bool async);

    MCAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::DynamicVertexBufferHandle             _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCAPI ::bgfx::DynamicIndexBufferHandle createDynamicIndexBuffer(uint _num, ushort _flags);

    MCAPI ::bgfx::DynamicVertexBufferHandle
    createDynamicVertexBuffer(uint _num, ::bgfx::VertexDecl const& _decl, ushort _flags);

    MCAPI ::bgfx::FrameBufferHandle
    createFrameBuffer(uchar _num, ::bgfx::Attachment const* _attachment, bool _destroyTextures);

    MCAPI ::bgfx::FrameBufferHandle
    createFrameBuffer(void* _nwh, ushort _width, ushort _height, ::bgfx::TextureFormat::Enum _depthFormat);

    MCAPI ::bgfx::IndexBufferHandle createIndexBuffer(::bgfx::Memory const* _mem, ushort _flags);

    MCAPI ::bgfx::ProgramHandle createProgram(::bgfx::ShaderHandle _vsh, bool _destroyShader);

    MCAPI ::bgfx::ProgramHandle
    createProgram(::bgfx::ShaderHandle _vsh, ::bgfx::ShaderHandle _fsh, bool _destroyShaders);

    MCAPI ::bgfx::ShaderHandle createShader(::bgfx::Memory const* _mem);

    MCAPI ::bgfx::ShaderBufferHandle createShaderBuffer(uint _num, uint _stride, ushort _flags);

    MCAPI ::bgfx::TextureHandle createTexture(
        ::bgfx::Memory const*         _mem,
        uint                          _flags,
        uchar                         _skip,
        ::bgfx::TextureInfo*          _info,
        ::bgfx::BackbufferRatio::Enum _ratio,
        bool                          _immutable
    );

    MCAPI ::bgfx::AccelerationStructureHandle createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                numInstances,
        ::bgfx::TopLevelInstanceDesc*       instanceDescs
    );

    MCAPI ::bgfx::TransientIndexBuffer* createTransientIndexBuffer(uint _size);

    MCAPI ::bgfx::TransientVertexBuffer* createTransientVertexBuffer(uint _size, ::bgfx::VertexDecl const* _decl);

    MCAPI ::bgfx::UniformHandle createUniform(char const* _name, ::bgfx::UniformType::Enum _type, ushort _num);

    MCAPI ::bgfx::VertexBufferHandle
    createVertexBuffer(::bgfx::Memory const* _mem, ::bgfx::VertexDecl const& _decl, ushort _flags);

    MCAPI void destroyFrameBuffer(::bgfx::FrameBufferHandle _handle);

    MCAPI void destroyIndexBuffer(::bgfx::IndexBufferHandle _handle);

    MCAPI void destroyProgram(::bgfx::ProgramHandle _handle);

    MCAPI void destroyTransientIndexBuffer(::bgfx::TransientIndexBuffer* _tib);

    MCAPI void destroyTransientVertexBuffer(::bgfx::TransientVertexBuffer* _tvb);

    MCAPI void destroyUniform(::bgfx::UniformHandle _handle);

    MCAPI void destroyVertexBuffer(::bgfx::VertexBufferHandle _handle);

    MCAPI ::bgfx::VertexDeclHandle findVertexDecl(::bgfx::VertexDecl const& _decl);

    MCAPI void flushTextureUpdateBatch(::bgfx::CommandBuffer& _cmdbuf);

    MCAPI uint frame(uint _flags);

    MCAPI void freeAllHandles(::bgfx::Frame* _frame);

    MCAPI void freeDynamicBuffers();

    MCAPI ::bgfx::CommandBuffer& getCommandBuffer(::bgfx::CommandBuffer::Enum _cmd);

    MCAPI ::bgfx::RenderFrame::Enum renderFrame(int _msecs);

    MCAPI void rendererExecCommands(::bgfx::CommandBuffer& _cmdbuf);

    MCAPI void resetView(ushort _id);

    MCAPI void
    resizeTexture(::bgfx::TextureHandle _handle, ushort _width, ushort _height, uchar _numMips, ushort _numLayers);

    MCAPI void setName(::bgfx::Handle _handle, ::bx::StringView const& _name);

    MCAPI void shaderDecRef(::bgfx::ShaderHandle _handle);

    MCAPI void swap();

    MCAPI void textureDecRef(::bgfx::TextureHandle _handle);

    MCAPI void update(::bgfx::ShaderBufferHandle _handle, ::bgfx::Memory const* _mem);

    MCAPI void update(::bgfx::DynamicIndexBufferHandle _handle, uint _startIndex, ::bgfx::Memory const* _mem);

    MCAPI void update(::bgfx::DynamicVertexBufferHandle _handle, uint _startVertex, ::bgfx::Memory const* _mem);

    MCAPI void
    updateOffset(::bgfx::DynamicIndexBufferHandle _handle, uint _offset, uint _declStride, ::bgfx::Memory const* _mem);

    MCAPI void
    updateOffset(::bgfx::DynamicVertexBufferHandle _handle, uint _offset, uint _declStride, ::bgfx::Memory const* _mem);

    MCAPI void updateTexture(
        ::bgfx::TextureHandle _handle,
        uchar                 _side,
        uchar                 _mip,
        ushort                _x,
        ushort                _y,
        ushort                _z,
        ushort                _width,
        ushort                _height,
        ushort                _depth,
        ushort                _pitch,
        ::bgfx::Memory const* _mem
    );

    MCAPI ::bgfx::TextureHandle wrapExternalTexture(::bgfx::RendererType::Enum _type, void* _texturePtr);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int renderThread(::bx::Thread*, void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace bgfx
