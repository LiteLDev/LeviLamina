#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class OutputFileStream {

public:
    // prevent constructor by default
    OutputFileStream& operator=(OutputFileStream const&) = delete;
    OutputFileStream(OutputFileStream const&)            = delete;
    OutputFileStream()                                   = delete;
};

}; // namespace Core
