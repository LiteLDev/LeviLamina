#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayerReportingSignal {

struct JsonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke8ea87;
    ::ll::UntypedStorage<8, 16> mUnk6e7679;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonData& operator=(JsonData const&);
    JsonData(JsonData const&);
    JsonData();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string key, ::Json::Value value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace PlayerReportingSignal
