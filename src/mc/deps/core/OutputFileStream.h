#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class OutputFileStream {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_OUTPUTFILESTREAM
public:
    OutputFileStream& operator=(OutputFileStream const&) = delete;
    OutputFileStream(OutputFileStream const&)            = delete;
    OutputFileStream()                                   = delete;
#endif

public:
};

}; // namespace Core
