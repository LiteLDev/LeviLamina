#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk566687;
    ::ll::UntypedStorage<8, 32> mUnk6fb5d6;
    ::ll::UntypedStorage<8, 32> mUnk9220cb;
    ::ll::UntypedStorage<8, 32> mUnk3ac088;
    ::ll::UntypedStorage<1, 1>  mUnkd44fab;
    ::ll::UntypedStorage<4, 12> mUnkdf0cdb;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageData& operator=(ImageData const&);
    ImageData(ImageData const&);
    ImageData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ImageData(::std::string name, ::Json::Value const& json);

    MCNAPI_C bool generateNonAnimatedImage();

    MCNAPI_C ~ImageData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string name, ::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
