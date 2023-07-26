#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class InputFileStream {

public:
    // prevent constructor by default
    InputFileStream& operator=(InputFileStream const&) = delete;
    InputFileStream(InputFileStream const&)            = delete;
    InputFileStream()                                  = delete;
};

}; // namespace Core
