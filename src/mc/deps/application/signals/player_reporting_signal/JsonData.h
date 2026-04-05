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
    ::ll::UntypedStorage<8, 32> mUnk6f699b;
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
#ifdef LL_PLAT_C
    MCNAPI JsonData(::std::string key, ::Json::Value value);

    MCNAPI ~JsonData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string key, ::Json::Value value);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace PlayerReportingSignal
