#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

template <typename T0>
class TransferData {

public:
    // prevent constructor by default
    TransferData& operator=(TransferData const&) = delete;
    TransferData(TransferData const&)            = delete;
    TransferData()                               = delete;
};

}; // namespace OperationNodeDetails
