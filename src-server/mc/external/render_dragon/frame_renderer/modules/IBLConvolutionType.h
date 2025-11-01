#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

enum class IBLConvolutionType : int {
    MipChain                   = 0,
    SpecularImportanceSampling = 1,
};

}
