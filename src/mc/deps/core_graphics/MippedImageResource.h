#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageResource.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class MippedImageResource : public ::cg::ImageResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::ImageBuffer>> mImageData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MippedImageResource() /*override*/ = default;

    virtual bool isEmpty() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint getSize() const /*override*/;

    virtual ::cg::ImageBuffer const* getImage(uint mipLevel) const /*override*/;

    virtual void addImage(::cg::ImageBuffer imageToAdd) /*override*/;

    virtual void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd) /*override*/;

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>
    unwrapImageData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD bool $isEmpty() const;

    MCFOLD bool $isValid() const;

    MCFOLD uint $getSize() const;

    MCAPI ::cg::ImageBuffer const* $getImage(uint mipLevel) const;

    MCAPI void $addImage(::cg::ImageBuffer imageToAdd);

    MCAPI void $addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCAPI ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource> $unwrapImageData();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
