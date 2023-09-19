#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ValueWrapper {
public:
    // prevent constructor by default
    ValueWrapper& operator=(ValueWrapper const&);
    ValueWrapper(ValueWrapper const&);
    ValueWrapper();

public:
    // NOLINTBEGIN
    // symbol: ??1ValueWrapper@JSONObject@Bedrock@@QEAA@XZ
    MCAPI ~ValueWrapper();

    // symbol: ?emptyObject@ValueWrapper@JSONObject@Bedrock@@SA?AV123@XZ
    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyObject();

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
