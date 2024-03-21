#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorData {

template <typename T0>
struct DiffInfo {
public:
    // prevent constructor by default
    DiffInfo& operator=(DiffInfo const&);
    DiffInfo(DiffInfo const&);
    DiffInfo();
};

}; // namespace ActorData
