#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Blob.h"

// auto generated inclusion list
#include "mc/deps/core/mce/ImageFormat.h"
#include "mc/deps/core/mce/ImageUsage.h"

namespace mce {

struct Image {
public:
    ImageFormat imageFormat{};       // 0x0
    uint        mWidth{}, mHeight{}; // 0x4, 0x8
    uint        mUnknown{};          // 0xC RENAME ME
    ImageUsage  mUsage{};            // 0x10
    Blob        mImageBytes;         // 0x14

    [[nodiscard]] inline explicit Image(Blob&& data) : mImageBytes(std::move(data)) {}

    Image() = default;

    inline void copyRawImage(Blob const& blob) { mImageBytes = blob.clone(); }

    constexpr void setImageDescription(uint width, uint height, ImageFormat format, ImageUsage usage) {
        this->mWidth      = width;
        this->mHeight     = height;
        this->imageFormat = format;
        this->mUsage      = usage;
    }

    inline void setRawImage(Blob&& buffer) { mImageBytes = std::move(buffer); }

    Image(Image const& a1) {
        imageFormat = a1.imageFormat;
        mWidth      = a1.mWidth;
        mHeight     = a1.mHeight;
        mUsage      = a1.mUsage;
        mImageBytes = a1.mImageBytes.clone();
    }

public:
    // NOLINTBEGIN
    // symbol: ??0Image@mce@@QEAA@IIW4ImageFormat@1@W4ImageUsage@1@@Z
    MCAPI Image(uint, uint, ::mce::ImageFormat, ::mce::ImageUsage);

    // symbol: ?clone@Image@mce@@QEBA?AU12@XZ
    MCAPI struct mce::Image clone() const;

    // symbol: ?isEmpty@Image@mce@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??4Image@mce@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct mce::Image& operator=(struct mce::Image&&);

    // symbol: ?resizeImageBytesToFitImageDescription@Image@mce@@QEAAXXZ
    MCAPI void resizeImageBytesToFitImageDescription();

    // symbol: ??1Image@mce@@QEAA@XZ
    MCAPI ~Image();

    // NOLINTEND
};

}; // namespace mce
