#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Image {
public:
    // Image inner types define
    enum class ImageMimeType : int {
        Png = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk214b13;
    ::ll::UntypedStorage<4, 8>  mUnk6ff5fa;
    ::ll::UntypedStorage<4, 4>  mUnk8e80bf;
    ::ll::UntypedStorage<8, 32> mUnkba93ec;
    ::ll::UntypedStorage<4, 4>  mUnk6b4963;
    // NOLINTEND

public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Json::Value serialize() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
