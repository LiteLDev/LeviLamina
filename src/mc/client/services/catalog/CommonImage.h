#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct CommonImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7da705;
    ::ll::UntypedStorage<8, 32> mUnkf74580;
    ::ll::UntypedStorage<8, 32> mUnk68942a;
    ::ll::UntypedStorage<8, 32> mUnk71ca84;
    ::ll::UntypedStorage<8, 32> mUnkf1613e;
    ::ll::UntypedStorage<8, 32> mUnk1e28f9;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonImage(CommonImage const&);
    CommonImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CommonImage(::CommonImage&&);

    MCNAPI_C CommonImage(::Json::Value const& obj, bool pascalCase);

    MCNAPI_C bool hasValidUrl() const;

    MCNAPI_C ::CommonImage& operator=(::CommonImage&&);

    MCNAPI_C ::CommonImage& operator=(::CommonImage const&);

    MCNAPI_C ~CommonImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::CommonImage&&);

    MCNAPI_C void* $ctor(::Json::Value const& obj, bool pascalCase);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
