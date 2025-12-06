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
    MCNAPI explicit Image(::mce::Blob&& contents);

    MCNAPI Image(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);

    MCNAPI ::mce::Image clone() const;

    MCNAPI ::mce::Image& operator=(::mce::Image&&);

    MCNAPI void resizeImageBytesToFitImageDescription();

    MCNAPI void setRawImage(::mce::Blob&& contents);

    MCNAPI ~Image();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Blob&& contents);

    MCNAPI void* $ctor(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
