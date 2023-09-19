#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HttpPerformInfo {
public:
    // prevent constructor by default
    HttpPerformInfo& operator=(HttpPerformInfo const&);
    HttpPerformInfo(HttpPerformInfo const&);
    HttpPerformInfo();
};
