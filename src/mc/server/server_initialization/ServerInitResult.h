#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInitialization {

struct ServerInitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8fdec5;
    ::ll::UntypedStorage<8, 16> mUnk7b752f;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInitResult& operator=(ServerInitResult const&);
    ServerInitResult(ServerInitResult const&);
    ServerInitResult();
};

} // namespace ServerInitialization
