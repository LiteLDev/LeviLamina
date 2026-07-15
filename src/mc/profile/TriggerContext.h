#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct TriggerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7da85c;
    ::ll::UntypedStorage<4, 4>  mUnk248759;
    // NOLINTEND

public:
    // prevent constructor by default
    TriggerContext& operator=(TriggerContext const&);
    TriggerContext(TriggerContext const&);
    TriggerContext();
};

} // namespace Bedrock::Profiling::Orchestrator
