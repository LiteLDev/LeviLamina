#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class RenoirTraceEventName : int {
    ProcessFrontendCommands         = 0,
    ProcessLayer                    = 1,
    BatchCommands                   = 2,
    DistributeLayers                = 3,
    SubmitGlyphs                    = 4,
    SubmitManagerChanges            = 5,
    EndFrame                        = 6,
    ProcessFrontendCommandsOnly     = 7,
    DrawSDFGlyphs                   = 8,
    DrawSubLayer                    = 9,
    DrawSubLayerWithShaderFilter    = 10,
    DrawSubLayerWithShaderBlendMode = 11,
    DrawSubLayerWithCustomEffect    = 12,
    DrawFillRectShaderAndMask       = 13,
    ExecuteBackendBuffers           = 14,
    BackendExecute                  = 15,
    ProcessSimpleSublayer           = 16,
    TextureCreated                  = 17,
    TextureDestroyed                = 18,
    VBCreated                       = 19,
    VBDestroyed                     = 20,
    IBCreated                       = 21,
    IBDestroyed                     = 22,
    ImagesCounter                   = 23,
    SurfacesCounter                 = 24,
    ScratchTexturesCounter          = 25,
    LayerTexturesCounter            = 26,
    GPUMemory                       = 27,
    RenoirFrameMemory               = 28,
    STMScratchTexturesLimitMemory   = 29,
    STMScratchTexturesCurrentMemory = 30,
    STMLayerTexturesLimitMemory     = 31,
    STMLayerTexturesCurrentMemory   = 32,
    Count                           = 33,
};

}
