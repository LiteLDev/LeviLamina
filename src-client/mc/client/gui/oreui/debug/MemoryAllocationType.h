#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class MemoryAllocationType : uchar {
    CohtmlUnknown          = 0,
    CohtmlUntagged         = 1,
    CohtmlSystem           = 2,
    CohtmlLogging          = 3,
    CohtmlLoader           = 4,
    CohtmlDOM              = 5,
    CohtmlDOMStatic        = 6,
    CohtmlLayout           = 7,
    CohtmlCSS              = 8,
    CohtmlCSSStatic        = 9,
    CohtmlTaskSystemMemory = 10,
    CohtmlDisplay          = 11,
    CohtmlProfiling        = 12,
    CohtmlHTMLParser       = 13,
    CohtmlTempAllocator    = 14,
    CohtmlPoolAllocator    = 15,
    CohtmlDump             = 16,
    CohtmlScript           = 17,
    CohtmlXML              = 18,
    CohtmlServer           = 19,
    CohtmlInspector        = 20,
    CohtmlSVG              = 21,
    CohtmlUnityPlugin      = 22,
    CohtmlUriParser        = 23,
    CohtmlMedia            = 24,
    CohtmlJSON             = 25,
    CohtmlScriptEngine     = 26,
    CpuVertexBuffer        = 27,
    GpuVertexBuffer        = 28,
    CpuIndexBuffer         = 29,
    GpuIndexBuffer         = 30,
    Texture                = 31,
    DepthStencilTexture    = 32,
    StencilTexture         = 33,
    DepthTexture           = 34,
    Count                  = 35,
};

}
