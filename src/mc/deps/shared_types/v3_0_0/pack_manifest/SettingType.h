#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

enum class SettingType : uchar {
    Label    = 0,
    Slider   = 1,
    Toggle   = 2,
    Dropdown = 3,
};

}
