#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct GallerySize {
public:
    // prevent constructor by default
    GallerySize& operator=(GallerySize const&);
    GallerySize(GallerySize const&);
    GallerySize();
};

} // namespace Social
