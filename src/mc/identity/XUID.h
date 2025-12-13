#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Social {

struct XUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkacf01a;
    // NOLINTEND

public:
    // prevent constructor by default
    XUID& operator=(XUID const&);
    XUID(XUID const&);
    XUID();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Bedrock::Result<::Social::XUID> parse(::std::string_view xuidString, bool allowGuestXUIDs);
    // NOLINTEND
};

} // namespace Social
