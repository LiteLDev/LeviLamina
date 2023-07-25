#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Features {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_FEATURES
public:
    Features& operator=(Features const&) = delete;
    Features(Features const&)            = delete;
    Features()                           = delete;
#endif

public:
    /**
     * @symbol ?strictMode\@Features\@Json\@\@SA?AV12\@XZ
     */
    MCAPI static class Json::Features strictMode();
};

}; // namespace Json
