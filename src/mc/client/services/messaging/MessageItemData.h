#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MessageItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkd4c03b;
    ::ll::UntypedStorage<8, 32>  mUnkec9b4b;
    ::ll::UntypedStorage<8, 136> mUnk71c457;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItemData(MessageItemData const&);
    MessageItemData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit MessageItemData(::Json::Value const& json);

    MCNAPI_C ::MessageItemData& operator=(::MessageItemData const&);

    MCNAPI_C ~MessageItemData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
