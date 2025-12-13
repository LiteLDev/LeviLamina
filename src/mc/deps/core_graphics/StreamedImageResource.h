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
    ::ll::UntypedStorage<8, 32> mUnkf03a6a;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamedImageResource& operator=(StreamedImageResource const&);
    StreamedImageResource(StreamedImageResource const&);
    StreamedImageResource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamedImageResource() /*override*/ = default;

    // vIndex: 1
    virtual bool isEmpty() const /*override*/;

    // vIndex: 2
    virtual bool isValid() const /*override*/;

    // vIndex: 3
    virtual uint getSize() const /*override*/;

    // vIndex: 4
    virtual ::cg::ImageBuffer const* getImage(uint) const /*override*/;

    // vIndex: 6
    virtual void addImage(::cg::ImageBuffer) /*override*/;

    // vIndex: 5
    virtual void addImage(::std::shared_ptr<::cg::ImageResource>) /*override*/;

    // vIndex: 7
    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::std::pair<::std::vector<::cg::ImageBuffer>, uint64>>
    unwrapImageData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cg
