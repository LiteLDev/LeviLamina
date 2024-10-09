#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"

namespace mce {

struct Image {
public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();

public:
    // NOLINTBEGIN
    MCAPI Image(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);

    MCAPI struct mce::Image clone() const;

    MCAPI bool isEmpty() const;

    MCAPI struct mce::Image& operator=(struct mce::Image&&);

    MCAPI void resizeImageBytesToFitImageDescription();

    MCAPI ~Image();

    // NOLINTEND
};

}; // namespace mce
