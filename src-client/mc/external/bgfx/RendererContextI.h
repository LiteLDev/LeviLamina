#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/acceleration_structure_build_flags/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/uniform_type/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct FrameBufferHandle; }
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
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { class StringT; }
// clang-format on

namespace bgfx {

struct RendererContextI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererContextI() = 0;

    virtual ::bgfx::RendererType::Enum getRendererType() const = 0;

    virtual uint64 getRendererVersion() const = 0;

    virtual uint64 getShaderVersion() const = 0;

    virtual char const* getRendererName() const = 0;

    virtual bool isDeviceRemoved() = 0;

    virtual void flip() = 0;

    virtual void advanceToNextFrame() = 0;

    virtual void suspend() = 0;

    virtual void resume() = 0;

    virtual void createIndexBuffer(::bgfx::IndexBufferHandle _handle, ::bgfx::Memory const* _mem, ushort _flags) = 0;

    virtual void destroyIndexBuffer(::bgfx::IndexBufferHandle _handle) = 0;

    virtual void createVertexDecl(::bgfx::VertexDeclHandle _handle, ::bgfx::VertexDecl const& _decl) = 0;

    virtual void destroyVertexDecl(::bgfx::VertexDeclHandle) = 0;

    virtual void createVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        ::bgfx::Memory const*      _mem,
        ::bgfx::VertexDeclHandle   _declHandle,
        ushort                     _flags
    ) = 0;

    virtual void destroyVertexBuffer(::bgfx::VertexBufferHandle _handle) = 0;

    virtual void createDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle, uint _size, ushort _flags) = 0;

    virtual void updateDynamicIndexBuffer(
        ::bgfx::IndexBufferHandle _handle,
        uint                      _offset,
        uint                      _size,
        ::bgfx::Memory const*     _mem
    ) = 0;

    virtual void destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle _handle) = 0;

    virtual void createDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle, uint _size, ushort _flags) = 0;

    virtual void updateDynamicVertexBuffer(
        ::bgfx::VertexBufferHandle _handle,
        uint                       _offset,
        uint                       _size,
        ::bgfx::Memory const*      _mem
    ) = 0;

    virtual void destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle _handle) = 0;

    virtual void createShader(::bgfx::ShaderHandle _handle, ::bgfx::Memory const* _mem) = 0;

    virtual void destroyShader(::bgfx::ShaderHandle _handle) = 0;

    virtual void createProgram(::bgfx::ProgramHandle _handle, ::bgfx::ShaderHandle _vsh, ::bgfx::ShaderHandle _fsh) = 0;

    virtual void destroyProgram(::bgfx::ProgramHandle _handle) = 0;

    virtual void* createTexture(::bgfx::TextureHandle, ::bgfx::Memory const*, uint, uchar, ::bgfx::Memory const**) = 0;

    virtual void updateTextureBegin(::bgfx::TextureHandle, uchar, uchar) = 0;

    virtual void updateTexture(
        ::bgfx::TextureHandle _handle,
        uchar                 _side,
        uchar                 _mip,
        ::bgfx::Rect const&   _rect,
        ushort                _z,
        ushort                _depth,
        ushort                _pitch,
        ::bgfx::Memory const* _mem
    ) = 0;

    virtual void updateTextureEnd() = 0;

    virtual void readTexture(::bgfx::TextureHandle _handle, void* _data, uchar _mip) = 0;

    virtual void
    resizeTexture(::bgfx::TextureHandle _handle, ushort _width, ushort _height, uchar _numMips, ushort _numLayers) = 0;

    virtual void overrideInternal(::bgfx::TextureHandle _handle, uint64 _ptr, uint _flags) = 0;

    virtual uint64 getInternal(::bgfx::TextureHandle _handle) = 0;

    virtual void destroyTexture(::bgfx::TextureHandle _handle) = 0;

    virtual void
    wrapExternalTexture(::bgfx::TextureHandle _handle, ::bgfx::RendererType::Enum _type, void* _texturePtr, void* ref);

    virtual void createShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _size, uint _stride, ushort _flags) = 0;

    virtual void updateShaderBuffer(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem) = 0;

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle _handle);

    virtual void
    createFrameBuffer(::bgfx::FrameBufferHandle _handle, uchar _num, ::bgfx::Attachment const* _attachment) = 0;

    virtual void createFrameBuffer(
        ::bgfx::FrameBufferHandle   _handle,
        void*                       _nwh,
        uint                        _width,
        uint                        _height,
        ::bgfx::TextureFormat::Enum _depthFormat
    ) = 0;

    virtual void destroyFrameBuffer(::bgfx::FrameBufferHandle _handle) = 0;

    virtual void
    createUniform(::bgfx::UniformHandle _handle, ::bgfx::UniformType::Enum _type, ushort _num, char const* _name) = 0;

    virtual void destroyUniform(::bgfx::UniformHandle _handle) = 0;

    virtual void requestScreenShot(::bgfx::FrameBufferHandle _handle, char const* _filePath) = 0;

    virtual void updateViewName(ushort _id, char const* _name) = 0;

    virtual void updateUniform(void* _uniformsTarget, ushort _loc, void const* _data, uint _size) = 0;

    virtual void setMarker(void*, char const*, uint) = 0;

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle _handle) = 0;

    virtual void setName(::bgfx::Handle _handle, char const* _name) = 0;

    virtual void submit(::bgfx::Frame*, ::bgfx::ClearQuad&, ::bgfx::TextVideoMemBlitter&) = 0;

    virtual void blitSetup(::bgfx::TextVideoMemBlitter& _blitter) = 0;

    virtual void blitRender(::bgfx::TextVideoMemBlitter& _blitter, uint _numIndices) = 0;

    virtual void waitForFlipQueue() = 0;

    virtual void schedulePreBlasSkinningDispatch(
        ::bgfx::VertexBufferHandle,
        uint,
        ::bgfx::VertexBufferHandle,
        uint,
        ::bgfx::VertexDeclHandle,
        uint,
        ::bgfx::Memory const*,
        ::bx::StringT const&
    );

    virtual void createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ushort                                        indexSize,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    virtual void createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                numInstances,
        ::bgfx::TopLevelInstanceDesc*       instanceDescs
    );

    virtual void destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle _handle);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void
    $wrapExternalTexture(::bgfx::TextureHandle _handle, ::bgfx::RendererType::Enum _type, void* _texturePtr, void* ref);

    MCFOLD void $createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ushort                                        indexSize,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCFOLD void $createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                numInstances,
        ::bgfx::TopLevelInstanceDesc*       instanceDescs
    );

    MCFOLD void $destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle _handle);
    // NOLINTEND
};

} // namespace bgfx
