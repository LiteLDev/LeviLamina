#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"

struct SkinImage : public ::mce::Image {
public:
    // prevent constructor by default
    SkinImage& operator=(SkinImage const&);
    SkinImage(SkinImage const&);
    SkinImage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SkinImage(::mce::Image&& image);

    MCFOLD ::SkinImage& operator=(::SkinImage&&);

    MCAPI bool operator==(::SkinImage const& rhs) const;

    MCAPI ~SkinImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Image&& image);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
