#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class TradeStatus : int {
    TradeStatusInvalid   = 0,
    TradeStatusOpening   = 1,
    TradeStatusOpen      = 2,
    TradeStatusAccepting = 3,
    TradeStatusAccepted  = 4,
    TradeStatusFilled    = 5,
    TradeStatusCancelled = 6,
};

}
