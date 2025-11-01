#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::ItemTransforms {

enum class Type : uint {
    Gui = 0,
    FirstpersonRighthand = 1,
    FirstpersonLefthand = 2,
    ThirdpersonRighthand = 3,
    ThirdpersonLefthand = 4,
    Ground = 5,
    Fixed = 6,
    Head = 7,
    Embedded = 8,
    Max = 9,
};

}
