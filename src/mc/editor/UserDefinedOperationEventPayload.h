#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct UserDefinedOperationEventPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbfb6d9;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDefinedOperationEventPayload& operator=(UserDefinedOperationEventPayload const&);
    UserDefinedOperationEventPayload(UserDefinedOperationEventPayload const&);
    UserDefinedOperationEventPayload();
};

} // namespace Editor::Transactions
