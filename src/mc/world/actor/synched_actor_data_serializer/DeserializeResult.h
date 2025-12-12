#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk9fd2e5;
    ::ll::UntypedStorage<1, 1>  mUnkcc65ae;
    ::ll::UntypedStorage<8, 24> mUnk59782f;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeResult& operator=(DeserializeResult const&);
    DeserializeResult(DeserializeResult const&);
    DeserializeResult();
};

} // namespace SynchedActorDataSerializer
