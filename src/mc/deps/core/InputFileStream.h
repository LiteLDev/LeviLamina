#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class InputFileStream {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_INPUTFILESTREAM
public:
    InputFileStream& operator=(InputFileStream const&) = delete;
    InputFileStream(InputFileStream const&)            = delete;
    InputFileStream()                                  = delete;
#endif

public:
};

}; // namespace Core
