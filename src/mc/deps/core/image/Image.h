#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"
#include "mc/deps/core/math/AlphaUsage.h"

namespace mce {

struct Image {
public:
    // Image inner types define
    using Storage = ::mce::Blob;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::mce::ImageFormat> imageFormat;
    ::ll::TypedStorage<4, 4, uint>               mWidth;
    ::ll::TypedStorage<4, 4, uint>               mHeight;
    ::ll::TypedStorage<4, 4, uint>               mDepth;
    ::ll::TypedStorage<1, 1, ::mce::ImageUsage>  mUsage;
    ::ll::TypedStorage<1, 1, ::mce::AlphaUsage>  mAlphaUsage;
    ::ll::TypedStorage<8, 24, ::mce::Blob>       mImageBytes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::mce::Image clone() const;

    MCAPI void resizeImageBytesToFitImageDescription();
#endif
    // NOLINTEND
};

} // namespace mce
