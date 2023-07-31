#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ValueWrapper {

public:
    // prevent constructor by default
    ValueWrapper& operator=(ValueWrapper const&) = delete;
    ValueWrapper(ValueWrapper const&)            = delete;
    ValueWrapper()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?emptyObject\@ValueWrapper\@JSONObject\@Bedrock\@\@SA?AV123\@XZ
     */
    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyObject();
    /**
     * @symbol ??1ValueWrapper\@JSONObject\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ValueWrapper();
    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
