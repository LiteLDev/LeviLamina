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
    ::ll::UntypedStorage<8, 24> mUnkaa0e52;
    // NOLINTEND

public:
    // prevent constructor by default
    MippedImageResource& operator=(MippedImageResource const&);
    MippedImageResource(MippedImageResource const&);
    MippedImageResource();

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

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
    unwrapImageData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isEmpty() const;

    MCNAPI bool $isValid() const;

    MCNAPI uint $getSize() const;

    MCNAPI ::cg::ImageBuffer const* $getImage(uint mipLevel) const;

    MCNAPI void $addImage(::cg::ImageBuffer imageToAdd);

    MCNAPI void $addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCNAPI ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
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
