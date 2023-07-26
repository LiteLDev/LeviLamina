#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Features {

public:
    // prevent constructor by default
    Features& operator=(Features const&) = delete;
    Features(Features const&)            = delete;
    Features()                           = delete;

public:
    /**
     * @symbol ?strictMode\@Features\@Json\@\@SA?AV12\@XZ
     */
    MCAPI static class Json::Features strictMode(); // NOLINT
};

}; // namespace Json
