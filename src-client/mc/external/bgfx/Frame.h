#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/BlitItem.h"
#include "mc/external/bgfx/CommandBuffer.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/FrameCache.h"
#include "mc/external/bgfx/GuardedFreeHandleDynamic.h"
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/bgfx/ProgramHandle.h"
#include "mc/external/bgfx/RayTracingConfiguration.h"
#include "mc/external/bgfx/RayTracingResources.h"
#include "mc/external/bgfx/RenderBind.h"
#include "mc/external/bgfx/RenderItem.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/bgfx/ShaderBufferHandle.h"
#include "mc/external/bgfx/ShaderHandle.h"
#include "mc/external/bgfx/Stats.h"
#include "mc/external/bgfx/UniformHandle.h"
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"
#include "mc/external/bgfx/View.h"
#include "mc/external/bgfx/ViewStats.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct RangedBindings; }
namespace bgfx { struct TextVideoMem; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformBuffer; }
// clang-format on

namespace bgfx {

struct Frame {
public:
    // Frame inner types declare
    // clang-format off
    template<typename T0, int T1> struct FreeHandle;
    // clang-format on

    // Frame inner types define
    template <typename T0, int T1>
    struct FreeHandle {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 512, ushort[256]>                                                  m_viewRemap;
    ::ll::TypedStorage<4, 256, float[16][4]>                                                 m_colorPalette;
    ::ll::TypedStorage<8, 114688, ::bgfx::View[256]>                                         m_view;
    ::ll::TypedStorage<4, 1024, int[256]>                                                    m_occlusion;
    ::ll::TypedStorage<8, 524288, uint64[65536]>                                             m_sortKeys;
    ::ll::TypedStorage<2, 131072, ushort[65536]>                                             m_sortValues;
    ::ll::TypedStorage<8, 8388608, ::bgfx::RenderItem[65536]>                                m_renderItem;
    ::ll::TypedStorage<4, 88080384, ::bgfx::RenderBind[65536]>                               m_renderItemBind;
    ::ll::TypedStorage<8, 524288, ::bgfx::RangedBindings* [65536]>                           m_rangedRenderItemBind;
    ::ll::TypedStorage<4, 4100, uint[1025]>                                                  m_blitKeys;
    ::ll::TypedStorage<2, 65600, ::bgfx::BlitItem[1025]>                                     m_blitItem;
    ::ll::TypedStorage<8, 4718624, ::bgfx::FrameCache>                                       m_frameCache;
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer**>                                        m_uniformBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                           m_numRenderItems;
    ::ll::TypedStorage<2, 2, ushort>                                                         m_numBlitItems;
    ::ll::TypedStorage<4, 4, uint>                                                           m_iboffset;
    ::ll::TypedStorage<4, 4, uint>                                                           m_vboffset;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientIndexBuffer*>                                  m_transientIb;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientVertexBuffer*>                                 m_transientVb;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution>                                            m_resolution;
    ::ll::TypedStorage<4, 4, uint>                                                           m_debug;
    ::ll::TypedStorage<4, 262152, ::bgfx::CommandBuffer>                                     m_cmdPre;
    ::ll::TypedStorage<4, 262152, ::bgfx::CommandBuffer>                                     m_cmdPost;
    ::ll::TypedStorage<2, 8194, ::bgfx::Frame::FreeHandle<::bgfx::IndexBufferHandle, 4096>>  m_freeIndexBuffer;
    ::ll::TypedStorage<2, 130, ::bgfx::Frame::FreeHandle<::bgfx::VertexDeclHandle, 64>>      m_freeVertexDecl;
    ::ll::TypedStorage<2, 8194, ::bgfx::Frame::FreeHandle<::bgfx::VertexBufferHandle, 4096>> m_freeVertexBuffer;
    ::ll::TypedStorage<2, 8194, ::bgfx::Frame::FreeHandle<::bgfx::ShaderHandle, 4096>>       m_freeShader;
    ::ll::TypedStorage<2, 4098, ::bgfx::Frame::FreeHandle<::bgfx::ProgramHandle, 2048>>      m_freeProgram;
    ::ll::TypedStorage<8, 8224, ::bgfx::GuardedFreeHandleDynamic<::bgfx::TextureHandle, 4096, 4096>> m_freeTexture;
    ::ll::TypedStorage<2, 8194, ::bgfx::Frame::FreeHandle<::bgfx::ShaderBufferHandle, 4096>>         m_freeShaderBuffer;
    ::ll::TypedStorage<2, 258, ::bgfx::Frame::FreeHandle<::bgfx::FrameBufferHandle, 128>>            m_freeFrameBuffer;
    ::ll::TypedStorage<2, 1026, ::bgfx::Frame::FreeHandle<::bgfx::UniformHandle, 512>>               m_freeUniform;
    ::ll::TypedStorage<2, 65538, ::bgfx::Frame::FreeHandle<::bgfx::AccelerationStructureHandle, 32768>>
                                                                m_freeAccelerationStructure;
    ::ll::TypedStorage<8, 8, ::bgfx::TextVideoMem*>             m_textVideoMem;
    ::ll::TypedStorage<8, 208, ::bgfx::Stats>                   m_perfStats;
    ::ll::TypedStorage<2, 2, ushort>                            m_numViewStats;
    ::ll::TypedStorage<8, 79872, ::bgfx::ViewStats[256]>        m_viewStats;
    ::ll::TypedStorage<8, 8, int64>                             m_waitSubmit;
    ::ll::TypedStorage<8, 8, int64>                             m_waitRender;
    ::ll::TypedStorage<4, 4, uint>                              m_frameNum;
    ::ll::TypedStorage<4, 488, ::bgfx::RayTracingConfiguration> m_rtConfig;
    ::ll::TypedStorage<8, 192, ::bgfx::RayTracingResources>     m_rtResources;
    ::ll::TypedStorage<1, 1, bool>                              m_capture;
    ::ll::TypedStorage<1, 1, bool>                              m_skipFlip;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Frame();

    MCAPI void cloneRangedBindingsToRenderItem(uint _renderItemIdx, ::bgfx::RangedBindings const& _rangedBindings);

    MCAPI void create();

    MCAPI void destroy();

    MCAPI void reset();

    MCAPI void sort();

    MCAPI ~Frame();
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

} // namespace bgfx
