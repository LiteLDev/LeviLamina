#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ReceiveDataParams {
public:
    // prevent constructor by default
    ReceiveDataParams& operator=(ReceiveDataParams const&);
    ReceiveDataParams(ReceiveDataParams const&);
    ReceiveDataParams();
};

}; // namespace cricket
