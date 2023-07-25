#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class ImageBuffer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CG_IMAGEBUFFER
public:
    ImageBuffer& operator=(ImageBuffer const&) = delete;
    ImageBuffer(ImageBuffer const&)            = delete;
    ImageBuffer()                              = delete;
#endif

public:
};

}; // namespace cg
