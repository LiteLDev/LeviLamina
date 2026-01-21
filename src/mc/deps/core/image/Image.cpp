#include "mc/deps/core/image/Image.h"
#include "mc/deps/core/container/BlobHelper.h"

namespace mce {

Image::Image() : imageFormat(ImageFormat::Unknown), mWidth(0), mHeight(0), mDepth(1), mUsage(ImageUsage::Unknown) {}

Image::Image(unsigned w, unsigned h, ImageFormat format, ImageUsage usage)
: imageFormat(format),
  mWidth(w),
  mHeight(h),
  mDepth(0),
  mUsage{usage},
  mImageBytes() {}

Image::Image(
    const uint32_t         w,
    const uint32_t         h,
    const uint32_t         d,
    const mce::ImageFormat format,
    const mce::ImageUsage  usage
)
: imageFormat(format),
  mWidth(w),
  mHeight(h),
  mDepth(d),
  mUsage(usage),
  mImageBytes() {}

Image::Image(const mce::Image& other)
: imageFormat(other.imageFormat),
  mWidth(other.mWidth),
  mHeight(other.mHeight),
  mDepth(other.mDepth),
  mUsage(other.mUsage),
  mImageBytes(other.mImageBytes) {}

Image::Image(mce::Image&& other)
: imageFormat(other.imageFormat),
  mWidth(other.mWidth),
  mHeight(other.mHeight),
  mDepth(other.mDepth),
  mUsage(other.mUsage),
  mImageBytes(std::move(other.mImageBytes)) {}

Image::Image(mce::Image::Storage&& blob)
: imageFormat(ImageFormat::Unknown),
  mWidth(0),
  mHeight(0),
  mDepth(1),
  mUsage(ImageUsage::Unknown),
  mImageBytes(std::move(blob)) {}

Image::~Image() = default;

Image& Image::operator=(const Image& other) {
    if (this != &other) {
        imageFormat = other.imageFormat;
        mWidth      = other.mWidth;
        mHeight     = other.mHeight;
        mDepth      = other.mDepth;
        mUsage      = other.mUsage;
        mImageBytes = other.mImageBytes;
    }
    return *this;
}

mce::Image& Image::operator=(mce::Image&& rhs) {
    if (this != &rhs) {
        imageFormat = rhs.imageFormat;
        mWidth      = rhs.mWidth;
        mHeight     = rhs.mHeight;
        mDepth      = rhs.mDepth;
        mUsage      = rhs.mUsage;
        mImageBytes = std::move(rhs.mImageBytes);
    }
    return *this;
}

void Image::setRawImage(mce::Image::Storage&& contents) { mImageBytes = std::move(contents); }

void Image::setImageDescription(
    const uint32_t         w,
    const uint32_t         h,
    const mce::ImageFormat format,
    const mce::ImageUsage  usage
) {
    setImageDescription(w, h, 1, format, usage);
}

void Image::setImageDescription(
    const uint32_t         w,
    const uint32_t         h,
    const uint32_t         d,
    const mce::ImageFormat format,
    const mce::ImageUsage  usage
) {
    mWidth      = w;
    mHeight     = h;
    mDepth      = d;
    imageFormat = format;
    mUsage      = usage;
    resizeImageBytesToFitImageDescription();
}

void Image::copyRawImage(const mce::Image::Storage& src) { mImageBytes = src; }

Image Image::clone() const {
    Image copy;
    copy.imageFormat = imageFormat;
    copy.mWidth      = mWidth;
    copy.mHeight     = mHeight;
    copy.mDepth      = mDepth;
    copy.mUsage      = mUsage;
    copy.mImageBytes = BlobHelper::clone(mImageBytes); // 深拷贝内容
    return copy;
}

bool Image::isEmpty() const { return mImageBytes.empty(); }

static size_t getBytesPerPixel(mce::ImageFormat format) {
    switch (format) {
    case ImageFormat::R8Unorm:
        return 1;
    case ImageFormat::RG8Unorm:
        return 2;
    case ImageFormat::RGB8Unorm:
        return 3;
    case ImageFormat::RGBA8Unorm:
        return 4;
    case ImageFormat::RGBA16Float:
        return 8;
    default:
        return 0;
    }
    return 0;
}

void Image::resizeImageBytesToFitImageDescription() {
    unsigned depth         = mDepth ? mDepth : 1;
    unsigned bytesPerPixel = getBytesPerPixel(imageFormat);

    std::size_t totalBytes = static_cast<std::size_t>(depth) * mWidth * mHeight * bytesPerPixel;

    if (totalBytes == 0) {
        mImageBytes = Blob();
        return;
    }

    mImageBytes = Blob(totalBytes);
}


} // namespace mce