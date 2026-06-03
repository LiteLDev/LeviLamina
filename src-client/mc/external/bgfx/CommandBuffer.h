#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

class CommandBuffer {
public:
    // CommandBuffer inner types define
    enum class Enum : int {
        RendererInit                           = 0,
        RendererShutdownBegin                  = 1,
        CreateVertexDecl                       = 2,
        CreateIndexBuffer                      = 3,
        CreateVertexBuffer                     = 4,
        CreateDynamicIndexBuffer               = 5,
        UpdateDynamicIndexBuffer               = 6,
        CreateDynamicVertexBuffer              = 7,
        UpdateDynamicVertexBuffer              = 8,
        SchedulePreBlasSkinningDispatch        = 9,
        CreateBottomLevelAccelerationStructure = 10,
        CreateTopLevelAccelerationStructure    = 11,
        CreateShader                           = 12,
        CreateProgram                          = 13,
        CreateTexture                          = 14,
        CreateShaderBuffer                     = 15,
        UpdateTexture                          = 16,
        ResizeTexture                          = 17,
        WrapExternalTexture                    = 18,
        UpdateShaderBuffer                     = 19,
        CreateFrameBuffer                      = 20,
        CreateUniform                          = 21,
        UpdateViewName                         = 22,
        InvalidateOcclusionQuery               = 23,
        SetName                                = 24,
        End                                    = 25,
        RendererShutdownEnd                    = 26,
        DestroyVertexDecl                      = 27,
        DestroyIndexBuffer                     = 28,
        DestroyVertexBuffer                    = 29,
        DestroyDynamicIndexBuffer              = 30,
        DestroyDynamicVertexBuffer             = 31,
        DestroyShader                          = 32,
        DestroyProgram                         = 33,
        DestroyTexture                         = 34,
        DestroyShaderBuffer                    = 35,
        DestroyFrameBuffer                     = 36,
        DestroyUniform                         = 37,
        DestroyAccelerationStructure           = 38,
        ReadTexture                            = 39,
        RequestScreenShot                      = 40,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>               m_pos;
    ::ll::TypedStorage<4, 4, uint>               m_size;
    ::ll::TypedStorage<1, 262144, uchar[262144]> m_buffer;
    // NOLINTEND
};

} // namespace bgfx
