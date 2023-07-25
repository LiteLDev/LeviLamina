#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

template <typename T0, typename T1>
class JsonParseState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONUTIL_JSONPARSESTATE
public:
    JsonParseState& operator=(JsonParseState const&) = delete;
    JsonParseState(JsonParseState const&)            = delete;
    JsonParseState()                                 = delete;
#endif

public:
};

}; // namespace JsonUtil
