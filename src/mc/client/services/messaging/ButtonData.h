#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk51d750;
    ::ll::UntypedStorage<8, 32> mUnk5ee99e;
    ::ll::UntypedStorage<8, 32> mUnk1e5cb0;
    ::ll::UntypedStorage<8, 32> mUnk6c5834;
    ::ll::UntypedStorage<4, 4>  mUnkcb4e4e;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonData& operator=(ButtonData const&);
    ButtonData(ButtonData const&);
    ButtonData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ButtonData(::std::string name, ::Json::Value const& json);

    MCNAPI_C ::ButtonData& operator=(::ButtonData&&);

    MCNAPI_C ~ButtonData();
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
