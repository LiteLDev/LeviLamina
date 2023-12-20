#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // prevent constructor by default
    DeserializeResult& operator=(DeserializeResult const&);
    DeserializeResult(DeserializeResult const&);
    DeserializeResult();
};

}; // namespace SynchedActorDataSerializer
