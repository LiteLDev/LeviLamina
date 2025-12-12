#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ImageMetaListDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5a5011;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageMetaListDocument& operator=(ImageMetaListDocument const&);
    ImageMetaListDocument(ImageMetaListDocument const&);
    ImageMetaListDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void fromJson(::Json::Value const& documentObject, bool pascalCase);

    MCNAPI_C ::ImageMetaListDocument& operator=(::ImageMetaListDocument&&);

    MCNAPI_C ~ImageMetaListDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
