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
    // NOLINTEND

public:
    // prevent constructor by default
    AssignedThreadLocalOverride& operator=(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride(AssignedThreadLocalOverride const&);
    AssignedThreadLocalOverride();
};

} // namespace Bedrock::Threading
