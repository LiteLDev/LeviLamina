#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "Blob.h"
#include "ImageFormat.h"
#include "ImageUsage.h"

namespace mce {

struct Image {

public:
    ImageFormat imageFormat{};       // 0x0
    uint32_t    mWidth{}, mHeight{}; // 0x4, 0x8
    ImageUsage  mUsage{};            // 0xC
    Blob        mImageBytes;         // 0x10

    explicit constexpr Image(Blob&& data) : mImageBytes(std::move(data)) {}

    constexpr Image() = default;

    constexpr void copyRawImage(Blob const& blob) { mImageBytes = blob.clone(); }

    constexpr void setImageDescription(unsigned width, unsigned height, ImageFormat format, ImageUsage usage) {
        this->mWidth      = width;
        this->mHeight     = height;
        this->imageFormat = format;
        this->mUsage      = usage;
    }

    constexpr void setRawImage(Blob&& buffer) { mImageBytes = std::move(buffer); }

    Image(const Image& a1) {
        imageFormat = a1.imageFormat;
        mWidth      = a1.mWidth;
        mHeight     = a1.mHeight;
        mUsage      = a1.mUsage;
        mImageBytes = a1.mImageBytes.clone();
    }

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Image\@mce\@\@QEAA\@IIW4ImageFormat\@1\@W4ImageUsage\@1\@\@Z
     */
    MCAPI Image(unsigned int, unsigned int, enum class mce::ImageFormat, enum class mce::ImageUsage);
    /**
     * @symbol ?clone\@Image\@mce\@\@QEBA?AU12\@XZ
     */
    MCAPI struct mce::Image clone() const;
    /**
     * @symbol ?isEmpty\@Image\@mce\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??4Image\@mce\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct mce::Image& operator=(struct mce::Image&&);
    /**
     * @symbol ?resizeImageBytesToFitImageDescription\@Image\@mce\@\@QEAAXXZ
     */
    MCAPI void resizeImageBytesToFitImageDescription();
    /**
     * @symbol ??1Image\@mce\@\@QEAA\@XZ
     */
    MCAPI ~Image();
    // NOLINTEND
};

}; // namespace mce
