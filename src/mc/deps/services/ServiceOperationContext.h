#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct ServiceOperationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2a2258;
    ::ll::UntypedStorage<8, 16> mUnk27ec15;
    ::ll::UntypedStorage<8, 16> mUnk715c07;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceOperationContext& operator=(ServiceOperationContext const&);
    ServiceOperationContext(ServiceOperationContext const&);
    ServiceOperationContext();
};

} // namespace Bedrock::Services
