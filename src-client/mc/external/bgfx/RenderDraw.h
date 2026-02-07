#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/bgfx/IndirectBufferHandle.h"
#include "mc/external/bgfx/OcclusionQueryHandle.h"
#include "mc/external/bgfx/Stream.h"
#include "mc/external/bgfx/VertexBufferHandle.h"

namespace bgfx {

struct RenderDraw {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::bgfx::Stream[4]>           m_stream;
    ::ll::TypedStorage<8, 8, uint64>                       m_stateFlags;
    ::ll::TypedStorage<8, 8, uint64>                       m_stencil;
    ::ll::TypedStorage<4, 4, uint>                         m_rgba;
    ::ll::TypedStorage<4, 4, uint>                         m_uniformBegin;
    ::ll::TypedStorage<4, 4, uint>                         m_uniformEnd;
    ::ll::TypedStorage<4, 4, uint>                         m_startMatrix;
    ::ll::TypedStorage<4, 4, uint>                         m_startIndex;
    ::ll::TypedStorage<4, 4, uint>                         m_numIndices;
    ::ll::TypedStorage<4, 4, uint>                         m_indexSize;
    ::ll::TypedStorage<4, 4, uint>                         m_numVertices;
    ::ll::TypedStorage<4, 4, uint>                         m_instanceDataOffset;
    ::ll::TypedStorage<4, 4, uint>                         m_numInstances;
    ::ll::TypedStorage<2, 2, ushort>                       m_instanceDataStride;
    ::ll::TypedStorage<2, 2, ushort>                       m_startIndirect;
    ::ll::TypedStorage<2, 2, ushort>                       m_numIndirect;
    ::ll::TypedStorage<2, 2, ushort>                       m_numMatrices;
    ::ll::TypedStorage<2, 2, ushort>                       m_scissor;
    ::ll::TypedStorage<1, 1, uchar>                        m_submitFlags;
    ::ll::TypedStorage<1, 1, uchar>                        m_streamMask;
    ::ll::TypedStorage<1, 1, uchar>                        m_uniformIdx;
    ::ll::TypedStorage<4, 4, int>                          m_biasConst;
    ::ll::TypedStorage<4, 4, float>                        m_biasSlope;
    ::ll::TypedStorage<4, 4, float>                        m_biasClamp;
    ::ll::TypedStorage<2, 2, ::bgfx::IndexBufferHandle>    m_indexBuffer;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle>   m_instanceDataBuffer;
    ::ll::TypedStorage<2, 2, ::bgfx::IndirectBufferHandle> m_indirectBuffer;
    ::ll::TypedStorage<2, 2, ::bgfx::OcclusionQueryHandle> m_occlusionQuery;
    // NOLINTEND
};

} // namespace bgfx
