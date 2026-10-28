#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct PrefabInstanceTransactionOperationEventPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke7c6d1;
    ::ll::UntypedStorage<8, 40> mUnkf89713;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabInstanceTransactionOperationEventPayload& operator=(PrefabInstanceTransactionOperationEventPayload const&);
    PrefabInstanceTransactionOperationEventPayload(PrefabInstanceTransactionOperationEventPayload const&);
    PrefabInstanceTransactionOperationEventPayload();
};

} // namespace Editor::Transactions
