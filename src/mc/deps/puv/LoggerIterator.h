#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

template <typename T0>
class LoggerIterator {
public:
    // prevent constructor by default
    LoggerIterator& operator=(LoggerIterator const&);
    LoggerIterator(LoggerIterator const&);
    LoggerIterator();
};

} // namespace Puv
