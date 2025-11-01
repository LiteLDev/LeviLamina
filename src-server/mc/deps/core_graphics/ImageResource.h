#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class ImageResource {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImageResource() = default;

    // vIndex: 1
    virtual bool isEmpty() const = 0;

    // vIndex: 2
    virtual bool isValid() const = 0;

    // vIndex: 3
    virtual uint getSize() const = 0;

    // vIndex: 4
    virtual ::cg::ImageBuffer const* getImage(uint) const = 0;

    // vIndex: 6
    virtual void addImage(::cg::ImageBuffer) = 0;

    // vIndex: 5
    virtual void addImage(::std::shared_ptr<::cg::ImageResource>) = 0;

    // vIndex: 7
    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>> unwrapImageData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
