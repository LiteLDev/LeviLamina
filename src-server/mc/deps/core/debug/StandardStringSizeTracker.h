#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct StandardStringSizeTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk114aa8;
    ::ll::UntypedStorage<8, 8> mUnk818947;
    ::ll::UntypedStorage<8, 8> mUnkd654f4;
    ::ll::UntypedStorage<8, 8> mUnk48e6b3;
    // NOLINTEND

public:
    // prevent constructor by default
    StandardStringSizeTracker& operator=(StandardStringSizeTracker const&);
    StandardStringSizeTracker(StandardStringSizeTracker const&);
    StandardStringSizeTracker();
};

} // namespace Bedrock
