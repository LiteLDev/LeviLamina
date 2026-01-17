#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class BackendCommands : int {
    SetPipelineState           = 0,
    SetVSConstantBuffers       = 1,
    SetPSConstantBuffers       = 2,
    UpdateConstantBuffer       = 3,
    SetVertexBuffer            = 4,
    SetIndexBuffer             = 5,
    DrawIndexed                = 6,
    DrawCustomEffect           = 7,
    SetRenderTarget            = 8,
    ClearRenderTarget          = 9,
    SetScissorRect             = 10,
    SetViewport                = 11,
    ResolveRenderTarget        = 12,
    SetPSSamplers              = 13,
    SetPSTextures              = 14,
    SetStencilReference        = 15,
    Draw                       = 16,
    DrawInstanced              = 17,
    DrawIndexedInstanced       = 18,
    SetMultipleVertexBuffers   = 19,
    SetMultipleRenderTargets   = 20,
    ClearRenderTargetWithState = 21,
    PushMetadata               = 22,
    PopMetadata                = 23,
    BeginRenderPass            = 24,
    EndRenderPass              = 25,
    TransitionTextureState     = 26,
    TransitionDSTextureState   = 27,
    Count                      = 28,
};

}
