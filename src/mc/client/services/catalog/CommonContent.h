#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct CommonContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf05135;
    ::ll::UntypedStorage<8, 32> mUnk2d314a;
    ::ll::UntypedStorage<1, 1>  mUnkce35b4;
    ::ll::UntypedStorage<8, 32> mUnkfe172d;
    ::ll::UntypedStorage<8, 32> mUnkd96e24;
    ::ll::UntypedStorage<8, 24> mUnkce8ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonContent& operator=(CommonContent const&);
    CommonContent(CommonContent const&);
    CommonContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CommonContent(::CommonContent&&);

    MCNAPI_C CommonContent(::Json::Value const& commonContentJson, bool pascalCase);

    MCNAPI_C ~CommonContent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::CommonContent&&);

    MCNAPI_C void* $ctor(::Json::Value const& commonContentJson, bool pascalCase);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
