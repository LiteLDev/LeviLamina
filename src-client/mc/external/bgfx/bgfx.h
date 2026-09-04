#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/InitResult.h"
#include "mc/external/bgfx/NvApiStatus.h"
#include "mc/external/bgfx/attrib/Enum.h"
#include "mc/external/bgfx/backbuffer_ratio/Enum.h"
#include "mc/external/bgfx/error_state/Enum.h"
#include "mc/external/bgfx/fatal/Enum.h"
#include "mc/external/bgfx/predefined_uniform/Enum.h"
#include "mc/external/bgfx/render_frame/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class AllocatorStub; }
namespace bgfx { class UniformBuffer; }
namespace bgfx { struct AttribToId; }
namespace bgfx { struct CallbackI; }
namespace bgfx { struct CallbackStub; }
namespace bgfx { struct Caps; }
namespace bgfx { struct Context; }
namespace bgfx { struct DREDData; }
namespace bgfx { struct DxbcContext; }
namespace bgfx { struct DxbcInstruction; }
namespace bgfx { struct DxbcOperand; }
namespace bgfx { struct DxbcSignature; }
namespace bgfx { struct DxbcSubOperand; }
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct EmbeddedShader; }
namespace bgfx { struct Init; }
namespace bgfx { struct InitStats; }
namespace bgfx { struct InternalData; }
namespace bgfx { struct Memory; }
namespace bgfx { struct NvMemoryInfoV2; }
namespace bgfx { struct NvPhysicalGpuHandle; }
namespace bgfx { struct PlatformData; }
namespace bgfx { struct RendererContextI; }
namespace bgfx { struct RendererCreator; }
namespace bgfx { struct ShaderHandle; }
namespace bgfx { struct TextVideoMem; }
namespace bgfx { struct TextVideoMemBlitter; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { class Error; }
namespace bx { struct AllocatorI; }
namespace bx { struct ReaderI; }
namespace bx { struct ReaderSeekerI; }
// clang-format on

namespace bgfx {
// functions
// NOLINTBEGIN
MCAPI void
blit(::bgfx::RendererContextI* _renderCtx, ::bgfx::TextVideoMemBlitter& _blitter, ::bgfx::TextVideoMem const& _mem);

MCAPI void charsetFillTexture(uchar const* _charset, uchar* _rgba, uint _height, uint _pitch, uint _bpp);

MCAPI int compareDescending(void const* _lhs, void const* _rhs);

MCAPI ::bgfx::InitResult continueInit(::bgfx::Init const& _init, bool async);

MCAPI ::bgfx::ShaderHandle
createEmbeddedShader(::bgfx::EmbeddedShader const* _es, ::bgfx::RendererType::Enum _type, char const* _name);

MCAPI ::bgfx::TextureHandle createTexture2D(
    ::bgfx::BackbufferRatio::Enum _ratio,
    ushort                        _width,
    ushort                        _height,
    bool                          _hasMips,
    ushort                        _numLayers,
    ::bgfx::TextureFormat::Enum   _format,
    uint                          _flags,
    ::bgfx::Memory const*         _mem,
    uchar                         _numMips
);

MCAPI ::bgfx::TextureHandle createTexture3D(
    ushort                      _width,
    ushort                      _height,
    ushort                      _depth,
    bool                        _hasMips,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bgfx::Memory const*       _mem
);

MCAPI ::bgfx::TextureHandle createTextureCube(
    ushort                      _size,
    bool                        _hasMips,
    ushort                      _numLayers,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bgfx::Memory const*       _mem,
    uchar                       _numMips
);

MCAPI void fatal(::bgfx::Fatal::Enum _code, char const* _format, ...);

MCAPI uchar getSupportedRenderers(uchar max, ::bgfx::RendererType::Enum* _enum);

MCAPI void handleErrorState(::bgfx::ErrorState::Enum errorState);

MCAPI ::bgfx::Attrib::Enum idToAttrib(ushort id);

MCAPI ::bgfx::InitResult initBegin(::bgfx::Init const& _init, ::bgfx::ErrorState::Enum& errorState);

MCAPI void isTextureValid(
    ushort                      _depth,
    bool                        _cubeMap,
    ushort                      _numLayers,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bx::Error*                _err
);

MCAPI ::bgfx::PredefinedUniform::Enum nameToPredefinedUniformEnum(char const* _name);

MCAPI uchar parseAttr(char*& _ptr, uchar _default);

MCAPI uchar parseAttrTo(char*& _ptr, char _to, uchar _default);

MCAPI int read(::bx::ReaderSeekerI* _reader, ::bgfx::DxbcContext& _dxbc, ::bx::Error* _err);

MCAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcInstruction& _instruction, ::bx::Error* _err);

MCAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcOperand& _operand, ::bx::Error* _err);

MCAPI int read(::bx::ReaderSeekerI* _reader, ::bgfx::DxbcSignature& _signature, ::bx::Error* _err);

MCAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcSubOperand& _subOperand, ::bx::Error* _err);

MCAPI ::bgfx::RenderFrame::Enum renderFrame(int _msecs);

MCAPI ::bgfx::RendererContextI* rendererCreate(::bgfx::Init const& _init, bool asyncInit, bool& syncOptional);

MCAPI void rendererUpdateUniforms(
    ::bgfx::RendererContextI*                                              _renderCtx,
    ::bgfx::UniformBuffer const*                                           _uniformBuffer,
    uint                                                                   _begin,
    uint                                                                   _end,
    ::brstd::flat_set<ushort, ::std::less<ushort>, ::std::vector<ushort>>* usedLocs,
    void*                                                                  _scopeContext
);

MCAPI void schedulePreBlasSkinningDispatch(
    ::bgfx::DynamicVertexBufferHandle _preSkinVertexBufferHandle,
    uint                              _preSkinVertexOffset,
    ::bgfx::DynamicVertexBufferHandle _postSkinVertexBufferHandle,
    uint                              _postSkinVertexOffset,
    ::bgfx::VertexDeclHandle          _vertexDeclHandle,
    uint                              _vertexCount,
    ::bgfx::Memory const*             _bones,
    char const*                       _debugName
);

MCAPI void shutdown();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::_GUID const& IID_IDXGIDevice3();

MCAPI ::_GUID const& IID_IDXGIFactory2();

MCAPI ::bgfx::DREDData& g_DREDData();

MCAPI ::bx::AllocatorI*& g_allocator();

MCAPI ::bgfx::CallbackI*& g_callback();

MCAPI ::bgfx::Caps& g_caps();

MCAPI ::bgfx::InitStats& g_initStats();

MCAPI ::bgfx::InternalData& g_internalData();

MCAPI ::bgfx::PlatformData& g_platformData();

MCAPI bool& g_platformDataChangedSinceReset();

MCAPI ::std::add_lvalue_reference_t<uint const[]> g_uniformTypeSize();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle** const, uint*)>
nvApiEnumPhysicalGPUs();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(ulong*, char* const)> nvApiGetDriverAndBranchVersion();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle*, char* const)>
nvApiGpuGetFullName();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle*, ::bgfx::NvMemoryInfoV2*)>
nvApiGpuGetMemoryInfo();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)()> nvApiInitialize();

MCAPI ::std::add_lvalue_reference_t<void* (*)(uint)> nvApiQueryInterface();

MCAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)()> nvApiUnload();

MCAPI ::bgfx::AllocatorStub*& s_allocatorStub();

MCAPI ::std::add_lvalue_reference_t<::bgfx::AttribToId[]> s_attribToId();

MCAPI ::std::add_lvalue_reference_t<uchar (*[])[4][7]> s_attribTypeSize();

MCAPI ::bgfx::CallbackStub*& s_callbackStub();

MCAPI ::bgfx::Context*& s_ctx();

MCAPI ::std::add_lvalue_reference_t<::_GUID const[]> s_dxgiDeviceIIDs();

MCAPI bool& s_graphicsDebuggerPresent();

MCAPI bool& s_renderFrameCalled();

MCAPI ::std::add_lvalue_reference_t<::bgfx::RendererCreator[]> s_rendererCreator();

MCAPI uint& s_threadIndex();

MCAPI ::std::add_lvalue_reference_t<char const*[]> s_topologyName();
// NOLINTEND

} // namespace bgfx
