#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {
public:
    // prevent constructor by default
    CrashUploadStatus& operator=(CrashUploadStatus const&);
    CrashUploadStatus(CrashUploadStatus const&);
    CrashUploadStatus();
};

}; // namespace Bedrock
