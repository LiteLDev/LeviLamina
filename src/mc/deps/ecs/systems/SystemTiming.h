#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
struct SystemCategory;
// clang-format on

struct SystemTiming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mSystemName;
    ::ll::TypedStorage<4, 4, int>                                   mEntityCount;
    ::ll::TypedStorage<4, 4, float>                                 mTimeMs;
    ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::SystemCategory>> mCategory;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SystemTiming();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
