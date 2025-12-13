#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class CompressedImageBuffer; }
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
namespace cg { class TextureSetLayerImageMipList; }
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class TextureSetImageContainer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1331b4;
    ::ll::UntypedStorage<8, 24> mUnkfe1364;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetImageContainer& operator=(TextureSetImageContainer const&);
    TextureSetImageContainer(TextureSetImageContainer const&);
    TextureSetImageContainer();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~TextureSetImageContainer() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~TextureSetImageContainer() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void addImage(::cg::TextureSetLayerType const& layerType, ::cg::ImageBuffer imageBuffer);

    MCNAPI_C void
    addImage(::cg::TextureSetLayerType const& layerType, ::std::shared_ptr<::cg::ImageResource> imageResource);

    MCNAPI_C ::cg::ImageDescription
    getImageDescription(::cg::TextureSetLayerType const& layerType, uint64 mipLevel) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
