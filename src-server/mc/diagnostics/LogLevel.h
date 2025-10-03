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
    ::ll::TypedStorage<1, 1, ::Bedrock::LogLevel::Type> mType;
    ::ll::TypedStorage<1, 1, bool>                      mLogInPublish;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::LogLevel const& Error();

    MCAPI static ::Bedrock::LogLevel const& Info();

    MCAPI static ::Bedrock::LogLevel const& Warning();
    // NOLINTEND
};

} // namespace Bedrock
