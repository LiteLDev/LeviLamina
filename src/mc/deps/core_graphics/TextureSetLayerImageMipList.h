#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

namespace cg {

class TextureSetLayerImageMipList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc6e034;
    ::ll::UntypedStorage<8, 16> mUnk83b78a;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetLayerImageMipList& operator=(TextureSetLayerImageMipList const&);
    TextureSetLayerImageMipList(TextureSetLayerImageMipList const&);
    TextureSetLayerImageMipList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCNAPI_C void addImage(::cg::ImageBuffer imageToAdd);
    // NOLINTEND
};

} // namespace cg
