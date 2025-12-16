#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageResource.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class StreamedImageResource : public ::cg::ImageResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>> mImageData;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamedImageResource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StreamedImageResource() /*override*/ = default;

    virtual bool isEmpty() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint getSize() const /*override*/;

    virtual ::cg::ImageBuffer const* getImage(uint mipLevel) const /*override*/;

    virtual void addImage(::cg::ImageBuffer imageToAdd) /*override*/;

    virtual void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd) /*override*/;

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
    unwrapImageData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C StreamedImageResource(::std::vector<::cg::ImageBuffer>&& imageBuffers, uint64&& hash);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::std::vector<::cg::ImageBuffer>&& imageBuffers, uint64&& hash);
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

    MCAPI ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
    $unwrapImageData();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
