#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataSerializer {

struct DeserializeArgs {
public:
    // prevent constructor by default
    DeserializeArgs& operator=(DeserializeArgs const&);
    DeserializeArgs(DeserializeArgs const&);
    DeserializeArgs();
};

}; // namespace SynchedActorDataSerializer
