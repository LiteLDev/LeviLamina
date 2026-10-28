#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ECSSystemNameEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke48252;
    ::ll::UntypedStorage<8, 16> mUnk74245e;
    // NOLINTEND

public:
    // prevent constructor by default
    ECSSystemNameEntry& operator=(ECSSystemNameEntry const&);
    ECSSystemNameEntry(ECSSystemNameEntry const&);
    ECSSystemNameEntry();
};

} // namespace Bedrock::Profiling::Orchestrator
