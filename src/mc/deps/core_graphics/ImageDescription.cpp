#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core_graphics/CompressedTextureUtils.h"
#include <cassert>

namespace cg {

ImageDescription::ImageDescription()
: mWidth(0),
  mHeight(0),
  mTextureFormat(mce::TextureFormat::UnknownTextureFormat),
  mColorSpace(ColorSpace::Unknown),
  mImageType(ImageType::Texture2D),
  mArraySizeOrDepth(1) {}

ImageDescription::ImageDescription(
    uint32             width,
    uint32             height,
    mce::TextureFormat fmt,
    cg::ColorSpace     colorSpace,
    cg::ImageType      type,
    uint32             arraySizeOrDepth
)
: mWidth(width),
  mHeight(height),
  mTextureFormat(fmt),
  mColorSpace(colorSpace),
  mImageType(type),
  mArraySizeOrDepth(arraySizeOrDepth) {}

ImageDescription::ImageDescription(const mce::Image& image) {
    mArraySizeOrDepth = 1;
    mWidth            = image.mWidth;
    mHeight           = image.mHeight;
    mTextureFormat    = mce::translateImageFormat(image.imageFormat);
    mColorSpace       = cg::translateImageUsage(image.mUsage);
    mImageType        = cg::ImageType::Texture2D;
}

void ImageDescription::setArraySize(uint32 size) {
    if (mImageType != ImageType::Texture3D && mImageType != ImageType::CubemapDeprecated) {
        mArraySizeOrDepth = size;
    } else {
        assert(false && "Cannot set array size for cubemap or 3D textures");
        mArraySizeOrDepth = size;
    }
}

uint32 ImageDescription::getSubimageSize() const {
    if (mWidth && mHeight) return mWidth * mHeight * getStrideFromFormat(mTextureFormat);
    return 0;
}

uint32 ImageDescription::getStrideFromFormat(mce::TextureFormat textureFormat) {
    using TF = mce::TextureFormat;

    switch (textureFormat) {
    case TF::R32g32b32a32Float:
        return 16;

    case TF::R16g16b16a16Float:
    case TF::R16g16b16a16Unorm:
    case TF::R32g32Float:
        return 8;

    case TF::R10g10b10a2Unorm:
    case TF::R11g11b10Float:
    case TF::R8g8b8a8Unorm:
    case TF::R8g8b8a8UnormSrgb:
    case TF::R16g16Float:
    case TF::R16g16Unorm:
    case TF::R16g16Uint:
    case TF::R16g16Snorm:
    case TF::D32Float:
    case TF::R32Float:
    case TF::R32Uint:
    case TF::R24g8Typeless:
    case TF::D24UnormS8Uint:
    case TF::R24UnormX8Typeless:
    case TF::Bc3Unorm:
    case TF::B8g8r8a8Unorm:
    case TF::B8g8r8a8UnormSrgb:
    case TF::Bc7Unorm:
        return 4;

    case TF::R8g8Unorm:
    case TF::R8g8Snorm:
    case TF::R16Float:
        return 2;

    case TF::R8Unorm:
    case TF::R8Uint:
    case TF::A8Unorm:
        return 1;

    case TF::R8g8b8Unorm:
        return 3;

    default:
        assert(false && "Unknown texture format");
        return 0;
    }
}


uint64_t ImageDescription::getStorageSize() const {
    using namespace mce;
    if ((uint32)((uint32)mTextureFormat - 117) <= 0x1B)
        return mce::getCompressedImageSize(mTextureFormat, mWidth, mHeight, 1);

    uint32 depthOrArray = (mImageType == ImageType::Texture3D) ? mArraySizeOrDepth : getArraySize();

    uint32 subSize = mWidth && mHeight ? mWidth * mHeight * getStrideFromFormat(mTextureFormat) : 0;

    uint32 cubeFaces = (mImageType == ImageType::TextureCube) ? 6 : 1;
    return static_cast<uint64_t>(subSize) * depthOrArray * cubeFaces;
}

uint32 ImageDescription::getDepth() const {
    if (mImageType == ImageType::Texture3D) return mArraySizeOrDepth;
    assert(false && "Cannot get depth if it is not a 3D texture!");
    return 0;
}

uint32 ImageDescription::getArraySize() const {
    if (mImageType == ImageType::Texture3D) {
        assert(false && "Array for 3D texture is not supported!");
    }
    return (mImageType == ImageType::CubemapDeprecated) ? 6 : mArraySizeOrDepth;
}

bool ImageDescription::operator!=(const ImageDescription& rhs) const {
    return mWidth != rhs.mWidth || mHeight != rhs.mHeight || mTextureFormat != rhs.mTextureFormat
        || mColorSpace != rhs.mColorSpace || mArraySizeOrDepth != rhs.mArraySizeOrDepth;
}

} // namespace cg