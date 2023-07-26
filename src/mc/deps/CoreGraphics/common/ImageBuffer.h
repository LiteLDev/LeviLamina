#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class ImageBuffer {

public:
    // prevent constructor by default
    ImageBuffer& operator=(ImageBuffer const&) = delete;
    ImageBuffer(ImageBuffer const&)            = delete;
    ImageBuffer()                              = delete;
};

}; // namespace cg
