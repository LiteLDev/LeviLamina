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
MCNAPI void
blit(::bgfx::RendererContextI* _renderCtx, ::bgfx::TextVideoMemBlitter& _blitter, ::bgfx::TextVideoMem const& _mem);

MCNAPI void charsetFillTexture(uchar const* _charset, uchar* _rgba, uint _height, uint _pitch, uint _bpp);

MCNAPI int compareDescending(void const* _lhs, void const* _rhs);

MCNAPI ::bgfx::InitResult continueInit(::bgfx::Init const& _init, bool async);

MCNAPI ::bgfx::ShaderHandle
createEmbeddedShader(::bgfx::EmbeddedShader const* _es, ::bgfx::RendererType::Enum _type, char const* _name);

MCNAPI ::bgfx::TextureHandle createTexture2D(
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

MCNAPI ::bgfx::TextureHandle createTexture3D(
    ushort                      _width,
    ushort                      _height,
    ushort                      _depth,
    bool                        _hasMips,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bgfx::Memory const*       _mem
);

MCNAPI ::bgfx::TextureHandle createTextureCube(
    ushort                      _size,
    bool                        _hasMips,
    ushort                      _numLayers,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bgfx::Memory const*       _mem,
    uchar                       _numMips
);

MCNAPI void fatal(::bgfx::Fatal::Enum _code, char const* _format, ...);

MCNAPI uchar getSupportedRenderers(uchar max, ::bgfx::RendererType::Enum* _enum);

MCNAPI void handleErrorState(::bgfx::ErrorState::Enum errorState);

MCNAPI ::bgfx::Attrib::Enum idToAttrib(ushort id);

MCNAPI ::bgfx::InitResult initBegin(::bgfx::Init const& _init, ::bgfx::ErrorState::Enum& errorState);

MCNAPI void isTextureValid(
    ushort                      _depth,
    bool                        _cubeMap,
    ushort                      _numLayers,
    ::bgfx::TextureFormat::Enum _format,
    uint                        _flags,
    ::bx::Error*                _err
);

MCNAPI ::bgfx::PredefinedUniform::Enum nameToPredefinedUniformEnum(char const* _name);

MCNAPI uchar parseAttr(char*& _ptr, uchar _default);

MCNAPI uchar parseAttrTo(char*& _ptr, char _to, uchar _default);

MCNAPI int read(::bx::ReaderSeekerI* _reader, ::bgfx::DxbcContext& _dxbc, ::bx::Error* _err);

MCNAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcInstruction& _instruction, ::bx::Error* _err);

MCNAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcOperand& _operand, ::bx::Error* _err);

MCNAPI int read(::bx::ReaderSeekerI* _reader, ::bgfx::DxbcSignature& _signature, ::bx::Error* _err);

MCNAPI int read(::bx::ReaderI* _reader, ::bgfx::DxbcSubOperand& _subOperand, ::bx::Error* _err);

MCNAPI ::bgfx::RenderFrame::Enum renderFrame(int _msecs);

MCNAPI ::bgfx::RendererContextI* rendererCreate(::bgfx::Init const& _init, bool asyncInit, bool& syncOptional);

MCNAPI void rendererUpdateUniforms(
    ::bgfx::RendererContextI*                                              _renderCtx,
    ::bgfx::UniformBuffer const*                                           _uniformBuffer,
    uint                                                                   _begin,
    uint                                                                   _end,
    ::brstd::flat_set<ushort, ::std::less<ushort>, ::std::vector<ushort>>* usedLocs,
    void*                                                                  _scopeContext
);

MCNAPI void schedulePreBlasSkinningDispatch(
    ::bgfx::DynamicVertexBufferHandle _preSkinVertexBufferHandle,
    uint                              _preSkinVertexOffset,
    ::bgfx::DynamicVertexBufferHandle _postSkinVertexBufferHandle,
    uint                              _postSkinVertexOffset,
    ::bgfx::VertexDeclHandle          _vertexDeclHandle,
    uint                              _vertexCount,
    ::bgfx::Memory const*             _bones,
    char const*                       _debugName
);

MCNAPI void setPaletteColor(uchar _index, uint _rgba);

MCNAPI void shutdown();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::_GUID const& IID_IDXGIDevice3();

MCNAPI ::_GUID const& IID_IDXGIFactory2();

MCNAPI ::bgfx::DREDData& g_DREDData();

MCNAPI ::bx::AllocatorI*& g_allocator();

MCNAPI ::bgfx::CallbackI*& g_callback();

MCNAPI ::bgfx::Caps& g_caps();

MCNAPI ::bgfx::InitStats& g_initStats();

MCNAPI ::bgfx::InternalData& g_internalData();

MCNAPI ::bgfx::PlatformData& g_platformData();

MCNAPI bool& g_platformDataChangedSinceReset();

MCNAPI ::std::add_lvalue_reference_t<uint const[]> g_uniformTypeSize();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle** const, uint*)>
nvApiEnumPhysicalGPUs();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(ulong*, char* const)> nvApiGetDriverAndBranchVersion();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle*, char* const)>
nvApiGpuGetFullName();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)(::bgfx::NvPhysicalGpuHandle*, ::bgfx::NvMemoryInfoV2*)>
nvApiGpuGetMemoryInfo();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)()> nvApiInitialize();

MCNAPI ::std::add_lvalue_reference_t<void* (*)(uint)> nvApiQueryInterface();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::NvApiStatus (*)()> nvApiUnload();

MCNAPI ::bgfx::AllocatorStub*& s_allocatorStub();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::AttribToId[]> s_attribToId();

MCNAPI ::std::add_lvalue_reference_t<uchar (*[])[4][7]> s_attribTypeSize();

MCNAPI ::bgfx::CallbackStub*& s_callbackStub();

MCAPI ::bgfx::Context*& s_ctx();

MCNAPI ::std::add_lvalue_reference_t<::_GUID const[]> s_dxgiDeviceIIDs();

MCNAPI bool& s_graphicsDebuggerPresent();

MCNAPI bool& s_renderFrameCalled();

MCNAPI ::std::add_lvalue_reference_t<::bgfx::RendererCreator[]> s_rendererCreator();

MCNAPI uint& s_threadIndex();

MCNAPI ::std::add_lvalue_reference_t<char const*[]> s_topologyName();
// NOLINTEND

} // namespace bgfx
