#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

template <int T0>
class ObjectHelperBase {
public:
    // prevent constructor by default
    ObjectHelperBase& operator=(ObjectHelperBase const&);
    ObjectHelperBase(ObjectHelperBase const&);
    ObjectHelperBase();
};

} // namespace Bedrock::JSONObject
