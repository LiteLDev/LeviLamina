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

#ifdef LL_PLAT_S
    virtual ::cg::ImageBuffer const* getImage(uint) const /*override*/;
#else // LL_PLAT_C
    virtual ::cg::ImageBuffer const* getImage(uint mipLevel) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void addImage(::cg::ImageBuffer) /*override*/;
#else // LL_PLAT_C
    virtual void addImage(::cg::ImageBuffer imageToAdd) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void addImage(::std::shared_ptr<::cg::ImageResource>) /*override*/;
#else // LL_PLAT_C
    virtual void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd) /*override*/;
#endif

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>
    unwrapImageData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI bool $isEmpty() const;
#else // LL_PLAT_C
    MCFOLD bool $isEmpty() const;
#endif

#ifdef LL_PLAT_S
    MCAPI bool $isValid() const;
#else // LL_PLAT_C
    MCFOLD bool $isValid() const;
#endif

#ifdef LL_PLAT_S
    MCAPI uint $getSize() const;
#else // LL_PLAT_C
    MCFOLD uint $getSize() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::cg::ImageBuffer const* $getImage(uint) const;
#else // LL_PLAT_C
    MCAPI ::cg::ImageBuffer const* $getImage(uint mipLevel) const;
#endif

#ifdef LL_PLAT_S
    MCAPI void $addImage(::cg::ImageBuffer);
#else // LL_PLAT_C
    MCAPI void $addImage(::cg::ImageBuffer imageToAdd);
#endif

#ifdef LL_PLAT_S
    MCAPI void $addImage(::std::shared_ptr<::cg::ImageResource>);
#else // LL_PLAT_C
    MCAPI void $addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);
#endif

    MCAPI ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource> $unwrapImageData();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
