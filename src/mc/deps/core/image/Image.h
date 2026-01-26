#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"

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
    ::ll::TypedStorage<8, 24, ::mce::Blob>       mImageBytes;
    // NOLINTEND

public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Image(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);

    MCAPI ::mce::Image clone() const;

    MCAPI ::mce::Image& operator=(::mce::Image&&);

    MCAPI void resizeImageBytesToFitImageDescription();

    MCAPI_C void setRawImage(::mce::Blob&& contents);

    MCAPI ~Image();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::mce::Blob&& contents);

    MCAPI void* $ctor(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
