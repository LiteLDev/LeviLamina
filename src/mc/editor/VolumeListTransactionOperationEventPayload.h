#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct VolumeListTransactionOperationEventPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk552b70;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeListTransactionOperationEventPayload& operator=(VolumeListTransactionOperationEventPayload const&);
    VolumeListTransactionOperationEventPayload(VolumeListTransactionOperationEventPayload const&);
    VolumeListTransactionOperationEventPayload();
};

} // namespace Editor::Transactions
