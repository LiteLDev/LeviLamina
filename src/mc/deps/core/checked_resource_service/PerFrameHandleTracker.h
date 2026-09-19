#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/checked_resource_service/ValidityCheckType.h"

namespace mce {

class PerFrameHandleTracker {
public:
    std::atomic<unsigned short> mCheckCount;
    std::atomic<bool>           mIsValid;

public:
    std::tuple<bool, bool> Validate(ValidityCheckType validityCheckType) {
        bool checkResult = false;

        if (validityCheckType == (ValidityCheckType)0) {
            checkResult = (++mCheckCount == 0);
        }

        return {checkResult, mIsValid.load()};
    }
};

} // namespace mce
