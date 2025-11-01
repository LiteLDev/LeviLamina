#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class LogLevel; }
// clang-format on

namespace Bedrock {

class AssertLevel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnka53e7e;
    ::ll::UntypedStorage<1, 1> mUnk3f37a2;
    // NOLINTEND

public:
    // prevent constructor by default
    AssertLevel& operator=(AssertLevel const&);
    AssertLevel(AssertLevel const&);
    AssertLevel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::LogLevel debugFail(::brstd::function_ref<::std::string()> message, ::Bedrock::CallStack::Frame location) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::AssertLevel const& DebugAssert();
    // NOLINTEND

};

}
