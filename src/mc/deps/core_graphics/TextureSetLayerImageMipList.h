#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

namespace cg {

class TextureSetLayerImageMipList {
public:
    // TextureSetLayerImageMipList inner types define
    using TextureSetImageList = ::std::shared_ptr<::cg::ImageResource>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>               mLayerType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cg::ImageResource>> mImageList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCAPI_C void addImage(::cg::ImageBuffer imageToAdd);
    // NOLINTEND
};

} // namespace cg
