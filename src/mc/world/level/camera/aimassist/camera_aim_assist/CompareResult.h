#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssist {

struct CompareResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6af680;
    ::ll::UntypedStorage<8, 8> mUnk1713a9;
    // NOLINTEND

public:
    // prevent constructor by default
    CompareResult& operator=(CompareResult const&);
    CompareResult(CompareResult const&);
    CompareResult();
};

} // namespace CameraAimAssist
