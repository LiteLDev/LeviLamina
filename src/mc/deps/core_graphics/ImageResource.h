#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class ImageResource {
public:
    // ImageResource inner types declare
    // clang-format off
    struct StreamedResource;
    // clang-format on

    // ImageResource inner types define
    struct StreamedResource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::cg::ImageBuffer>> mLoadedMipData;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>>             mLoadedMipLevels;
        ::ll::TypedStorage<8, 8, uint64>                            mImageHash;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamedResource& operator=(StreamedResource const&);
        StreamedResource(StreamedResource const&);
        StreamedResource();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C ::cg::ImageResource::StreamedResource& operator=(::cg::ImageResource::StreamedResource&&);
        // NOLINTEND
    };

    using ImageData = ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>;

    using ImageHash = uint64;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageResource() = default;

    virtual bool isEmpty() const = 0;

    virtual bool isValid() const = 0;

    virtual uint getSize() const = 0;

    virtual ::cg::ImageBuffer const* getImage(uint) const = 0;

    virtual void addImage(::cg::ImageBuffer) = 0;

    virtual void addImage(::std::shared_ptr<::cg::ImageResource>) = 0;

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>
    unwrapImageData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cg
