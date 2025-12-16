#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class ImageResource {
public:
    // ImageResource inner types define
    using ImageData =
        ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>;

    using ImageHash = uint64;

    using StreamedResource = ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>;

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

    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
    unwrapImageData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cg
