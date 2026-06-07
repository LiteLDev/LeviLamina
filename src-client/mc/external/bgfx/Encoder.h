#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/access/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct DynamicIndexBufferHandle; }
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct IndirectBufferHandle; }
namespace bgfx { struct InstanceDataBuffer; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RayTracingConfiguration; }
namespace bgfx { struct RayTracingResources; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDeclHandle; }
// clang-format on

namespace bgfx {

struct Encoder {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void blit(
        ushort                _id,
        ::bgfx::TextureHandle _dst,
        uchar                 _dstMip,
        ushort                _dstX,
        ushort                _dstY,
        ushort                _dstZ,
        ::bgfx::TextureHandle _src,
        uchar                 _srcMip,
        ushort                _srcX,
        ushort                _srcY,
        ushort                _srcZ,
        ushort                _width,
        ushort                _height,
        ushort                _depth
    );

    MCAPI void discard();

    MCAPI void dispatch(ushort _id, ::bgfx::ProgramHandle _program, uint _numX, uint _numY, uint _numZ, uchar _flags);

    MCAPI void doAllRayTracing(
        ushort                                 _id,
        ::bgfx::RayTracingConfiguration const& rtConfig,
        ::bgfx::RayTracingResources const&     rtResources,
        uint                                   _width,
        uint                                   _height
    );

    MCAPI void setBuffer(uchar _stage, ::bgfx::UniformHandle _sampler, ::bgfx::AccelerationStructureHandle _handle);

    MCAPI void
    setBuffer(uchar _stage, ::bgfx::DynamicIndexBufferHandle _handle, ::bgfx::Access::Enum _access, uint _offset);

    MCAPI void setBuffer(uchar _stage, ::bgfx::IndexBufferHandle _handle, ::bgfx::Access::Enum _access, uint _offset);

    MCAPI void setBuffer(uchar _stage, ::bgfx::VertexBufferHandle _handle, ::bgfx::Access::Enum _access, uint _offset);

    MCAPI void
    setBuffer(uchar _stage, ::bgfx::IndirectBufferHandle _handle, ::bgfx::Access::Enum _access, uint _offset);

    MCAPI void
    setBuffer(uchar _stage, ::bgfx::DynamicVertexBufferHandle _handle, ::bgfx::Access::Enum _access, uint _offset);

    MCAPI void setBuffer(
        uchar                      _stage,
        ::bgfx::UniformHandle      _sampler,
        ::bgfx::ShaderBufferHandle _handle,
        ::bgfx::Access::Enum       _access,
        uint                       _offset
    );

    MCAPI void setBuffersAsRanged(
        uchar                             _stage,
        ::bgfx::ShaderBufferHandle const* _shaderBufferHandles,
        uint64                            _shaderBufferHandleStride,
        ::bgfx::Access::Enum const*       _access,
        uint64                            _accessStride,
        uint const*                       _bufferOffset,
        uint64                            _bufferOffsetStride,
        uint64                            _count,
        uint                              _arrayIndexOffset
    );

    MCAPI void setDepthBias(int _biasConst, float _biasSlope, float _biasClamp);

    MCAPI void setImage(
        uchar                       _stage,
        ::bgfx::TextureHandle       _handle,
        uchar                       _mip,
        ::bgfx::Access::Enum        _access,
        ::bgfx::TextureFormat::Enum _format
    );

    MCAPI void setImagesAsRanged(
        uchar                              _stage,
        ::bgfx::TextureHandle const*       _textureHandles,
        uint64                             _textureHandleStride,
        uchar const*                       _mips,
        uint64                             _mipsStride,
        ::bgfx::Access::Enum const*        _access,
        uint64                             _accessStride,
        ::bgfx::TextureFormat::Enum const* _format,
        uint64                             _formatStride,
        uint64                             _count,
        uint                               _offset
    );

    MCAPI void
    setIndexBuffer(::bgfx::DynamicIndexBufferHandle _handle, uint _firstIndex, uint _numIndices, uint _indexSize);

    MCAPI void setIndexBuffer(::bgfx::IndexBufferHandle _handle, uint _firstIndex, uint _numIndices, uint _indexSize);

    MCFOLD void setInstanceCount(uint _numInstances);

    MCAPI void setInstanceDataBuffer(::bgfx::InstanceDataBuffer const* _idb, uint _start, uint _num);

    MCAPI void setMarker(char const* _marker);

    MCAPI void setSamplerState(uchar _stage, uint _flags);

    MCAPI ushort setScissor(ushort _x, ushort _y, ushort _width, ushort _height);

    MCAPI void setState(uint64 _state, uint _rgba);

    MCAPI void setStencil(uint _fstencil, uint _bstencil);

    MCAPI void setTexture(uchar _stage, ::bgfx::UniformHandle _sampler, ::bgfx::TextureHandle _handle, uint _flags);

    MCAPI void setTexturesAsRanged(
        uchar                        _stage,
        ::bgfx::TextureHandle const* _textureHandles,
        uint64                       _textureHandleStride,
        uint const*                  _flags,
        uint64                       _flagStride,
        uint64                       _count,
        uint                         _offset
    );

    MCAPI uint setTransform(void const* _mtx, ushort _num);

    MCAPI void setUniform(::bgfx::UniformHandle _handle, void const* _value, ushort _num);

    MCAPI void setVertexBuffer(uchar _stream, ::bgfx::VertexBufferHandle _handle, uint _startVertex, uint _numVertices);

    MCAPI void setVertexBuffer(
        uchar                             _stream,
        ::bgfx::DynamicVertexBufferHandle _handle,
        uint                              _bytesOffset,
        uint                              _numVertices,
        ::bgfx::VertexDeclHandle          _decl,
        uint                              _declStride
    );

    MCAPI void submit(ushort _id, ::bgfx::ProgramHandle _program, int _depth, bool _preserveState);

    MCAPI void touch(ushort _id);
    // NOLINTEND
};

} // namespace bgfx
