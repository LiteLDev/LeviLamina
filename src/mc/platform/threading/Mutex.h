#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class Mutex : public std::mutex {
public:
    using std::mutex::mutex;
};

}; // namespace Bedrock::Threading
