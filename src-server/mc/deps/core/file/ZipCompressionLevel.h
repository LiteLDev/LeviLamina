#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

enum class ZipCompressionLevel : int {
    Default = 0,
    NoCompression = 1,
    BestSpeed = 2,
    BestCompression = 3,
};

}
