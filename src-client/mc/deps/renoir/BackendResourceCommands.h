#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class BackendResourceCommands : int {
    WrapUserRT               = 0,
    CreateTexture            = 1,
    CreateTextureWithDataPtr = 2,
    CreateDSTexture          = 3,
    UpdateTexture            = 4,
    WrapUserTexture          = 5,
    CreateVertexBuffer       = 6,
    DestroyVertexBuffer      = 7,
    CreateIndexBuffer        = 8,
    DestroyIndexBuffer       = 9,
    DestroyTexture           = 10,
    DestroyDSTexture         = 11,
    CreateConstantBuffer     = 12,
    DestroyConstantBuffer    = 13,
    CreatePSO                = 14,
    DestroyPSO               = 15,
    CreateSampler            = 16,
    DestroySampler           = 17,
    SetDebugName             = 18,
    SetDSDebugName           = 19,
    SetVBODebugName          = 20,
    SetIBODebugName          = 21,
    SetPSODebugName          = 22,
    SetCBODebugName          = 23,
    SetSamplerDebugName      = 24,
    TransitionTextureState   = 25,
    Count                    = 26,
};

}
