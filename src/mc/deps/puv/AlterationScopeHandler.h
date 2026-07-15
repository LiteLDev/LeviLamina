#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct AlterationScopeHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd5b277;
    ::ll::UntypedStorage<8, 8> mUnk48a1e1;
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationScopeHandler& operator=(AlterationScopeHandler const&);
    AlterationScopeHandler(AlterationScopeHandler const&);
    AlterationScopeHandler();
};

} // namespace Puv::internal
