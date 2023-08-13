#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileStream.h"

namespace Core {

class OutputFileStream : public ::Core::FileStream {

public:
    // prevent constructor by default
    OutputFileStream& operator=(OutputFileStream const&) = delete;
    OutputFileStream(OutputFileStream const&)            = delete;
    OutputFileStream()                                   = delete;
};

}; // namespace Core
