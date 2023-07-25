#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ValueWrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_VALUEWRAPPER
public:
    ValueWrapper& operator=(ValueWrapper const&) = delete;
    ValueWrapper(ValueWrapper const&)            = delete;
    ValueWrapper()                               = delete;
#endif

public:
    /**
     * @symbol ??1ValueWrapper\@JSONObject\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ValueWrapper();
    /**
     * @symbol ?emptyObject\@ValueWrapper\@JSONObject\@Bedrock\@\@SA?AV123\@XZ
     */
    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyObject();
};

}; // namespace Bedrock::JSONObject
