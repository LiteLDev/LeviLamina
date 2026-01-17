#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class ResourcesCommandsStage : int {
    PreExecuteRendering          = 0,
    PostExecuteRendering         = 1,
    DestoryAllRenderingResources = 2,
    CreateGlyphResources         = 3,
};

}
