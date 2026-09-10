#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

struct InitImplResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8b1de5;
    ::ll::UntypedStorage<8, 8> mUnkd4e65c;
    ::ll::UntypedStorage<8, 8> mUnk58f580;
    // NOLINTEND

public:
    // prevent constructor by default
    InitImplResult& operator=(InitImplResult const&);
    InitImplResult(InitImplResult const&);
    InitImplResult();
};

} // namespace DedicatedServerInitialization
