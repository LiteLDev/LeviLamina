#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"

namespace mce {

struct Image {
    using Storage = mce::Blob;
    Image();
    Image(const uint32 w, const uint32 h, const mce::ImageFormat format, const mce::ImageUsage usage);
    Image(const uint32, const uint32, const uint32, const mce::ImageFormat, const mce::ImageUsage);
    Image(const mce::Image&);
    Image(mce::Image&&);
    Image(mce::Image::Storage&&);
    ~Image();
    mce::Image& operator=(const mce::Image&);
    mce::Image& operator=(mce::Image&&);
    void        setRawImage(mce::Image::Storage&& contents);
    void        setImageDescription(const uint32, const uint32, const mce::ImageFormat, const mce::ImageUsage);
    void setImageDescription(const uint32, const uint32, const uint32, const mce::ImageFormat, const mce::ImageUsage);
    void copyRawImage(const mce::Image::Storage&);
    mce::Image          clone() const;
    bool                isEmpty() const;
    void                resizeImageBytesToFitImageDescription();
    mce::ImageFormat    imageFormat;
    uint32              mWidth;
    uint32              mHeight;
    uint32              mDepth;
    mce::ImageUsage     mUsage;
    mce::Image::Storage mImageBytes;
};

} // namespace mce
