#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"

// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace cg {

struct ImageDescription {
    ImageDescription();
    ImageDescription(
        uint32             width,
        uint32             height,
        mce::TextureFormat format,
        cg::ColorSpace     colorSpace,
        cg::ImageType      imageType,
        uint32             arraySizeOrDepth
    );
    explicit ImageDescription(const mce::Image& image);
    ImageDescription(const ImageDescription&)            = default;
    ImageDescription& operator=(const ImageDescription&) = default;

    bool operator!=(const ImageDescription& rhs) const;
    bool operator==(const ImageDescription& rhs) const { return !(*this != rhs); }


    void                 setArraySize(uint32 size);
    [[nodiscard]] uint32 getArraySize() const;
    [[nodiscard]] uint32 getDepth() const;
    [[nodiscard]] uint32 getSubimageSize() const;
    [[nodiscard]] uint64 getStorageSize() const;

    static uint32 getStrideFromFormat(mce::TextureFormat fmt);

    uint32             mWidth{0};
    uint32             mHeight{0};
    mce::TextureFormat mTextureFormat;
    cg::ColorSpace     mColorSpace{cg::ColorSpace::Unknown};
    cg::ImageType      mImageType{cg::ImageType::Texture2D};

private:
    uint32 mArraySizeOrDepth{1};
};

} // namespace cg