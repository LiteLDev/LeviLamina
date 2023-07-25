#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CRASHUPLOADSTATUS
public:
    CrashUploadStatus& operator=(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&)            = delete;
    CrashUploadStatus()                                    = delete;
#endif

public:
};

}; // namespace Bedrock
