#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

struct ConditionVariableShim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke6ff9f;
    ::ll::UntypedStorage<8, 64> mUnk60372a;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionVariableShim& operator=(ConditionVariableShim const&);
    ConditionVariableShim(ConditionVariableShim const&);
    ConditionVariableShim();
};

} // namespace brstd::detail
