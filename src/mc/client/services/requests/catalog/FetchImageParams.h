#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CommonImage;
// clang-format on

class FetchImageParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5a30de;
    // NOLINTEND

public:
    // prevent constructor by default
    FetchImageParams& operator=(FetchImageParams const&);
    FetchImageParams(FetchImageParams const&);
    FetchImageParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C FetchImageParams(::CommonImage const& commonImage, ::glm::ivec2 const& dim);

    MCNAPI_C FetchImageParams(::CommonImage const& commonImage, int width, int height);

    MCNAPI_C ~FetchImageParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::CommonImage const& commonImage, ::glm::ivec2 const& dim);

    MCNAPI_C void* $ctor(::CommonImage const& commonImage, int width, int height);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
