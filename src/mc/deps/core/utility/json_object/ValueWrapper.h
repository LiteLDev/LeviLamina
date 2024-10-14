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
    MCAPI ~ValueWrapper();

    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyArray();

    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyObject();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _moveConstruct(class Bedrock::JSONObject::ValueWrapper&& other);

    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(int64 n);

    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(bool b);

    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(double d);

    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(char const* s, uint64 length, bool copy);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
