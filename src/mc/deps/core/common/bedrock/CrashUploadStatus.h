#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {

public:
    // prevent constructor by default
    CrashUploadStatus& operator=(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&)            = delete;
    CrashUploadStatus()                                    = delete;
};

}; // namespace Bedrock
