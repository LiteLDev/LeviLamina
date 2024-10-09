#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct FileWriteError {
public:
    // prevent constructor by default
    FileWriteError& operator=(FileWriteError const&);
    FileWriteError(FileWriteError const&);
    FileWriteError();
};

}; // namespace Bedrock::DeviceIdErrorType
