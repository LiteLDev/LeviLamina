#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Features {
public:
    bool strictRoot_;
    bool allowNumericKeys_;

public:
    // NOLINTBEGIN
    MCAPI static class Json::Features strictMode();

    // NOLINTEND
};

}; // namespace Json
