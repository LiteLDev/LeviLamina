#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogLevel {
public:
    // LogLevel inner types declare
    // clang-format off
    struct InPublishT;
    // clang-format on

    // LogLevel inner types define
    enum class Type : uchar {
        // bitfield representation
        Verbose = 1 << 0,
        Info    = 1 << 1,
        Warning = 1 << 2,
        Error   = 1 << 3,
    };

    struct InPublishT {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a2a04;
    ::ll::UntypedStorage<1, 1> mUnkd8648b;
    // NOLINTEND

public:
    // prevent constructor by default
    LogLevel& operator=(LogLevel const&);
    LogLevel(LogLevel const&);
    LogLevel();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::LogLevel const& Error();

    MCNAPI static ::Bedrock::LogLevel const& Info();

    MCNAPI static ::Bedrock::LogLevel const& Warning();
    // NOLINTEND
};

} // namespace Bedrock
