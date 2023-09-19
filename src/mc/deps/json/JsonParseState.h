#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

template <typename T0, typename T1>
class JsonParseState {
public:
    // prevent constructor by default
    JsonParseState& operator=(JsonParseState const&);
    JsonParseState(JsonParseState const&);
    JsonParseState();
};

}; // namespace JsonUtil
