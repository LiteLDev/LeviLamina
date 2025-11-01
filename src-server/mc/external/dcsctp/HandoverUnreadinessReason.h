#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class HandoverUnreadinessReason : uint {
    // bitfield representation
    KWrongConnectionState = 1u << 0,
    KSendQueueNotEmpty = 1u << 1,
    KPendingStreamResetRequest = 1u << 2,
    KDataTrackerTsnBlocksPending = 1u << 3,
    KPendingStreamReset = 1u << 4,
    KReassemblyQueueDeliveredTSNsGap = 1u << 5,
    KStreamResetDeferred = 1u << 6,
    KOrderedStreamHasUnassembledChunks = 1u << 7,
    KUnorderedStreamHasUnassembledChunks = 1u << 8,
    KRetransmissionQueueOutstandingData = 1u << 9,
    KRetransmissionQueueFastRecovery = 1u << 10,
    KRetransmissionQueueNotEmpty = 1u << 11,
    KMax = 1u << 11,
};

}
