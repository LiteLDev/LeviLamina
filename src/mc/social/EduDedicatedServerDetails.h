#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduDedicatedServerDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8cc870;
    ::ll::UntypedStorage<8, 32> mUnk87def5;
    ::ll::UntypedStorage<4, 4>  mUnkef99b3;
    ::ll::UntypedStorage<4, 4>  mUnkc7f910;
    ::ll::UntypedStorage<4, 4>  mUnkb5254f;
    ::ll::UntypedStorage<1, 1>  mUnk6dfff0;
    ::ll::UntypedStorage<1, 1>  mUnk98bd21;
    ::ll::UntypedStorage<1, 1>  mUnkf77e0d;
    ::ll::UntypedStorage<1, 1>  mUnke93248;
    ::ll::UntypedStorage<1, 1>  mUnkcc60a5;
    ::ll::UntypedStorage<1, 1>  mUnk5c5ed8;
    ::ll::UntypedStorage<1, 1>  mUnk717b27;
    // NOLINTEND

public:
    // prevent constructor by default
    EduDedicatedServerDetails(EduDedicatedServerDetails const&);
    EduDedicatedServerDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Bedrock::Result<void> fromJsonValue(::Json::Value const& details);

    MCNAPI_C ::Social::EduDedicatedServerDetails& operator=(::Social::EduDedicatedServerDetails&&);

    MCNAPI_C ::Social::EduDedicatedServerDetails& operator=(::Social::EduDedicatedServerDetails const&);

    MCNAPI_C ::Json::Value toJsonValue() const;

    MCNAPI_C ~EduDedicatedServerDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
