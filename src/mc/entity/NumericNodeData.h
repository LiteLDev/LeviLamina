#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityGoalUtility {

template <typename T0, typename T1>
struct NumericNodeData {

public:
    // prevent constructor by default
    NumericNodeData& operator=(NumericNodeData const&) = delete;
    NumericNodeData(NumericNodeData const&)            = delete;
    NumericNodeData()                                  = delete;
};

}; // namespace EntityGoalUtility
