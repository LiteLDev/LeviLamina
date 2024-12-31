#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock::Threading {

class PendingConditionals : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkac936f;
    ::ll::UntypedStorage<8, 24> mUnkd1de75;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingConditionals& operator=(PendingConditionals const&);
    PendingConditionals(PendingConditionals const&);
    PendingConditionals();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PendingConditionals() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading
