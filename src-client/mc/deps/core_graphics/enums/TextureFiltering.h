#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class TextureFiltering : uchar {
    PointFiltering          = 0,
    BilinearFiltering       = 1,
    TrilinearFiltering      = 2,
    MipMapBilinearFiltering = 3,
    TexelAA                 = 4,
    Pcf                     = 5,
};

}
