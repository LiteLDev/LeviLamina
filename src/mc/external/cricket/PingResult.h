#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket::IceControllerInterface {

struct PingResult {
public:
    // prevent constructor by default
    PingResult& operator=(PingResult const&);
    PingResult(PingResult const&);
    PingResult();
};

} // namespace cricket::IceControllerInterface
