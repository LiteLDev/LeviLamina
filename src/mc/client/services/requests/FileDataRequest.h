#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileDataRequest {
public:
    // prevent constructor by default
    FileDataRequest& operator=(FileDataRequest const&);
    FileDataRequest(FileDataRequest const&);
    FileDataRequest();
};
