#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class TransactionStatus : int {
    TransactionStatusCreateCart       = 0,
    TransactionStatusInit             = 1,
    TransactionStatusApproved         = 2,
    TransactionStatusSucceeded        = 3,
    TransactionStatusFailedByProvider = 4,
    TransactionStatusDisputePending   = 5,
    TransactionStatusRefundPending    = 6,
    TransactionStatusRefunded         = 7,
    TransactionStatusRefundFailed     = 8,
    TransactionStatusChargedBack      = 9,
    TransactionStatusFailedByUber     = 10,
    TransactionStatusFailedByPlayFab  = 11,
    TransactionStatusRevoked          = 12,
    TransactionStatusTradePending     = 13,
    TransactionStatusTraded           = 14,
    TransactionStatusUpgraded         = 15,
    TransactionStatusStackPending     = 16,
    TransactionStatusStacked          = 17,
    TransactionStatusOther            = 18,
    TransactionStatusFailed           = 19,
};

}
