#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class AssignedThread; }
// clang-format on

namespace Bedrock::Threading {

class AssignedThreadLocalOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::Threading::AssignedThread&> mTarget;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                     mPreviousId;
    // NOLINTEND

public:
    // prevent constructor by default
    AssignedThreadLocalOverride& operator=(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride();
};

} // namespace Bedrock::Threading
