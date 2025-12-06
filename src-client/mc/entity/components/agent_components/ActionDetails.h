#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ActionDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk11df84;
    ::ll::UntypedStorage<4, 4>  mUnka6f6b0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);
    ActionDetails(ActionDetails const&);
    ActionDetails();
};

} // namespace AgentComponents
