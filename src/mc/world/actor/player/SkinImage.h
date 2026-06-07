#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"

struct SkinImage : public ::mce::Image {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinImage();

    MCAPI explicit SkinImage(::mce::Image&& image);

    MCAPI bool operator==(::SkinImage const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::Image&& image);
    // NOLINTEND
};
