#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"
#include "mc/deps/core/math/AlphaUsage.h"

namespace mce {

struct Image {

    using Storage = mce::Blob;

    mce::ImageFormat    imageFormat;
    uint32              mWidth;
    uint32              mHeight;
    uint32              mDepth;
    mce::ImageUsage     mUsage;
    mce::AlphaUsage     mAlphaUsage;
    mce::Image::Storage mImageBytes;

    LLNDAPI Image();
    LLNDAPI Image(uint32 w, uint32 h, mce::ImageFormat format, mce::ImageUsage usage);
    LLNDAPI Image(uint32 w, uint32 h, uint32 d, mce::ImageFormat format, mce::ImageUsage usage);
    LLNDAPI Image(mce::Image const&);
    LLNDAPI Image(mce::Image&&);
    LLNDAPI Image(mce::Image::Storage&&);
    LLAPI ~Image();

    LLAPI mce::Image& operator=(mce::Image const&);
    LLAPI mce::Image& operator=(mce::Image&&);
    LLAPI void        setRawImage(mce::Image::Storage&& contents);
    LLAPI void        setImageDescription(uint32 w, uint32 h, mce::ImageFormat format, mce::ImageUsage usage);
    LLAPI void        setImageDescription(uint32 w, uint32 h, uint32 d, mce::ImageFormat format, mce::ImageUsage usage);
    LLAPI void        copyRawImage(mce::Image::Storage const&);
    LLAPI mce::Image clone() const;
    LLAPI bool       isEmpty() const;
    LLAPI void       resizeImageBytesToFitImageDescription();
};

} // namespace mce
